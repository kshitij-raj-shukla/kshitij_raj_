#include<stdio.h>
int main(void) {
	int n,i,j,x,k=0; scanf("%d",&n);
	n=(n*2)-1;	x=n/2;
	for(i=1;i<=n;i++){
		if(i<=x+1){k++;}	else{k--;}
		for(j=1;j<=n;j++){if(j<=x+2-k || j>=x+k){printf("*");}
			else{printf(" ");}
		}
		printf("\n");
	}
	return 0;
}
