#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct node{
    char name[10];
    char number[20];
    char email[30];
    struct node *next;
};

//리스트가 비어있을 떄, head == NULL
struct node *head = NULL;

void print_list(struct node *head){
    struct node *temp = head;

    while(temp != NULL){
        printf("Name: %s\n", temp->name);
        printf("Number: %s\n", temp->number);
        printf("Email: %s\n", temp->email);
        printf("\n");
        temp = temp->next;
    }
}

int main(){
    struct node *p;

    p = (struct node *) malloc(sizeof(struct node));
    strcpy(p->name, "홍길동");
    strcpy(p->number,"010-1111-1111");
    strcpy(p->email,"gdhong@kku.ac.kr");
    p->next = NULL;
    head = p;
    
    p = (struct node *) malloc(sizeof(struct node));
    strcpy(p->name, "임꺽정");
    strcpy(p->number,"010-2222-2222");
    strcpy(p->email,"kkjlim@naver.com");
    p->next = NULL;
    head->next = p;

     p = (struct node *) malloc(sizeof(struct node));
    strcpy(p->name, "이순신");
    strcpy(p->number,"010-3333-3333");
    strcpy(p->email,"sslee@gmail.com");
    p->next = NULL;
    head->next->next = p;

    p = (struct node *) malloc(sizeof(struct node));
    strcpy(p->name, "김유신");
    strcpy(p->number,"010-4444-4444");
    strcpy(p->email,"yskim@daum.net");
    p->next = NULL;
    head->next->next->next = p;

    print_list(head);

    return 0;
}
