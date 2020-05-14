/* 
gcd(n, n + 1, n?+ 2, …, m)=>

= gcd(gcd(n, n + 1), n + 2, …, m)
= gcd(1, n + 2, …, n) 
= 1.
 
 */

#include <iostream> 
using namespace std;

int main(){
	string a,b;
	cout<<"Enter A="; cin>>a;
	cout<<"Enter B="; cin>>b;
	
	cout<<"Gcd of range from a to b: ";
	if(a.length()==b.length()){
		if (a.find(b) != std::string::npos)
			cout << a << '\n';
	}
	else{
		cout<<1;
	}
	
	return 0;
}
