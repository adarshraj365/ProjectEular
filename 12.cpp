#include<bits/stdc++.h>
using namespace std;
#define ll long long int

ll count_factor(ll n){
	ll c = 0;
	ll i;
	for(i=1;i*i<n;i++){
		if(n%i ==0){
			c+=2;
		}
	}
	if(i*i == n){
		c += 1;
	}
	return c;
}

// for optimization we can use prime factorization to count number of factors .

int main(){
	ll i = 2;
	ll n = 1;
	while(count_factor(n)<500){
		n+=i;
		i++;
	}
	cout<<n<<endl;
}