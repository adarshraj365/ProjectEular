#include<bits/stdc++.h>
using namespace std;

#define ll long long int 
int main(){
	int n;
	cin>>n;

	ll grid[n+1][n+1];

	for(int i=0;i<n;i++){
		grid[i][n] = 1;
		grid[n][i] = 1;
	}

	for(int i =n-1;i>=0;i--){
		for(int j = n-1;j>=0;j--){
			grid[i][j] = grid[i+1][j] + grid[i][j+1];
		}
	}

	cout<<grid[0][0]<<endl;
}