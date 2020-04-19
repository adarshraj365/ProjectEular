#include<bits/stdc++.h>
using namespace std;

#define ll long long int

ll mod = 10000000000;

int main(){
	ll ans = 1;

	for(ll i=2;i<=1000;i++){
		ll temp = 1;
		for(int j=1;j<=i;j++){
			temp = temp*i;
			temp = temp % mod;
		}

		ans += temp;
		ans = ans % mod;
	}
	cout<<ans<<endl;
}