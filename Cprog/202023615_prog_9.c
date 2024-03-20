#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct contact {
    char name[10];
    char phone[20];
    char email[30];
    struct contact *next;
};

struct contact *head = NULL;

void print_list(struct contact *h) {
    struct contact *p;
    p = h;

    while(p != NULL){
        printf(" --> %s\n", p->name);
        p = p->next;
    }
    printf("\n");
}

void add_head(char *name, char *phone, char *email) {
    struct contact *node = malloc(sizeof(struct contact));

    strcpy(node->name, name);
    strcpy(node->phone, phone);
    strcpy(node->email, email);
    node->next = head;
    head = node;
}

void add_tail(char *name, char *phone, char *email) {
    struct contact *p;

    p = (struct contact *) malloc(sizeof(struct contact));
    strcpy(p->name, name);
    strcpy(p->phone, phone);
    strcpy(p->email, email);
    p->next = NULL;

    if (head == NULL)
        head = p;
    else {
        struct contact *q = head;
        while(q->next != NULL)
            q = q->next;
        q->next = p;
    }
}

struct contact *get(int index) {
    struct contact *p;
    int i;

    if (head == NULL || index < 0)
        return NULL;

    i = 0;
    p = head;
    while(p->next != NULL && i < index) {
        p = p->next;
        i++;
    }

    if (i == index)
        return p;
    else
        return NULL;
}

int del(int index){
    if(head == NULL)
    return -1;

    if(index == 0){
        struct contact *p = head;
        head = head->next;
        free(p);
        return 0;
    }

    struct contact *prev = get(index-1);
    if(prev == NULL)
    return -1;

    if(prev->next == NULL)
    return -1;

    struct contact *q = prev->next;
    prev->next = q->next;
    free(q);
    return 0;

}

int main() {
    add_tail("홍길동", "010-1111-1111", "gdhong@kku.ac.kr");
    add_tail("임꺽정", "010-2222-2222", "kkjlim@naver.com");
    add_tail("이순신", "010-3333-3333", "sslee@gmail.com");
    add_tail("김유신", "010-4444-4444", "yskim@daum.net");
    print_list(head);

    del(2);
    print_list(head);

    del(0);
    print_list(head);

    del(1);
    print_list(head);

    return 0;
}
