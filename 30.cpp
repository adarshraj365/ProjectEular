#include<bits/stdc++.h>
using namespace std;
#define ll long long int
bool check(ll n){
	ll s = 0;
	ll x = n;
	while(n){
		s += pow(n%10,5);
		n = n/10;
		if(s > x){
			return false;
		}
	}
	if(s == x){
		return true;
	}
	return false;
}


int main(){
	ll n;
	cin>>n;
	for(ll i = 11;i<n;i++){
		if(check(i)){
			cout<<i<<" ";
		}
	}
}

// Run for long time like  for n = 10000000 

/// get output : 4150 4151 54748 92727 93084 194979 