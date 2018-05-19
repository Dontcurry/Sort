#include<stdio.h>

void SelectSort(int *a,int n){
	int i,j;
	int temp=0;
	int flag=0;
	for(i=0;i<n-1;i++){
		temp=a[i];
		flag=i;
		for(j=i+1;j<n;j++){
			if(a[j]<temp){
				temp=a[j];
				flag=j;
			}
		}
		if(flag!=i){
			a[flag]=a[i];
			a[i]=temp;
		}
	}
}
int main(){
	int i=0;
	int a[]={5,4,9,8,7,6,0,1,2,3};
	int len=sizeof(a)/sizeof(int);
	SelectSort(a,len);
	for(i=0;i<len;i++){
		printf("%d ",a[i]);
	}
	printf("\n");
	return 0;
}
 
 
 
 
 
 
 
 
 
 
 
 
 
 
