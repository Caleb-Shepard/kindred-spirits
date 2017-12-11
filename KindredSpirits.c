#ifndef __KINDREDSPIRITS_H
#define __KINDREDSPIRITS_H

typedef struct node
{
	// Each node holds a single integer.
	int data;

	// Pointers to the node's left and right children.
	struct node *left, *right;
} node;

node *create_node(int data){
    node *n = malloc(sizeof(node));

    n->data = data;
    n->left = n->right = 0; // these are both null, idk if this line is necesry

    return n;
}

node *delet_this(node *root){
    if(!root)
        return 0;

    forest_fire(root->left);
    forest_fire(root->right);
    free(root);
}

void preorder(node *a){

    if(!a)
        return 0;

    printf("node is %d \n", a->data);
    preorder(a->left);
    preorder(a->right);
}

void inorder(struct node *node){

    if(!current)
        return 0;

    inorder(node->left);
    printf("node is %d\n", node->data);
    inorder(node->right);
}

void postorder(struct node* node){
    // 1.
    // if the current node is null just return
    if(!current)
        return 0;

    postorder(node->left);
    postorder(node->right);
    printf("node is %d \n", node->data);
}

// Functional Prototypes

int isReflection(node *a, node *b){
    if(!a && !b)
        return 1;
    if(!a || !b)
        return 0;

    /* just check for equality in this function and arrange to check reflection
    * recursively. Following recursive line was too long so it is split without
    * a semicolon. Use && to see if they are reflections when they do return.*/
    if(a->data == b->data)
        return  isReflection(a->left, b->right) &&
                isReflection(b->left, a->right);
    else
        return 0;

    // something went wrong if you got to this point ;(
    return 0;
}

node *makeReflection(node *root);

int tree_size(struct node *a){
    if(!node)
        return 0;
    else // add one for current node and recurse through remaining subtrees
        return(tree_size(node->left) + 1 + tree_size(node->right));
}

// you need to free() these later!
// gives a tree as an array
int [] preorder_assignment(node *a){
    int size_tree = tree_size(a);
    int *arr = malloc(size_tree * sizeof *arr);
    node *ptr = a;
    while(i < size_tree){               // maybe size_tree -1? Haven't run yet
        if(ptr->data != NULL){          // putting null here because idk how it
            arr[i] = ptr->data;         // would treat 0 so being cautious
            i++;
        }
        else if(ptr->left){
            ptr = ptr->left;
        }
        else if(ptr->right){
            arr[i] = ->data
        }
        else
            printf("Something went wrong. Maybe forgot to end process\n");
            // if you get this as output, brace it and try i++
    }
    return arr;
}

// same as previous funct but will give in postorder_assignment
int [] postorder_assignment(node *a){

}

void rek_dis_array(int [] rekt_me_plz, int size){
    int i;
    i = 0;
    while(i < size){
        
    }
}

int kindredSpirits(node *a, node *b){
    // we run a through preorder and b through postorder; it's arbitrary
    int size_tree, size_check;
    size_tree = tree_size(a);
    size_check = tree_size(b);

    if(size_tree != size_check)
        return 0;

    // store preorder into an array and compare the elements with postorder
    int [size_tree] a_elem;
    int [size_tree] b_elem;

    a_elem = preorder_assignment(a);
    b_elem = postorder_assignment(b);

    // compare array elements with your preorder
    while(){

    }

    if(!a && !b)
        return 1;
    if(!a || !b)
        return 0;

    da = a->data;

    if(db->left)

}

double difficultyRating(void);

double hoursSpent(void);

#endif
