#include<iostream>
using namespace std;
 void rotateArray(int (&array)[5]){
 		int length= sizeof(array)/sizeof(array[0]);
 	
 		
 		cout<<"array is ";
	
		for (int i=0;i<sizeof(array)/sizeof(array[0]);i++){
			cout<<array[i]<<" ";
			}
			int lastElement = array[length-1];
		for (int i=length-1;i>0;i--){
			array[i]=array[i-1];
		}

array[0]=lastElement;
	 

}
int main()
{
	int arr[5]= {11,12,14,15,17};
	
	rotateArray(arr);


 		cout<<"rotated array is ";
	
		for (int i=0;i<sizeof(arr)/sizeof(arr[0]);i++){
			cout<<arr[i]<<" ";
			}
	
}
