#include <bits/stdc++.h>
#define ll long long int
#define mod 1000000007
using namespace std;
#define vll vector<ll>
#define pll pair<ll, ll>
#define pii pair<int, int>
const long long int inf = 1e18;
void solve()
{
    ll a, b, c, d, e, f, n, m, q, k, s, p;
    string s1, s2, s3;
    cin >> n;
    vll arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    a = 0;
    while (arr[a] % 2 != 0 && a < n)
    {
        a++;
    }
    a = 2, b = 2;

    s1 = "YES";
    if (arr[0] % 2 == 0)
    {
        s1 = "NO";
    }
    else
    {
        for (ll i = 1; i < n; i++)
        {
            b = __gcd(a, i + 2);
            a = (a * (i + 2));
            a /= b;
            if (arr[i] % a)
            {
            }
            else
                s1 = "NO";
        }
    }
    cout << s1 << "\n";
    return;
}
int main()
{
    ll t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}