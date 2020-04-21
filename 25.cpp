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
#define PV(v) for(int i=0;i<v.size();i++) cout<<v[i]<<" ";


vi add(vi a, vi b) {
	vi temp;
	int x = a.size();
	int y = b.size();
	int k;
	int carry = 0;
	FOR(i, 0, min(x, y)) {
		int p = a[i] + b[i] + carry;
		temp.pb(p % 10);
		carry = p / 10;
		k = i;
	}
	k++;
	// cout << k << endl;
	if (x > y) {
		while (k < x) {
			int p = carry + a[k];
			temp.pb(p % 10);
			carry = p / 10;
			k++;
		}
	}
	else if (y > x) {
		while (k < y) {
			int p = carry + b[k];
			temp.pb(p % 10);
			carry = p / 10;
			k++;
		}
	}
	else {
		if (carry > 0) {
			while (carry) {
				temp.pb(carry % 10);
				carry = carry / 10;
			}
		}
	}
	return temp;
}


int main()
{
	// for imput - output
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	//---------
	vi sec;
	vi first;
	first.pb(1);
	sec.pb(1);
	int n;
	SCI(n);
	int i = 3;
	while (sec.size() < n) {
		vi temp = add(first, sec);
		first = sec;
		sec = temp;
		i++;

	}
	// cout << "-----" << endl;
	FOR(i, 0, sec.size()) {
		cout << sec[i] << " ";
	}
	cout << endl;
	cout << "Answer is :" << i - 1 << endl;


}