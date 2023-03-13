// power fucntion 

#include<stdio.h>
int power(int, int );
int main(){
    int a,b,c,i,j;
    printf("enter the number:");
    scanf("%d",&a);
    printf("enter the number:");
    scanf("%d",&b);
    c=power(a,b);
    printf("%d",c);
    return 0;
}
power(int a, int b){
    int c;
    c=a;
    for( int i=0; i<b-1 ; i++){
        c=c*a;
    }
    return c;
}