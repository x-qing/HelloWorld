#include <iostream>
// ubuntu add other
void sort(int arr[],int size){
	int temp = 0;
	bool flag = false;
	for(int i = 0;i<size-1;i++){
		for(int j = 0;j<size-1-i;j++){
			if(arr[j] > arr[j+1]){
				temp = arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
				flag = true;
			}
			if(!flag){
				break;
			}
		}
	}
}
using namespace std;
int main(){
	// windows添加了注释
	int arr[] = {12,4,89,43,21,78};
	int size =  sizeof(arr)/sizeof(arr[0]);
	sort(arr,size);
	return 0;
}
