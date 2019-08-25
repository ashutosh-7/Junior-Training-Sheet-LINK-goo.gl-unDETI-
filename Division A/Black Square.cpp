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
				ll a,b,c,d;
				cin>>a>>b>>c>>d;
				string s;
				cin>>s;
				ll ca=0,cb=0,cc=0,cd=0;
				for(ll i=0;i<s.size();i++)
				{
					if(s[i]-'0'==1)
					ca++;
					if(s[i]-'0'==2)
					cb++;
					if(s[i]-'0'==3)
					cc++;
					if(s[i]-'0'==4)
					cd++;
					
				}
				ll calorie=a*ca+b*cb+c*cc+d*cd;
				cout<<calorie;
	return 0;
}
