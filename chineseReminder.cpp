#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll chineseReminder(vector<int> numbers, vector<int> reminders){
    ll ans = 1;
    while(true){
        int j;
        for( j = 0 ; j < numbers.size() ; j++)
            if(ans % numbers[j] != reminders[j]) break;
        
         if(j == numbers.size()) return ans;
         ans++;
    }
    return ans;
}
int main() {
    vector<int> numbers;
    vector<int> reminders;
    ll ans, n;
    cin>>n;
    for(ll i = 0; i < n; i++) {
        ll reminder, number;
        cout<<"Number:";
        cin>>number;
        cout<<"Reminder:";
        cin>> reminder;
        numbers.push_back(number);
        reminders.push_back(reminder);
    }
    ans = chineseReminder(numbers, reminders);
    cout<<ans<<endl;
}