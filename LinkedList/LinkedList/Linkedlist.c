#define _CRT_SECURE_NO_WARNINGS 1
#include "LinkedList.h"
//初始化链表
int InitLinklist(Linklist head){
	if (head){
		head->next = NULL;
		return 1;
	}
	else{
		return 0;
	}
}
int Length(Linklist head){
	int count = 0;
	Linklist l;
	l = head->next;
	while (l != NULL){
		count++;
		l = l->next;
	}
	return count;
}
//头插法
Linklist Insert_ahead(Linklist head){
	Linklist l;
	Node *s;
	l = head;
	char c;
	int flag = 1;
	while (flag){
		scanf("%c", &c);
		if (c != '$'){
			s = (Linklist)malloc(sizeof(Node));
			s->data = c;
			s->next = l->next;
			l->next = s;
		}
		else{
			flag = 0;
		}
	}
	return l;
}
//尾插法
Linklist Insert_stren(Linklist head){
	Linklist l;
	Node *s;
	l = head;
	char c;
	int flag = 1;
	while (flag){
		scanf("%c", &c);
		if (c != '$'){
			s = (Linklist)malloc(sizeof(Node));
			s->data = c;
			s->next = NULL;
			l->next = s;
			l = s;
		}
		else{
			flag = 0;
		}
	}
	return l;
}
//删除指定位置
Linklist Delet_Linklist(Linklist head, int location){
	Linklist del = NULL;
	Linklist l;
	l = head->next;
	int i = 0;
	if (location<0 || location>Length(head)){
		printf("Plese input a right locatioon:>\n");
	}
	if (location == Length(head)){
		for (i = 1; i < location - 1; i++){
			l = l->next;
		}
		del = l->next;
		l->next = NULL;
	}
	else if (l->next != NULL){
		for (i = 1; i < location - 1; i++){
			l = l->next;
		}
		del = l->next;
		l->next = l->next->next;
	}
	free(del);
	return head;
}
//删除指定元素
Linklist Delet_Linklist1(Linklist head, char elem){
	Linklist l;
	Linklist del = NULL;
	l = head->next;
	while (l->next->data != elem){
		l = l->next;
	}
	del = l->next;
	l->next = l->next ->next;
	free(del);
	return head;
}
//在指定位置插入指定元素
Linklist Insert_Linklist(Linklist head, int loc, char elem){
	Linklist l;
	Linklist s = (Linklist)malloc(sizeof(Node));
	s->data = elem;
	s->next = NULL;
	l = head->next;
	int i = 0;
	for (i = 1; i < loc-1; i++){
		l = l->next;
	}
	s->next = l->next;
	l->next = s;
	return l;
}
//就地逆转链表
Linklist Reserve_Linklist(Linklist head){
	Linklist p, q, t;
	p = head;
	q = p->next;
	t = q->next;
	

	q->next = t->next;
	t->next = q;
	p->next = t;
	t = q->next;

	while (t != NULL&&q != NULL){
		q->next = t->next;
		t->next = p->next;
		p->next = t;
		t = q->next;
	}
	return p;
}

//打印链表
void Print(Linklist head){
	Linklist l;
	l = head->next; 
	while (l != NULL){
		printf("%c", l->data);
		l = l->next;
	}
	printf("\n");
}