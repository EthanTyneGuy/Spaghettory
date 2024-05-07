#include <iostream>
#include <string>
using namespace std;

string ifBitch(int num){
    string counter = "Whoa man, you get ";
    counter += to_string(num);
    counter += " bitches?!";
    return counter;
}

string ifBitch(){
    string really = "Wow, really? You're going to be a bitch today?";
    return really;
}
int main(){
    int bitchin;

    cout << "Hey man, tell me how many bitches you get ( or input 0 if you want to be a bitch like that)." << endl;
    cin >> bitchin;
    if (bitchin > 0){
        cout << ifBitch(bitchin);
    }
    else{
        cout << ifBitch();
    }
    return 0;
}