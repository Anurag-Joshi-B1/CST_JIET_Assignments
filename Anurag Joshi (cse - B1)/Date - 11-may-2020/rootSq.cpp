/* 
Square Root of Integer:-
Given an integar A. Compute and return the square root of A.
If A is not a perfect square, return floor(sqrt(A)). DO NOT USE SQRT FUNCTION FROM STANDARD LIBRARY
 */

#include<iostream>
#include<cmath>
using namespace std;

int main(){
	cout<<"Enter number:";
	double n;
	cin>>n;
	double sr = pow(n,0.5);
	cout<<floor(sr);
}