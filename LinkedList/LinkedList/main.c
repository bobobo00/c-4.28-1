#define _CRT_SECURE_NO_WARNINGS 1
#include "LinkedList.h"
int main(){
	Linklist head;
	head = (Linklist)malloc(sizeof(Node));
	InitLinklist(head);
	/*Insert_ahead(head);*/
	Insert_stren(head);
	/*char elem = '0';
	printf("Plese input delet char");
	scanf("%c", &elem);*/
	/*Delet_Linklist1(head, '3');*/
	/*Insert_Linklist(head, 3, '3');*/
	Reserve_Linklist(head);
	Print(head);
	system("pause");
	return 0;
}