#include<bits/stdc++.h>
using namespace std;

#define ll long long int 

int prime[]  = {0,2,3,5,7,11,13,17};

ll number(vector<int> v){
	ll n = 0;
	for(int i=0;i<v.size();i++){
		n = n*10 + v[i];
	}
	return n;
}


bool check(vector<int> v){
	bool ch = true;
	for(int i=1;i<8;i++){
		int x = 0;
		for(int j=0;j<3;j++){
			x = x*10 + v[i+j];
		}
		// cout<<x<<" "<<prime[i]<<endl;
		if(x % prime[i] != 0){
			ch = false;break;
		}
	}
	return ch;
}

int main(){
	vector<int> v = {0,1,2,3,4,5,6,7,8,9};
	ll sum = 0;
	int comb = 3628800;
	for(int i=0;i<comb;i++){
		if(check(v)){
			cout<<number(v)<<endl;
			sum += number(v);
		}
		next_permutation(v.begin(),v.end());
	}
	cout<<sum<<endl;
	// cout<<check(v)<<endl;
}