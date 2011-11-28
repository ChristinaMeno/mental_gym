#include <stdio.h>
#include <stdlib.h>

struct node {
  int data;
  struct node *next;
};

struct linked_list {
    struct node *head;
    struct node *tail;
}; 

void add(struct linked_list *my_list, int data)
{
    struct node *new_node = malloc(sizeof(struct node));
    new_node->data = data;
    if (my_list->head == NULL)
    { 
        my_list->head = my_list->tail = new_node;
    }
    else
    {
        my_list->tail->next = new_node;
        my_list->tail = new_node;
    }
    
}

/* Totally useless, this is not a library function, move along */
void print_list(struct linked_list *list)
{
    for(struct node *iter = list->head; iter != NULL; iter = iter->next)
    {
        printf("%d\n", iter->data);
    }
    
}

int main()
{
    struct linked_list *my_list;
    my_list = malloc(sizeof(struct linked_list));
    my_list->head = my_list->tail = NULL;
    add(my_list, 5);
    add(my_list, 6);
    add(my_list, 1);
    print_list(my_list);

    return 0;
}

