#include<bits/stdc++.h>
using namespace std;


void print(int a[]){
	for(int i=0;i<10;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
}

void print(vector<int> v){
	for(int i=0;i<v.size();i++){
		cout<<v[i]<<" ";
	}
	cout<<endl;
}

vector<int> prodct(int n){
	vector<int> v;
	int x = n;
	while(n){
		v.push_back(n%10);
		n = n/10;
	}

	for(int i=1;i<x;i++){
		int carry = 0;
		for(int j=0;j<v.size();j++){
			int temp = v[j]*x + carry;
			v[j] = temp%10;
			carry = temp /10;
		}

		while(carry){
			v.push_back(carry % 10);
			carry = carry /10;
		}
	}

	return v;

}


int main(){
	int ans[] = {7,1,3,1,7,0,5,0,4,0}; // 10 digits of sum of series up to 10 given in ques.
	int x;
	cin>>x;
	
	for(int i=11;i<=x;i++){
		vector<int> v = prodct(i);
		// print(ans);
		// print(v);
		int k;
			int carry = 0;
			for(k=0;k<10;k++){
				int temp = ans[k]+v[k]+carry;
				ans[k] = temp%10;
				carry = temp/10;
			}
	}
	string s = "";
	for(int i=0;i<10;i++){
		s = s+ to_string(ans[i]);
	}
	reverse(s.begin(),s.end());
	cout<<s<<endl;


}