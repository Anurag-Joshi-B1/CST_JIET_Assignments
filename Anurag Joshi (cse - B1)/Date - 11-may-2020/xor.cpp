
#include<iostream>
#include<algorithm>
using namespace std; 

int main(){
	int arr[] = {1,14,6,9,4};
	int n = sizeof(arr) / sizeof(arr[0]);
	
	sort(arr, arr + n);

	int val = 0,min = arr[0]^arr[1];
	
	for (int i = 0; i < n - 1; i++) {
		for(int j = 0;j<n-1;j++){
			val = arr[i] ^ arr[i + 1];
			if(min>val){
				min = val;
			}
		}
	} 

	cout<<"Minimum XOR value: "<<min;
	return 0;
}