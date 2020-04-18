#include<bits/stdc++.h>
using namespace std;

#define ll long long int 
ll MAX = 28123;
bool isAbundant(int n){
	int s = 1;
	int i;
	for(int i=2;i*i<n;i++){
		if(n%i == 0){
			s+=i;
			s+= n/i;
		}
	}
	if(i*i == n){
		s+=i;
	}

	if(s > n){
		return true;
	}
	return false;
}

void solve(bool *dp){
	dp[0] = false;
	dp[1] = false;

	for(int i = 2;i<=MAX;i++){
		if(isAbundant(i)){
			dp[i] = true;
		}else{
			dp[i] = false;
		}
	}
}

int main(){
	bool dp[MAX+1];
	solve(dp);
	int sum = 0;

	for(int i=1;i<=MAX;i++){
		bool yes = true;

		int d = i/2;

		for(int j=1;j<=d;j++){
			if(dp[j] && dp[i-j]){
				yes = false;
				break;
			}
		}
		if(yes){
			sum += i;
		}
	}
	cout<<sum<<endl;
}