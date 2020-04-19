#include<bits/stdc++.h>
using namespace std;

#define ll long long int
bool isPrime(ll n){
	for(ll i=2;i*i<=n;i++){
		if(n%i == 0){
			return false;
		}
	}
	return true;
}


int main(){
	int m[10];
	m[0] = 1;
	m[1] = 1;
	m[2] = 2;
	m[3] = 6;
	m[4] = 24;
	m[5] = 120;
	m[6] = 720;
	m[7] = 5040;
	m[8] = 40320;
	m[9] = 362880;
	int n;
	cin>>n;
	vector<int> v;
	for(int i=1;i<=n;i++){
		v.push_back(i);
	}
	ll ans  = -1;
	for(int i=0;i<m[n];i++){
		ll num = 0;
		for(int i=0;i<n;i++){
			num = num*10+v[i];
		}
		// cout<<num<<" ";
		if(isPrime(num)){
			cout<<num<<" ";
			ans = max(ans,num);
		}

		next_permutation(v.begin(),v.end());
	}
	cout<<ans<<endl;
}