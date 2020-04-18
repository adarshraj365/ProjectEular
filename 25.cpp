#include<bits/stdc++.h>
using namespace std;

int main(){
	vector<int> v;
	v.push_back(1);
	int k = 2;
	while(v.size()<1000){
		int carry = 0;
		for(int i=0;i<v.size();i++){
			int temp = v[i]*k + carry;
			v[i] =  temp % 10 ;
			carry =  temp / 10;
		}
		if(carry > 0){
			while(carry){
				v.push_back(carry % 10);
				carry = carry / 10;
			}
		}
		k++;
	}

	cout<<k-1<<endl;
}