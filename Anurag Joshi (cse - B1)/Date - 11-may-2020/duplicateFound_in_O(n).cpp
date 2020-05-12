/* 

Given an array of integers, every element appears twice except for one. Find that single
one. Note: Your algorithm should have a linear runtime complexity. Could you implement it without
using extra memory?

 */
#include<iostream>
#include<vector>
#include<sstream>
#include<unordered_map>
using namespace std;
int main(){
	cout<<"Enter an array: \n";
	string s;
	getline(cin,s);
	stringstream ss(s);
	
	//Just for having some dynamic input.
	vector<int>v;
	while(getline(ss,s,' ')){
		v.push_back(stoi(s));//i'm not caring about type.
	}
	
	//yeah, it will waste some memory but will be effecient
	//in having occurences of every character of a text...
	unordered_map<int,int> m;
	for(int i:v){
		m[i]=0;
	}
	
	/* This is the main loop*/
	//By use of map, we can have duplicates 
	//in only o(n) time complexity:->
	for(int i:v){
		m.at(i)+=1;
		//for having ques answer's, we can check:-
		/* if(m.at(i)==2){
			cout<<i<<" is a duplicate number.";
			break;
		} */
	}
	cout<<"Total Occurences of every of integer :->";
	for(auto x:m){
		cout<<"\n"<<x.first<<" -> "<<x.second;
	}
	return 0;
}