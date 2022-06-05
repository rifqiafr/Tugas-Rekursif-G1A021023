#include<iostream>
using namespace std;
int hitungnol(int angka)
{
static int hitung=0;
    if(angka>0)
    {

        if(angka%10==0)
        hitung++;

        hitungnol(angka/10);
    }
    return hitung;
}
int main()
{
    int n;
    cout<<"Menghitung Angka nol"<<endl;
    cout<<"==========================="<<endl;
    cout<<"Masukkan Angka : " ;
    cin>>n;
    cout<<"==========================="<<endl;
    cout<<"Banyak angka nol : "<<hitungnol(n);
}
