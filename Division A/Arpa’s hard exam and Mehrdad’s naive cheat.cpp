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
			
			if(n==0)
			cout<<"1";
			else
			{
			
			if(n%4==0)
			cout<<"6";
			else if(n%4==1)
			cout<<"8";
			else if(n%4==2)
			cout<<"4";
			else if(n%4==3)
			cout<<"2";
		}
			
			
	return 0;
}
