#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define llu unsigned long long int
#define mod 1e9+7
#define pb push_back
#define vi vector<int>
#define endl "\n"
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);

int main() {
				fast
				string s;
				cin>>s;
				ll temp,low=0,high=0;
				for(ll i=0;i<s.size();i++)
				{
					temp=s[i]-'A';
					if(temp>=0 && temp<=26)
					high++;
					else
					low++;
				}
				if(high>low){
					transform(s.begin(),s.end(),s.begin(),::toupper);
				cout<<s<<endl;}
				else
				{
					transform(s.begin(),s.end(),s.begin(),::tolower);
					cout<<s<<endl;
				}
				
	return 0;
}
