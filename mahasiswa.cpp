#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    int n;
    int no=1;
    cout<<"Jumlah mahasiswa : ";
    cin >>n;
    int nim[n];
    string nama[n];
    system("cls");
    for (int i=0;i<n;i++)
    {
        cout <<"Masukan nim dan nama mahasiswa ke "<<no<<endl;
        cout <<"NIM : ";
        cin >> nim[i];
        cout <<"Nama : ";
        cin >> nama[i];
        system("cls");
    }
    cout<<"|----------------------------------|"<<endl;
    cout<<"| Data mahasiswa "<<endl;
    cout<<"|----------------------------------|"<<endl;
    for (int i=0;i<n;i++)
    {
    cout<<"| No.    | "<<no<<endl;
    no++;
    cout<<"|----------------------------------|"<<endl;
    cout<<"| NIM    | "<<nim[i]<<endl;
    cout<<"| Nama   | "<<nama[i]<<endl<<endl;
    cout<<"|----------------------------------|"<<endl;
    }
}
