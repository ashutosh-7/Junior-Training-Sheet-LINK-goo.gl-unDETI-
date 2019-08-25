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
			ll a,b;
			ll count=0;
			cin>>a>>b;
			for(ll i=0;;i++)
			{
						if(a>b)
				break;
				b*=2;
				a*=3;
				count++;
			
				//cout<<count<<endl;
		}
			cout<<count;
	return 0;
}
