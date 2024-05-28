#include<iostream>
using namespace std;

 void descendingOrderArray(int (&array)[10]){
	{
	int length= sizeof(array)/sizeof(array[0]);



for (int i=0;i<length-1;++i){

for(int j=0;j<length-i-1;++j){
	if(array[j]<array[j+1]){
		int temp=array[j];
		array[j]=array[j+1];
		array[j+1]=temp;
	}
}
}
	cout<<"array is= ";
for (int i=0;i<sizeof(array)/sizeof(array[0]);i++){
	cout<<array[i]<<" ";
}
	cout<<"\n ";
}
}
int main()
{
	int arr[10]= {1,2,8,4,2,9,5,11,12,54};
	
	descendingOrderArray(arr);
	cout<<"sum of two largest number in array is ="<<" "<< arr[0]+arr[1];
}
