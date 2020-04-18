#include<bits/stdc++.h>
using namespace std;

int main(){
	vector<int> v= {0,1,2,3,4,5,6,7,8,9};
	int n;
	cin>>n;

	int i = 1;
	while(i<n){
		next_permutation(v.begin(),v.end());
		i++;
	}
	string ans = "";
	for(int i=0;i<v.size();i++){
		ans =  ans + to_string(v[i]);
	}
	cout<<ans<<endl;
}