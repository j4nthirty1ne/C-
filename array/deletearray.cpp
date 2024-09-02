#include <iostream>
using namespace std;
int main ()
{
    system ("cls");
    int value[] = {1,2,3,4,5,5,6,7,8,9};
    int n = sizeof(value)/sizeof(value[0]);
    int elements;
    cout << "Enter the number of elements you want to delete: ";
    cin >> elements;

    for (int i = 0; i < n; i++)
    {
        if (elements == value[i])
        {
            for (int j = i; j < n-1; j++)
            {
            value[j] = value[j+1];
            }
            n--;
            i--;
        }
        
    }
    
    cout << "Array atfer delete the elements: ";
    for (int i = 0; i < n; i++)
    {
        cout << value[i] << " ";
    }
    return 0;
}
