#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
   // ASCII of A = 65
   // ASCII of a = 97
string encrypt (string message, ll shift){
    string result;
    for(auto ch: message){
        char toBeAppend;
        if(isupper(ch)){
            toBeAppend = char(int(ch + shift - 65) % 26 + 65);
        }else {
            toBeAppend = char(int(ch + shift - 97) % 26 + 97);
        }
        result.push_back(toBeAppend);
    }
    return result;
}
string decrypt (string message, ll shift) {
    string result;
    for(auto ch: message){
        char toBeAppend;
        if(isupper(ch)){
            toBeAppend = char(int(ch - shift - 65) % 26 + 65);
        }else {
         
            toBeAppend = char(int(ch - shift - 97) % 26 + 97);
        }
        result.push_back(toBeAppend);
    }
    return result;
}

int main(){
    string s;
    cin>>s;
    string cipher = encrypt(s, 3);
    string decipher = decrypt(cipher, 3);
    cout<<decipher;
    return 0;

}