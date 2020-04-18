#include<bits/stdc++.h>
using namespace std;

int d(int x){
	// we can use prime factorization methord to optimize further 
	int sum = 1;
	int i;
	for(i=2;i*i<x;i++){
		if(x % i ==0){
			sum += i;
			sum += x/i;
		}
	}
	if(i*i == x){
		sum += i;
	}
	return sum;
}

int main(){
	int s = 0;
	// cout<<d(220)<<endl;
	// cout<<d(284)<<endl;
	int n;
	// int s = 0;
	cin>>n;
	for(int i =2;i<=n;i++){
		int a = d(i);
		if(a<=n){
			int b = d(a);
			if(b == i && a != b){
				s += i+a;
				cout<<i<<" "<<a<<endl;
			}
		}
	}
	s =  s/2;
	cout<<"Sum is : "<<s<<endl;
}