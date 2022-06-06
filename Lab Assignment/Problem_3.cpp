//*Write a program in C to make such a pattern like a pyramid with numbers increases by 1*/
#include<stdio.h>
int main(){
int i, j, n, num = 1;
//read data from user
printf("Enter the value of rows: ");
scanf("%d", &n);
//logic


for(i=1;i<=n; i++){
	
    for(j=1; j<=i;j++){
        printf("%d",num);
        num++;
    }
    //print data
    printf("\n");
    

}

return 0;


}

