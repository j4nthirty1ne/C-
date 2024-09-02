#include <iostream>
using namespace std;

int main ()
{
    system ("cls");
    int Num [5][7] = {{1,2},
                      {5,6},
                      {9,10},
                      {11,12},
                      {13,14,4,8}};
for (int i = 0; i < sizeof(Num)/sizeof(Num[0]); i++)
{
    for (int j = 0; j <sizeof(Num[0])/sizeof(Num[0][0]); j++)
    {
        cout << Num[i][j] << " ";
    }
    cout << endl;
}
    return 0;

}