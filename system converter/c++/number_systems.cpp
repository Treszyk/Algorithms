#include<iostream>
#include<cmath>
using namespace std;

string dec_to_sys(int dec, int sys) {
    string sys_num = "";
    while(dec) {
        int character_num = dec%sys;
        character_num += character_num>=10? 87 : 48;
        sys_num = char(character_num) + sys_num;
        dec/=sys;
    }
    return sys_num;
}

int sys_to_dec(string number, int sys) {
    int dec = 0;
    int size = number.length();
    for(int i=0; i<size; i++) {
        char character = number[i]; 
        if(character < 'a') {
            dec += int(character - '0') * pow(sys, size - 1 - i);
        } else {
            dec += int(character - 'a' + 10) * pow(sys, size - 1 - i);
        }
    }
    
    return dec;
}
int main() {
    int dec = 173328;
    int sys = 36;
    cout<<dec_to_sys(dec, sys)<<endl;;
    string sys_num = "3pqo";
    cout<<sys_to_dec(sys_num, sys);
}