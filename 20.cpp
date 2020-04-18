#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;

	vector<int> v;
	v.push_back(1);

	for(int i=2;i<=n;i++){
		int carry= 0;
		for(int j = 0;j<v.size();j++){
			int temp = v[j]*i + carry ;
			v[j] = temp % 10;
			carry = temp / 10 ;
		}
		if(carry >0){
			while(carry){
				v.push_back(carry % 10);
				carry = carry / 10;
			}
		}
	}

	reverse(v.begin(),v.end());
	int sum = 0;
	for(int i=0;i<v.size();i++){
		cout<<v[i]<<" ";
		sum += v[i];
	}
	cout<<endl;
	cout<<"Sum : "<<sum<<endl;
}