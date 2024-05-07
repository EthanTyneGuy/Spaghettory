#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main(){
    string falc1, falc2, falc3, falc4;
    ifstream fileIn;
    fileIn.open("falco.txt");
    fileIn >> falc1 >> falc2 >> falc3 >> falc4;
    fileIn.close();
    cout << falc1 <<" " << falc2 << " " << falc3 << " " << falc4 << endl;
    return 0;
}