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
				ll n,m;
				cin>>n>>m;
				if(n%2==0)
				{
				ll mid=n/2;
				if(m<=mid)
				cout<<m*2-1;
				else
				cout<<(m-mid)*2;
					

				}
			else
			{
				ll mid=n/2+1;
				if(m<=mid)
				cout<<m*2-1;
				else
				cout<<(m-mid)*2;
			}
	return 0;
}
