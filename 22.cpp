#include<bits/stdc++.h>
using namespace std;

#define ll long long int


int main(){
	string line;
	ifstream myfile ("name.txt"); 
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
			if(x == '"' || x == ' '){
				continue;
			}
			w += x;
		}
		// cout<<w<<" ";
	}
	sort(v.begin(),v.end());
	cout<<v.size()<<endl;
	for(int i=930;i<=950;i++){
		cout<<i<<" "<<v[i]<<endl;
	}

	ll score = 0;
	for(int i=0;i<v.size();i++){
		string s = v[i];
		ll temp =0;
		for(int j=0;j<s.length();j++){
			temp =  temp + s[j] - 'A';
			temp++;
		}
		score = score + temp*(i+1);
	}
	cout<<score<<endl;

}