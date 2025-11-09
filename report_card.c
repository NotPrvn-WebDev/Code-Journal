//to print report card of a student
#include<stdio.h> 

int main(){
    int roll;
    char name[200];
    float math,science,social,total,avg,grade,percentage;

    printf("Enter your Name \n");
    scanf(" %[^\n]s",&name);

    printf("Enter your RollNo. \n");
    scanf("%d",&roll);

    printf("Enter math,science,social marks \n");
    scanf("%f %f %f",&math,&science,&social);

    if(math<=30 || science<=30 || social<=30){printf("FAIL \n");}
    else{printf("PASS \n");}

    printf("Your name is: %s \n",name);
    printf("RollNo. is: %d \n",roll);
    total=math+science+social;
    printf("Total is: %f \n",total);
    avg=total/3;
    printf("Average is: %f \n",avg);
    percentage=(total/300) * 100;
    printf("Percentage is: %f \n",percentage);
    grade=percentage/10;
    printf("Grade is: %f \n",grade);
    return 0;
}