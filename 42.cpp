#include<bits/stdc++.h>
using namespace std;

#define ll long long int

bool check(string s){
	ll n = 0;

	for(int i=0;i<s.length();i++){
		n += s[i] - 'A' ;
		n++;
	}
	// cout<<n<<endl;
	ll sq = sqrt(n*2);
	// cout<<sq<<endl;
	if(sq*(sq+1) == 2*n){
		return true;
	}
	return false;

}


int main(){
	string line;
	ifstream myfile ("word.txt"); 
	if (myfile.is_open())
	{
	  while ( myfile.good() )
	  {
	      getline (myfile,line);
	   }
	   myfile.close();
	}

	vector<string> v;
	string w = "";
	for(auto x : line){
		if(x == ','){
			v.push_back(w);
			w = "";
		}
		else{
			if(x == '"'){
				continue;
			}
			w += x;
		}
		// cout<<w<<" ";
	}
	cout<<v.size()<<endl;
	ll count = 0;
	for(int i=0;i<v.size();i++){
		if(check(v[i])){
			count++;
		}
	}
	cout<<count<<endl;

}