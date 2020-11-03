#include "fighter.h"

int main() {
  struct Fighter *first = create_fighter("Hello", 0, 0);
  struct Fighter *head = insert_front(first, "bruh", 0, 0);
  struct Fighter *what = insert_front(head, "nah" , 0, 0);
  print_list(what);
  struct Fighter *new = remove_node(what, "bruh");
  print_list(new);
  struct Fighter *none = free_list(what);
  print_list(none);
}
