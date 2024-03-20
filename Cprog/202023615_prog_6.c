#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct node{
    char name[10];
    char number[20];
    char email[30];
    struct node *next;
};

struct node *head = NULL;

void print_list(struct node *h){

    struct node *p;
    p = h;

    while(p != NULL){
        printf(" --> %s\n %s\n %s\n", p->name, p->number, p->email);
        p = p->next;
    }
    printf("\n");
}

void add_head(char *name, int *number, int *email){
    struct node *p;

    p = (struct node *) malloc(sizeof(struct node));
    
    strcpy(p->name, name);
    strcpy(p->number,number);
    strcpy(p->email,email);
    p->next = head;
    head = p;
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
    p->next = head;
    head = p;
   

     p = (struct node *) malloc(sizeof(struct node));
    strcpy(p->name, "이순신");
    strcpy(p->number,"010-3333-3333");
    strcpy(p->email,"sslee@gmail.com");
    p->next = head;
    head = p;
   

    p = (struct node *) malloc(sizeof(struct node));
    strcpy(p->name, "김유신");
    strcpy(p->number,"010-4444-4444");
    strcpy(p->email,"yskim@daum.net");
    p->next = head;
    head = p;
    
    print_list(head);
    

    return 0;
}