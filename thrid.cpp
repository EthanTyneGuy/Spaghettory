#include <iostream>

using namespace std;

int main() {

int counter = 1;

while (counter <= 10){
    int i = 1 * counter;
    cout << i << ",";
    ++counter;
}
cout << endl;
counter = 1;

while (counter <= 10){
    int i = 2 * counter;
    cout << i << ",";
    ++counter;
}
cout << endl;
counter = 1;

while (counter <= 10)
    {
        int i = 10 * counter;
        cout << i << ",";
        ++counter;
    }
return 0;
}

