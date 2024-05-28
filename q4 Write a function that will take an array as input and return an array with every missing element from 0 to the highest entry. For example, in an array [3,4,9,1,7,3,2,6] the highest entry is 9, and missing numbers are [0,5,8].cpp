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

}
}
int main()
{
	int arr[10]= {11,12,14,15,17,19,21,22,23,24};
		int length= sizeof(arr)/sizeof(arr[0]);
	descendingOrderArray(arr);
	int smNumber= arr[((sizeof(arr)/sizeof(arr[0]))-1)];
	int largesNumber = arr[0];
		cout<<"array is= ";
for (int i=0;i<sizeof(arr)/sizeof(arr[0]);i++){
	cout<<arr[i]<<" ";
}
	cout<<"\n ";
	int index=0;
		cout<<"\n missig numbers";
	for(int i=smNumber;i<largesNumber;i++){
	
	bool found=false;
	for(int j=0;j<length;j++){
		if(arr[j]==i){
			found = true;
			break;
		}
	}
	if(!found){
		cout<<" "<<i<<" ";
	}
	
	}
	cout<<"\n "<<smNumber;
	
}
