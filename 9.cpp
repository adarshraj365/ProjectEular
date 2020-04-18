#include<bits/stdc++.h>
using namespace std;


int main(){
	for(int i=0;i<1000;i++){
		for(int j=0;j<1000;j++){
			for(int k = 0;k<1000;k++){
				if(i+j+k == 1000){
					int a = i*i;
					int b = j*j;
					int c  = k*k;
					if(a+b == c || a+c == b || b+c == a){
						cout<<i<<" "<<j<<" "<<k<<endl;
					}
				}
			}
		}
	}
}