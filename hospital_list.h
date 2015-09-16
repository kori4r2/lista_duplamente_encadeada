#ifndef HOSPITAL_LIST_H
#define HOSPITAL_LIST_H

#include <stdio.h>

typedef struct list LIST;
typedef struct node NODE;

LIST *create_list(void);
void delete_list(LIST**);
void print_positions(LIST*);
void print_ids(LIST*);
LIST *get_list(FILE*);
LIST *get_special_list(LIST*);
int update_list(LIST*);

#endif
