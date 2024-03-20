#include<stdio.h>

struct student{
    char name[9];
    int hakbun;
    float grade;
};

struct student s1 = {"홍길동", 2020006, 3.2};
struct student s2 = {"임꺽정", 2020004, 2.7};
struct student s3 = {"이순신", 2020002, 4.3};
struct student s4 = {"김유신", 2020001, 3.3};
struct student s5 = {"강감찬", 2020003, 3.8};
struct student s6 = {"김선달", 2020005, 1.5};

struct student *student[6] = {&s1, &s2, &s3, &s4, &s5, &s6};

struct student *search(int hakbun){
    for (int i = 0; i < 6; i++)
    {
        if (student[i]->hakbun == hakbun)
            return student[i];
    }
    return NULL;
}

void sort(){
    struct student *temp;
    for(int i = 0; i < 6; i++){
        for(int j = 1; j < 6 - i; j++){
            if(student[j - 1]->hakbun > student[j]->hakbun){
                temp = student[j - 1];
                student[j - 1] = student[j];
                student[j] = temp;
            }
        }
    }
}


int main(){
    struct student *p;

    p = search(2020003);
    if (p == NULL)
        printf("탐색 실패\n\n");
    else
        printf("탐색 성공: %s %d %f\n\n", p->name, p->hakbun, p->grade);

    sort();

    for(int i = 0; i < 6; i++)
        printf("%s %d %f\n", student[i]->name, student[i]->hakbun, student[i]->grade);

    return 0;
    
}
