#include<bits/stdc++.h>
using namespace std;

int main(){
	int wt[] = {1,2,5,10,20,50,100,200};
	int n = 8;
	int money = 200;

	int dp[n+1][money+1] = {0};

	for(int i=0;i<n+1;i++){
		dp[i][0] = 1;
	}

	for(int i=1;i<money+1;i++){
		dp[0][i] = 0;
	}

	for(int i=1;i<n+1;i++){
		for(int j=1;j<money+1;j++){
			if(wt[i-1] <= j){
				dp[i][j] =  dp[i-1][j] + dp[i][j-wt[i-1]];
			}else{
					dp[i][j] = dp[i-1][j];
			}
		}
	}
	cout<<dp[n][money]<<endl;
}