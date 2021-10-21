#include <iostream>
using namespace std;
long transfer(long dis);
int main(){
    int dis = 0;
    cin >> dis;
    cout << transfer(dis) << endl;
}
long transfer(long dis){
    long ma = 220 * dis;
    return ma;
}