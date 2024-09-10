#include<stdio.h>
#include<stdlib.h>
#include <time.h>
void main (){
    srand(time(NULL)); 
    printf("********************\n choose between 1 and 3 \n\n [1] stone \n [2] paper \n [3] scissors \n\n********************\n");
    int a,b;
    a = rand() % 300 +1;
  // printf("a = %d\n",a);
    printf("Enter a number: "); 
    scanf("%d", &b);           
    if(a <= 100 && b == 1){
        printf("********************\n Bot = stone \n You = stone \n \033[0;34m Draw \033[0m");
    } else if(a<= 100 && b == 2){
        printf("********************\n Bot = stone \n You = paper \n \033[0;32m You win \033[0m");
    } else if(a<= 100 && b == 3){
        printf("********************\n Bot = stone \n You = scissor \n \033[0;31m You lose \033[0m");
    } else if(a <= 200 && b == 1 ){
        printf("********************\n Bot = paper \n You = stone \n \033[0;31m You lose \033[0m");
    } else if(a <= 200 && b == 2) {
        printf("********************\n Bot = paper \n You = paper \n \033[0;34m Draw \033[0m");
    } else if(a <= 200 && b == 3){
        printf("********************\n Bot = paper \n You = scissor \n \033[0;32m You win \033[0m");
    } else if(a <= 300 && b == 1){
        printf("********************\n Bot = scissor \n You = stone \n \033[0;32m You win \033[0m");
    } else if(a <= 300 && b == 2){
        printf("********************\n Bot = scissor \n You = paper \n \033[0;31m You lose \033[0m");
    } else if(a <= 300 && b == 3){
        printf("********************\n Bot = scissor \n You = scissor \n \033[0;34m Draw \033[0m");
    } else if(b == 7){
        printf("********************\n You = Gun \n You win");
    } else{
        printf("********************\n Please choose between 1 and 3");
    }
}
