#include "../ft_btree.h"
#include <stdio.h>
#include <stdlib.h>
t_btree *btree_create_node(void *item)
{
    t_btree* node = malloc(sizeof(t_btree));

    node->left = 0;
    node->right = 0;
    node->item = item;
    return (node);
}


/*
int main() {
    int a = 3;
    char name[] = "Kaushik\0";
    t_btree hasone = *(btree_create_node((void*) name));
    printf("%s\n", (char*) hasone.item);
}
*/
