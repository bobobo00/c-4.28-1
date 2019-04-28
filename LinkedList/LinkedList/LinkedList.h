#ifndef _LINKEDLIST_H_
#define _LINKEDLIST_H_

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct node{
	char data;
	struct node *next;
}*Linklist, Node;

int InitLinklist(Linklist head);
Linklist Insert_ahead(Linklist head);
Linklist Insert_stren(Linklist head);
int Length(Linklist head);
Linklist Delet_Linklist(Linklist head, int location);
Linklist Delet_Linklist1(Linklist head, char elem);
void Print(Linklist head);
Linklist Insert_Linklist(Linklist head, int loc, char elem);
Linklist Reserve_Linklist(Linklist head);

#endif