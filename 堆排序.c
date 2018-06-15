#include<stdio.h>

void AdjustMinHeap(int *a,int pos,int len){
	int temp;
	int child;
	for(temp=a[pos];2*pos+1<=len;pos=child){
		child=2*pos+1;
		if(child<len&&a[child]>a[child+1])
			child++;
		if(a[child]<temp)
			a[pos]=a[child];
		else
			break;
	}
	a[pos]=temp;
} 

void Swap(int *a,int *b){
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}
void MyMinHeapSort(int *array,int len){
	int i;
	for(i=len/2-1;i>=0;i--){
		AdjustMinHeap(array,i,len-1);
	}
	for(i=len-1;i>=0;i--){
		Swap(&array[0],&array[i]);
		AdjustMinHeap(array,0,i-1);
	}
}
void PrintArray(int *a,int length){
	int i;
	for(i=0;i<length;i++)
		printf("%d\t",a[i]);
	printf("\n");
	
}
int main(){
	int array[]={0,13,1,14,27,18};
	int length=sizeof(array)/sizeof(array[0]);
	MyMinHeapSort(array,length);
	PrintArray(array,length);
	return 0;
}







