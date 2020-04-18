// we use sieve algorithm 

#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
ll a[100000000];
int main(){
	ll X = 100000000;
	for(int i=0;i<X;i++){
		a[i] = 1;
	}
	
	a[0]  = 0;
	a[1] = 0;
	for(ll i = 2;i*i<=X;i++){
		if(a[i] == 1){
			for(ll j = i*i ; j<X;j = j+i){
				a[j] = 0;
			}
		}
	}
	cout<<"Enter val :"<<endl;
	int num;
	cin>>num;
	ll ans = 0;
	for(ll i = 0;i<num;i++){
		if(a[i] == 1){
			ans += i;
		}
	}
	cout<<ans<<endl;
}