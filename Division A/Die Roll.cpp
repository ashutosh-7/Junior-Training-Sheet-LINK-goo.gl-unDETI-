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
				ll y,w;
				cin>>y>>w;
				ll temp=6-max(y,w)+1;
				ll deno;
				if(temp==6 || temp==0)
				{
				deno=1;
				temp=1;
			}
				else
				deno=6;
				if(temp==2 || temp==4)
				{
					temp/=2;
					deno/=2;
				}
				if(temp==3 )
				{
					temp/=3;
					deno/=3;
				}
				cout<<temp<<"/"<<deno;
			//cin.get();
	return 0;
		
}
