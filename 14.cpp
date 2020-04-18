#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int dp[1000000];

ll count(ll n){
	ll c  = 0;
	while(n != 1){
		// cout<<n<<" ";
		c++;
		if(n&1){
			n = 3*n + 1;
		}else{
			n = n/2 ;
		}
	}
	return c;
}

int main(){
	// count(1819);
	memset(dp,-1,sizeof(dp));
	ll ans  = -1;
	int ans_ = 0;
	for(ll i =2;i<=1000000;i++){
		if(count(i) > ans){
			ans = count(i);
			ans_ = i;
		}
	}
	cout<<ans_<<endl;
}