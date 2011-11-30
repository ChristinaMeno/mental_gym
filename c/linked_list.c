#include <stdio.h>
#include <stdlib.h>

typedef struct node {
  int data;
  struct node *next;
} node;

void add(node **my_list, int data)
{
    node *new_node = malloc(sizeof(node));
    new_node->data = data;
    if (my_list == NULL)
    { 
        *my_list = new_node;
    }
    else
    {
        new_node->next = *my_list;
        *my_list = new_node;
    }
    
}

node *find(node *n, int data)
{
    if (n == NULL)
    {
        return NULL;
    }
    if (n->data == data)
    {
        return n;
    }
    else
    {
        return find(n->next, data);
    }
}


/* Totally useless, this is not a library function, move along */
void print_list(node *list)
{
    for(node *iter = list; iter != NULL; iter = iter->next)
    {
        printf("%d\n", iter->data);
    }
    
}

int main()
{
    node *my_list = NULL;
    add(&my_list, 5);
    add(&my_list, 6);
    add(&my_list, 1);
    print_list(my_list);
    node *result = find(my_list, 6);
    if (result != NULL)
        printf("%d found\n", result->data);

    return 0;
}

