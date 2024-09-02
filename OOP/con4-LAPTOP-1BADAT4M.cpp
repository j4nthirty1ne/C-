#include <iostream>
using namespace std;
class Utils{
    public:
        int sum(int a, int b){
            return a + b;
        }
        int square(int a){
            return a * a;
        }
        double khCurrencyExchange(double a){
            return a/4000;
        }
};

int main(){
    Utils util;
    cout<<"Sum: "<<util.sum(90,-100)<<endl;
    cout<<"Square: "<<util.square((-4)*(-4)*-2)<<endl;
    cout<<"Cash in dollar: "<<util.khCurrencyExchange(10200)<<endl;
    return 0;
}
