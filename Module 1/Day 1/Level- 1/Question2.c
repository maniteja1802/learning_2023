#include<stdio.h>

void grade(int marks){
    if(marks>=90 && marks<=100){
        printf("Grade A");
    }
    else if(marks>=75 && marks<=89){
        printf("Grade B");
    }
    else if(marks>=60 && marks<=74){
        printf("Grade C");
    }
    else if(marks>=50 && marks<=59){
        printf("Grade D");
    }
    else if(marks>=0 && marks<=49){
        printf("Grade F");
    }
    else{
        printf("Invalid Marks");
    }
}


int main(){
    int marks;
    printf("Enter marks: ");
    scanf("%d",&marks);
    grade(marks);
    return 0;
}