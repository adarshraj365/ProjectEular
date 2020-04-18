#include<bits/stdc++.h>
using namespace std;


int main(){
	vector<int> v;
	v.push_back(2);
	int n;
	cin>>n;

	for(int i = 2;i<=n;i++){
		int carry = 0;
		for(int i=0;i<v.size();i++){
			int temp = v[i]*2 + carry;
			v[i] = temp % 10;
			carry = temp / 10;
		}
		if(carry)
			v.push_back(carry);
	}
	int sum = 0;
	for(int i=0;i<v.size();i++){
		sum += v[i];
		cout<<v[i]<<" ";
	}
	cout<<endl;
	cout<<"Sum :"<<sum<<endl;
}