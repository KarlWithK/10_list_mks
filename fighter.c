#include "fighter.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void print_fighter(struct fighter *street_name) {
  printf("Fighter's street name: %s, powerlevel: %d, times killed: %d\n",
         street_name->street_name, street_name->powerlevel,
         street_name->times_revieved);
}

struct fighter *create_fighter(char *street_name, int level, int deaths) {
  struct fighter *mars = malloc(sizeof(struct fighter));
  // Pointing to a char pointer so have to use this function below
  mars->street_name = strdup(street_name);
  mars->powerlevel = level;
  mars->times_revieved = deaths;
  return mars;
}

struct fighter *clear_fighter(struct fighter *fighter_name) {
  free(fighter_name->street_name);
  free(fighter_name);
  return NULL;
}

void change_street_name(struct fighter *street_name, char *new_steet_name) {
  street_name->street_name = strdup(new_steet_name);
}

void increase_deaths(struct fighter *street_name) {
  street_name->times_revieved++;
}
