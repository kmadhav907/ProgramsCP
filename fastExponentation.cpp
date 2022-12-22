#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
// (x ^ y)% z
ll power(ll x, ll y , ll z){
    ll res = 1;
    while(y > 0){
        if (y % 2 == 1)
            res = (res * x);
        y = y >> 1;// y= y/2
        x = x * x;
    }
    return res % z;
}

int main(){
    ll x , y , z;
    cin>> x >> y >> z;
    ll result = power(x, y, z);
    cout<< result << endl;
    return 0;
}