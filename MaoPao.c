#include<stdio.h>

void Swap(int *a,int *b){
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}
void BubbleSort(int array[],int len){
	int i,j;
	for(i=0;i<len-1;++i){
		for(j=len-1;j>i;--j){
			if(array[j]<array[j-1]){
				Swap(&array[j],&array[j-1]);
			}
		}
	}
}
int main(){
	int i=0;
	int a[]={5,4,9,8,7,6,0,1,3,2};
	int len=sizeof(a)/sizeof(a[0]);
	BubbleSort(a,len);
	for(i=0;i<len;i++){
		printf("%d\t",a[i]);
	}
	printf("\n");
	return 0;
}






