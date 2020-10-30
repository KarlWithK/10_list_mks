#ifndef LINK_LIST_STRUCT
#define LINK_LIST_STRUCT
struct node {
  int data;
  struct node *next;
};

/* node stuff */
struct node * create_node();
struct node * clear_node(struct node *nodep);
struct node * insert_front(struct node *nodep);
struct node * remove_node(struct node *nodep);
void print_node(struct node *nodep);
void print_list(struct node *nodep);
void change_data(struct node *nodep, int data);
void free_list(struct node *nodep);

/* struct chain { */
/*   struct node *head; */
/* }; */

/* chain stuff */
/* struct chain *create_chain(); */
/* struct chain *clear_chain(struct chain *chainp); */
/* void print_chain(struct chain *chainp); */
/* void insert(struct chain *chainp, int data); */
/* int get_size(struct chain *chainp); */
#endif /* ifndef LINK_LIST_STRUCT */
