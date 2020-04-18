#include<bits/stdc++.h>
using namespace std;


int main(){
	int A[20][20] ;

	for(int i=0;i<20;i++){
		for(int j=0;j<20;j++){
			cin>>A[i][j];
		}
	}

	int ans  = -1;
	//  Check diagonally forward
	for(int i=0;i<=16;i++){
		for(int j = 0;j<=16;j++){
			ans = max(ans , A[i][j]*A[i+1][j+1]*A[i+2][j+2]*A[i+3][j+3]);
			
		}
	}
	// check horizontal
	for(int i=0;i<=19;i++){
		for(int j = 0;j<=16;j++){
			ans = max(ans,  A[i][j]*A[i][j+1]*A[i][j+2]*A[i][j+3]);
		}
	}
	// check vertical
	for(int i=0;i<=16;i++){
		for(int j = 0;j<=19;j++){
			ans = max(ans , A[i][j]*A[i+1][j]*A[i+2][j]*A[i+3][j]);
		}
	}
	// check diagonal backward
	for(int i = 3;i<20;i++){
		for(int j = 0;j<=16;j++){
			ans =  max(ans , A[i][j]*A[i-1][j+1]*A[i-2][j+2]*A[i-3][j+3]);
		}
	}
	cout<<ans<<endl;

}