#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define MOD 1000000007
#define fi first
#define se second
#define rep(i,n) for(int i = 0 ; i < n ; i++)
#define repe(i,n) for(int i = 0 ; i <= n ; i++)
#define repb(i,a,b) for(int i = a ; i < b ; i++)
#define repeb(i,a,b) for(int i = a ; i <= b ; i++)
#define rfor(i,n,a) for(int i = n ; i >= a ; i--)
#define pb push_back
#define popb pop_back()
#define endl "\n"
#define pii pair<int,int> 
#define pll pair < long long, long long >
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)
#define p0(a) cout << a << " "
#define p1(a) cout << a << endl
#define p2(a,b) cout << a << " " << b << endl
#define p3(a,b,c) cout << a << " " << b << " " << c << endl
#define p4(a,b,c,d) cout << a << " " << b << " " << c << " " << d << endl
#define sortv(v) sort(v.begin(),v.end())
#define rsortv(v) sort(v.begin(),v.end(), greater<>());
#define sortby(v,prop) sort( v.begin( ), v.end( ), [ ]( const auto& lhs, const auto& rhs ){ return lhs.prop < rhs.prop; });
#define rsortby(v,prop) sort( v.begin( ), v.end( ), [ ]( const auto& lhs, const auto& rhs ){ return lhs.prop > rhs.prop; });


/*-------------------------------------------------*/

int main()
{
    fastio;
    int tc;
    cin >> tc;

    while(tc--)
    {
        ll n, x, elem, evenCnt = 0, oddcnt = 0;
        cin >> n >> x;

        rep(i,n) {
            cin >> elem;
            if(elem % 2 == 0) {
                evenCnt++;
            } else {
                oddcnt++;
            }
        }

        bool found = false;
        int i = 1;

        if(evenCnt == 0 && x % 2 == 0) {
            p1("No");
            continue;
        }

        while(i <= oddcnt) {
            if(evenCnt >= x - i) {
                p1("Yes");
                found = true;
                break;
            }
            i += 2;
        }

        if(!found) {
            p1("No");
        }
    }

    return 0;
}