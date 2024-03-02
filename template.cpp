#include <bits/stdc++.h>
using namespace std;
#define ll              long long
#define pb              push_back
#define cn              continue;
#define br              break;
#define nn              cout << "\n";
#define N               cout << "NO\n";
#define Y               cout << "YES\n";
#define v(a)            a.begin(),a.end()
#define rem(s,a)        s.erase(remove(s.begin(), s.end(), a),s.end());
#define ft(fao,it)      for(auto it=fao.begin();it!=fao.end();it++)      
#define fr(i,j,n)       for(i=j;i<n;i++)
#define frm(i,n,j)      for(i=n;i>=j;i--)   
ll mod=1e9+7;
ll MOD=1e9+7;
void vp(vector<ll>ab)
{
    for(auto ii=ab.begin();ii!=ab.end();ii++)
    {
        cout<<*ii<<" ";
    }
    nn
     
}
void ap(ll *arr,ll n)
{
    for(auto ii=0;ii<n;ii++)
    {
        cout<<arr[ii]<<" ";
    }
    nn
     
}
void vpp(vector<pair<ll,ll>>ab)
{
    for(auto ii=ab.begin();ii!=ab.end();ii++)
    {
        cout<<ii->first<<" "
        <<ii->second<<"\n";
    }
    nn
     
}
void pdq(deque<ll> g)
{
    
    for (auto it = g.begin(); it != g.end(); ++it)
        {
            cout << *it<<" ";
        }
    nn
}
bool sortbysec(const pair<int,int> &a,const pair<int,int> &b)
{       
    
        if(a.first==b.first)
        {
            return a.second<b.second;
        }
        return a.first<b.first;
        
}
ll invb(ll num,ll x)
{
    
    //ll x = 31; // how many bits??
    
 
    
    for (ll i = 0; i < x; i++) 
       num = (num ^ (1 << i)); 
  
    return num;
}
int main()
{
    // ios::sync_with_stdio(0);
    // cin.tie(0);
    // cout.tie(0);
    ll t=1,b,a=1,i,j,c,d,e,f,n,k,m,mn,mx=0;
    
    cin>>t;
    d=t;
    ll q=0;
    
    while(t--)
    {
        
        q++;
        string s,ss,sss;
        char ch,cs;
        vector<ll>zef,zeb,fao,fao1,pao,pao1;
        vector<pair<ll,ll>>as,ad,af,ag;
        map<ll,ll>num;
        map<ll,ll>jum,lum;
        map<pair<ll,ll>,ll>ab;
        vector<pair<ll,ll>>he,po;
        set<ll>kao,tao;
        ll lo=0,hi=0;
        s="";

        f=1,e=0;k=0;

        ll x=0,y=0;
        
        

    }


    return 0;


}


