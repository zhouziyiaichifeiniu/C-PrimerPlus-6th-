#include <iostream>
using namespace std;
double temp(double c);
int main(){
double c = 0;
cin >> c;
double f =temp(c);
cout << c <<" degrees Celsius is" << f <<" degrees fahrenheit" <<endl;
}
double temp(double c){
    double f = 1.8*c + 32.0;
    return f;
}