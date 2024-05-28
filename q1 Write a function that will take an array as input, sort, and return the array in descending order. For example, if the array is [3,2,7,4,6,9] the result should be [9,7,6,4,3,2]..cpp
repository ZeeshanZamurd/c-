//q1
#include<iostream>
using namespace std;
int main()
{
	int array[10]= {1,2,8,4,2,9,5,11,12,54};

	cout<<"before sorting ";
		cout<<"\n ";
for (int i=0;i<sizeof(array)/sizeof(array[0]);i++){
	cout<<array[i]<<" ";
}
	cout<<"\n ";
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
	cout<<"\n ";
		cout<<"after sorting ";
	cout<<"\n ";
for (int i=0;i<sizeof(array)/sizeof(array[0]);i++){
	cout<<array[i]<<" ";
}

}
