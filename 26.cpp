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

int calculate(int n) {
	// this function calcuate number of digits in fractional part of (1/n)
	// if repeating then size of repeting pattern .

	int num = 10;
	int deno = n;
	int c = 0;
	vi v;
	while (find(v.begin(), v.end(), num) == v.end() && num != 0) {
		// cout << num << " ";
		v.pb(num);
		num = (num % deno) * 10;
		// cout << num << endl;
	}
	if (num == 0) {
		return 0;
	}
	int j = v.size() - 1;
	while (j >= 0 && v[j] != num) {
		c++;
		j--;
	}

	return c + 1;

}

int main()
{
	// for imput - output
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	//---------
	int n;
	SCI(n);
	int ans = -1;
	int ans_ = 1;
	FOR(i, 1, n + 1) {
		int p = calculate(i);
		if (p > ans) {
			ans = p;
			ans_ = i;
		}
	}

	cout << ans_ << endl;

}