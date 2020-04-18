#include<bits/stdc++.h>
using namespace std;
#define ll long long int
bool isPalindrome(ll n){
	ll rev  = 0;
	ll x = n;
	while(n){
		rev = rev*10 + n%10 ;
		n = n/10;
	}
	// cout<<"REV :"<<rev<<endl;
	if(rev == x){
		return true;
	}
	return false;
}

int main(){
	int x = 999;
	int y = 999 ;
	int i = 0;
	ll ans = -1;
	for(i = 100 ; i<=x;i++){
		for(int j = 100 ;j<= y ; j++){
			ll num = i*j;
			if(isPalindrome(num)){
				ans = max(ans , num);
			}
		}
	}
	cout<<ans<<endl;
}