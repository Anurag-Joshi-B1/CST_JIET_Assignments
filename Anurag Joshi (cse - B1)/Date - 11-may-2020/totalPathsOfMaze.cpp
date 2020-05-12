/* 
Count of paths in a grid:-
Given an integer A, find and return the number of paths in a grid of size (A x A) that
starts from (1, 1) and reaches (A, A) without crossing the major diagonal. Since the 
result can be large, return the result modulo (10^9 + 7)
 */

#include<iostream>
#include<vector>
using namespace std;

int main(){
	int s;
	cout<<"Enter the size:";
	cin>>s;
	vector<vector<int>>v(s,vector<int>(s,0));
	for(int i=0;i<s;i++){
		v[i][0]=1;
	}
	for(int i=1;i<s;i++){
		for(int j=1;j<s;j++){
			if(i>=j){
				if(i==j){
					v[i][j]=v[i][j-1];
				}
				else{
					v[i][j]=v[i][j-1]+v[i-1][j];
				}
			}
		}
	}
	cout<<"Total number of paths: "<<v[s-1][s-1];
}