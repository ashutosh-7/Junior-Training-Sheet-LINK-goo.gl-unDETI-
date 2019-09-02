#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define llu unsigned long long int
#define mod 1e9+7
#define pb push_back
#define vi vector<int>
#define translow transform(s.begin(),s.end(),s.begin(),::tolower);
#define transup transform(s.begin(),s.end(),s.begin(),::toupper);
#define endl "\n"
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);

int main() {
				fast
				ll n;
				cin>>n;
				char arr[n][n];
				set<char>diagonal;
				set<char>non;
				for(ll i=0;i<n;i++)
				{
					for(ll j=0;j<n;j++)
					{
						cin>>arr[i][j];
					}
				}
				
				for(ll i=0;i<n;i++)
				{
					for(ll j=0;j<n;j++)
					{
						if(i+j==n-1 || i==j )
						diagonal.insert(arr[i][j]);
						else
						non.insert(arr[i][j]);
					}
				}
				set<char>::iterator it;
					set<char>::iterator it2;
				
				if(diagonal.size()==1 && non.size()==1)
				{
				it=diagonal.begin();
				it2=non.begin();
				//cout<<*it<<" "<<*it2;
				if(*it==*it2)
					cout<<"NO";
				else
				cout<<"YES";
				
		 	}
				
				else
				cout<<"NO";
				
				
	return 0;
}
