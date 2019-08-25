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
				ll n,x;
				cin>>n>>x;
				ll temp=n%10;
				ll temp2;
				for(ll i=1;;i++)
				{
					
					temp2=(i*temp)%10;
					if(temp2==0 || temp2==x){
					
					cout<<i<<endl;
					break;}
				}
	return 0;
}
