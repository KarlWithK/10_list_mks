#ifndef FIGHTER_LIST_STRUCT
#define FIGHTER_LIST_STRUCT
struct fighter {
  char *street_name;
  int powerlevel;
  int times_revieved;
  struct fighter *next;
};

struct fighter *create_fighter(char *street_name, int level, int deaths);
struct fighter *clear_fighter(struct fighter *fighter_name);
void print_fighter(struct fighter *street_name);
void change_street_name(struct fighter *street_name, char *new_steet_name);
void increase_deaths(struct fighter *street_name);

struct fighter *insert_front(struct fighter *nodep);
struct fighter *remove_node(struct fighter *nodep);
void print_node(struct fighter *nodep);
void print_list(struct fighter *nodep);
void change_data(struct fighter *nodep, int data);
void free_list(struct fighter *nodep);

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
