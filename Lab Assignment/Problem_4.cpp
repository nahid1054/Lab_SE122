//*Write a program in C to make such a pattern like a pyramid with an asterik*/
#include<stdio.h>
int main(){
	
int i,n,j;
//read data from user


printf("Enter the numbers of you want to printed: ");
scanf("%d", &n);
//logic

for(i=1; i<=n; i++){
    for(j=1; j<=i; j++)
	
	{
		
		
        printf("* ");
        
        
    }
    
    //print data
    printf("\n");
}

return 0;


}
