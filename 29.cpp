#include<bits/stdc++.h>
using namespace std;


int main(){
	int c = 0;

	for(int i=2;i<=100;i++){
		for(int j = 2;j<=100;j++){
			if(i != j){
				int x = log2(j)/log2(i);
				int y = j/i;
				if(x == y){
					c++;
					cout<<i<<" "<<j<<endl;
				}
			}
		}
	}
	cout<<"C = :"<<c<<endl;
	cout<<(10000 - c)<<endl;
}