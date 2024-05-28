#include<iostream>
using namespace std;
 void mostFrequentNumber(int (&array)[10]){
 		int length= sizeof(array)/sizeof(array[0]);
 		int maxCount=0;
 		int element_max_fre;
 		
 		cout<<"array is ";
	
		for (int i=0;i<sizeof(array)/sizeof(array[0]);i++){
			cout<<array[i]<<" ";
			}
 		cout<<"\n ";
 	for(int i=0; i<length; i++ ){
 		int count=0;
 		for (int j=0;j<length;j++){
 			if(array[i]==array[j])
 			{
 				count++;
			 }
 			
		 }
		 if(count>maxCount){
		 	maxCount=count;
		 	element_max_fre=array[i];
		 }
	 }
	 cout<<"most frequent number is "<<element_max_fre;
	  cout<<" with frequency "<<maxCount;
	 

}
int main()
{
	int arr[10]= {11,12,14,15,17,19,12,22,23,24};
	
	mostFrequentNumber(arr);

	
}
