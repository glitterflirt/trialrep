#include <iostream>
#include <math.h>
using namespace std;
int main(){
    static int a, b, c, d;
    cout << "Enter values for a, b \n";
    cin >> a >> b;
    cout << "Sum is " << a+b << endl << "Product is " << a*b << endl;
    cout << "Average is " << (a+b)/2 << endl;
    if (a!=b){
        cout << "Smaller of the 2 numbers is " << fmin(a,b) << endl;
        cout << "Larger of the 2 numbers is " << fmax(a,b) << endl;
    }
    cout << "Difference is " << abs(a-b) << endl;
    c = fmax(a, b) / fmin(a, b);
    d = int(fmax(a, b)) % int(fmin(a, b));
    cout << "Quotient and Remainder are " << c << ", " << d << " respectively" << endl;
}