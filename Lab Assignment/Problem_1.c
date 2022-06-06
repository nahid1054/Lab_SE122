//* Write a program in C to read 10 numbers from keyboard and their sum and average*/
#include<stdio.h>
int main(){
	
    int i, n, sum= 0;
    float average;
    //read data from user
    printf("Enter 10 numbers: ");
    //logic
    for(i=1; i<=10; i++){
        scanf("%d", &n);
        sum += n;

    }
    
    
    //print data
    printf("Sum is= %d\n", sum);
        average = sum/10;
        
        printf("Average is: %.1f\n", average);
        
        getch();
        


}
