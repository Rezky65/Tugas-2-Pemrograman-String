#include<iostream>
using namespace std;
int main()
{
char x;
cout<<"masukkan sebuah karakter :";
cin>>x;
if (x>='A' && x<='Z')
cout<<"anda memasukkan huruf besar";
else
if(x>='a' && x<='z')
cout<<"anda memasukkan huruf kecil";
else
cout<<"anda memasukkan nomor dan bukan huruf";
return 0;
}
