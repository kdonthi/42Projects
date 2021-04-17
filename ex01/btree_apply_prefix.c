#include "../ft_btree.h"
#include <stdio.h>
void printvalue(void* val)
{
    printf("%i", *((int*) val));
}

void btree_apply_prefix(t_btree *root, void (*applyf)(void*))
{
    //if left doesn't have any children apply function
    //otherwise, do btree_apply_prefix on leftchild
    if (!root)
        return ;
    applyf(root->item);
    if (root->left)
        btree_apply_prefix(root->left, applyf);
    if (root->right)
        btree_apply_prefix(root->right, applyf);
    //if right doesn't have any children apply function
    //else, apply function on root

}

int main()
{
    t_btree* root;
    int a = 1;
    root = btree_create_node((void*) &a);
    int b = 2;
    root->left = btree_create_node((void*) &b);
    int c = 3;
    root->right = btree_create_node((void*) &c);
    int d = 4;
    root->left->left = btree_create_node((void*) &d);
    int e = 5;
    root->left->right = btree_create_node((void*) &e);

    btree_apply_prefix(root, &printvalue);
    printf("\n");
}
