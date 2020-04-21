#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define vi vector<int>
#define vii vector<vector<int>>
#define vpi vector<pair<int,int>>
#define w(t) int t;cin>>t;while(t--)
#define pi pair<int,int>
#define mii map<int,int>
#define pb push_back
#define ff first
#define ss second
#define FOR(i,t,n) for(int i=t;i<n;i++)
#define SCI(x)  scanf("%d",&x)
#define SCL(x) scanf("%lld",&x)

int main()
{
	// for imput - output
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	//---------

	int n;
	ll sum  = 1;
	SCI(n);

	ll i = 1;
	int j = 0;
	int step = 2;
	FOR(k, 1, (n / 2) + 1) {
		FOR(t, 0, 4) {
			i += step;
			sum += i;
			// cout << sum << " ";
		}
		step += 2;
		// sum += i;
	}
	cout << sum << endl;


}