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
				ll t;
				ll max=0;
				cin>>t;
				while(t--)
				{
				ll a,b,c;
				cin>>a>>b>>c;
				ll count=0;
				if(a==1)
				count++;
				if(b==1)
				count++;
				if(c==1)
				count++;
				if(count>=2)
				max++;
				
				}
				cout<<max<<endl;
	return 0;
}
