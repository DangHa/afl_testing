#include <iostream>
using namespace std;

int main ()
{
    string a,b,c,d,enter;
    cout << "a = ";
    cin >> a;
    cout << "b = ";
    cin >> b;
    cout << "c = ";
    cin >> c;
    cout << "d = ";
    cin >> d;


    // CRASH ######
    if(a == "a" && b == "b" && c == "c" && d == "!"){
        cout << "Crash ...  " << d << "\n";
        abort();
    }
    
    cout << "Everything is fine " << a << " " << b << " " << c << " " << d << "\n";

    return 0;
}