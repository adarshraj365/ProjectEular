#include<bits/stdc++.h>
using namespace std;

int ans = -1;
int ROW ;
void solve(int row , int col , vector<vector<int>> v,int curr){
	// cout<<row<<" "<<col<<endl;
	if(row == ROW-1){
		ans = max(ans , curr+v[row][col]);
		return;
	}else{
		solve(row+1,col,v,curr+v[row][col]);
		solve(row+1,col+1,v,curr+v[row][col]);
	}
}

int main(){
	int n;
	cin>>n;
	vector<vector<int>> v(n);
	for(int i=1;i<=n;i++){
		for(int j = 0;j<i;j++){
			int d;
			cin>>d;
			v[i-1].push_back(d);
		}
	}
	ROW = n;
	solve(0,0,v,0);
	cout<<ans<<endl;
}