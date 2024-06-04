#include<cstdio>
//
// Created by zccbbg on 2023-10-19.
//
struct student{
    char name[20];
    char sex;
    int score;
} s[3] = {{"zccbbg",'m',100},{"xiaozhang",'m',90},{"xiaowang",'f',80}};

int main(){
    student * p;
    printf("Name     Sex     Score\n");
    for(p = s; p < s+3; p++){
        printf("%-16s",p->name);
        printf("%-5c",p->sex);
        printf("%-9d\n",p->score);
    }
}