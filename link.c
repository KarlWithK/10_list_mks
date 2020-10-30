#include "link.h"
#include <stdio.h>
#include <stdlib.h>

struct node * create_node();
struct node * clear_node(struct node *nodep);
struct node * insert_front(struct node *nodep);
struct node * remove_node(struct node *nodep);
void print_node(struct node *nodep);
void change_data(struct node *nodep, int data);
void print_list(struct node *nodep);
void free_list(struct node *nodep);

struct node *create_node(int data) {
  return NULL;
}

/* struct chain *create_chain() { */
/*   struct chain *link = malloc(sizeof(struct chain)); */
/*   link->head = NULL; */        
/*   return link; */
/* } */
