//Link Problem==>https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/M
#include <iostream>
#include<iomanip>
#include<cmath>
#include<string>
#include<algorithm>
using namespace std;
#define ll long long
#define ld long double
#define pi 3.141592653589793238
#define ahmed  ios_base::sync_with_stdio(false);cout.tie(NULL);cin.tie(NULL);
#define no cout<<"NO"<<endl;
#define yes cout<<"YES"<<endl;
int counter[1000001] = {};
int main()
{
    ahmed
        ll t; cin >> t;
    while (t--) {
        ll n, s,sum=0,a=0;
        cin >> n;
        while (n > 0) {
            ll t = n % 2;
            n /= 2;
            if (t == 1) {
                sum += pow(2, a); a++;
            }
        }
        cout << sum << endl;


    }
}
//مهما الدنيا إتنيلت ضلمت لازم يبقى عندك زفت أمل و تعرف إن في نور في أخر أم النفق//

        //اهو بنتنيل نستمر ف السعي رغم فقدان الزفت الشغف