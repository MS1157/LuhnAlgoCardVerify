#include<iostream>
#include<string>
#include<algorithm>

using namespace std;
bool valid(std::string atm){
    std::string cleanedAtm;
    for (char c : atm) {
        if (std::isdigit(c)) {
            cleanedAtm += c;
        }
    }
    if (cleanedAtm.empty()) {
        return false; // Empty string is not valid.
        }
   std::reverse(cleanedAtm.begin(),cleanedAtm.end());
    int sum = 0;
    for (int i = 0; i < cleanedAtm.length(); i++) {
        int digit = cleanedAtm[i]-'0';
        if (i % 2 == 1) {
            digit *= 2;
            if (digit > 9){
                digit -= 9;
            }
        }
        sum += digit;
    }
    return (sum % 10 == 0);
}   

    int main(){
    cout<<"Enter ATM Card number"<<endl;
    string atm;
    cin>>atm;
    if(valid(atm)){
        system("cls");
        cout<<"Valid ATM Card Number"<<endl<<endl;
    }
    else{
        system("cls");
        cout<<"Not Valid ATM Card Number"<<endl<<endl;
    }
    return 0 ;
    }