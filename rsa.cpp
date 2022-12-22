#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double D;

ll gcd(ll a , ll h){
    ll temp;
    while(true){
        temp = a % h;
        if(temp == 0){
            return h;
        }
        a = h;
        h = temp;
    }
}

/*
    m -> Message
    encryptedMessage = (m ^ e )% n (e, n)-> Public key
    decryptedMessage = (encryptedMessage ^ d)% n  (d, n)-> Private key
    where d = (1 + k * phi)/e; e = A constant which is coprime to phi
*/
int main(){
    D p1 , p2;
    cout<<"Enter two primes"<<endl;
    cin>>p1>>p2;

    D n  = p1 * p2;

    D e = 2;
    D phi = (p1 - 1) * (p2 - 1);
    while(e < phi){
    if (gcd(e, phi) == 1)
        break;
    else
        e++;
    }
    D message;
    int k = 2;
    cout<<"Enter the message"<<endl;
    cin>>message;
    D encryptedMessage = pow(message, e);
    encryptedMessage = fmod(encryptedMessage,n);
    D d = (1 + k * phi)/e;
    D decryptedMessage = pow(encryptedMessage, d);
    decryptedMessage = fmod(decryptedMessage,n);
    cout<<decryptedMessage;
    return 0;

    

}