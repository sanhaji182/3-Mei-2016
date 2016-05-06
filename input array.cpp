#include <iostream>

using namespace std;

int main()
{
    int n;
    cout<<"Jumlah bilangan :";
    cin >>n;
    int A[n];
    for (int i=0;i<n;i++)
    {
        cout <<"A["<<i<<"] = ";
        cin >> A[i];
    }
    cout<<"Isi dari array tersebut adalah ";
    for (int i=0;i<n;i++)
    {
    cout<<A[i]<<",";
    }
}
