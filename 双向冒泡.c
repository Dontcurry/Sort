#include<stdio.h>
void Swap(int &a,int &b){
	int temp;
	temp=a;
	a=b;
	b=temp;
}
void Bubble2Sort(int array[],int length){
	int left=1;
	int right=length-1;
	int t;
	do{
		//正向的部分
		for(int i=right;i>=left;i--){
			if(array[i]<array[i-1]){
				Swap(array[i],array[i-1]);
				t=i;
			}
		} 
		left=t+1;
		//反向的部分
		for(i=left;i<right+1;i++){
			if(array[i]<array[i-1]){
				Swap(array[i],array[i-1]);
				t=i;
			}
		} 
		right=t-1;
	}while(left<=right);
}
int main(){
	int i=0;
	int a[]={5,4,9,8,7,6,0,1,3,2};
	int len=sizeof(a)/sizeof(a[0]);
	Bubble2Sort(a,len);
	for(i=0;i<len;i++){
		printf("%d\t",a[i]);
	}
	printf("\n");
	return 0;
}




