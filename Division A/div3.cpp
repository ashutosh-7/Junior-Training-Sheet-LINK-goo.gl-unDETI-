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
				ll n;
				cin>>n;
				ll temp;
				ll even=0,odd=0;
				for(ll i=0;i<n;i++)
				{
					cin>>temp;
					if(temp%2==0)
					even++;
					else
					odd++;
				}
				cout<<min(even,odd);
	return 0;
}
