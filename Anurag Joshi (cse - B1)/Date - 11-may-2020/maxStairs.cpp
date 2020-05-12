/* 
Maximum height of the staircase
Given an integer A representing the square blocks. The height of each square block is 1. The task is to create a staircase of max height using these blocks. The first stair would require only one block, the second stair would require two blocks
and so on.
 */
#include<iostream>
using namespace std;

int main(){
	cout<<"Enter total bricks: ";
	int b,i=0;
	cin>>b;
	while(b>=0){
		i++;
		b-=i;
	}
	i--;
	cout<<"Maximum staircase height: "<<i;
}