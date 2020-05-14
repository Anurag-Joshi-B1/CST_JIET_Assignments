#include <iostream> 
#define ll long long
using namespace std; 
// Recursive function to return gcd of a and b
ll gcd(ll a, ll b){
	if (b == 0) 
		return a; 
	return gcd(b, a % b);
} 

int main(){
	ll a,b,c,g=0;
	cout<<"Enter A: "; cin>>a;
	cout<<"Enter B: "; cin>>b;
	cout<<"Enter C: "; cin>>c;
	cout<<"Total Number divided by b and c: ";
	if(b>=c)
		g = gcd(b,c);
	else
		g = gcd(c,b);
	
	int l = b*c/g;
	
	cout<<a/l;
} 
