//To print the Abouts of the User
#include<stdio.h>

int main(){

 printf("Enter name: ");
 char name[200];
 scanf("%s",&name);

  printf("Enter Age: ");
 int age;
 scanf("%d",&age);

  printf("Enter weight: ");
 float weight;
 scanf("%f",&weight);

  printf("Enter gender: ");
 char gender;
 scanf(" %c",&gender);

 printf("Name is %s \n",name);
 printf("age is %d \n",age);
 printf("weight is %.2f \n",weight);
 printf("gender is %c \n",gender);
}
