#include<bits/stdc++.h>
using namespace std;
map<int,int> m;


/// Upper Bound will be  ---> 999999 or 1000000 


int cal(int n){
	int x = n;
	int s= 0;
	while(n){
		s += m[n%10];
		n =  n/10;
	}
	return s;
}

int main(){
	m[0] = 1;
	m[1] = 1;
	m[2] = 2;
	m[3] = 6;
	m[4] = 24;
	m[5] = 120;
	m[6] = 720;
	m[7] = 5040;
	m[8] = 40320;
	m[9] = 362880;
	int n;
	cin>>n;
	int c = 0;
	int s = 0;
	for(int i=3;i<=n;i++){
		if(cal(i) == i){
			c++;
			s += i;
		}
	}
	cout<<"C = :"<<c<<endl;
	cout<<s<<endl;
}