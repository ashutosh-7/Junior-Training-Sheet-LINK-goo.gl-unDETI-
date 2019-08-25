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
				ll temp=s[0]-'A';
				if(temp>=32 && temp<=57)
				s[0]-=32;
				
				cout<<s;
				
	return 0;
}
