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
				ll arr[26];
				for(ll i=0;i<26;i++)
				arr[i]=0;
				for(ll i=0;i<s.size();i++)
				arr[s[i]-'a']++;
				ll max=0;
				for(ll i=0;i<26;i++)
				{
					if(arr[i]>=1)
					max++;
				}
//				for(ll i=0;i<26;i++){
//				
//				cout<<arr[i]<<endl;
//			}
			//	cout<<max<<endl;
				if(max%2==1)
				cout<<"IGNORE HIM!"<<endl;
				else
				cout<<"CHAT WITH HER!"<<endl;

	return 0;
}
