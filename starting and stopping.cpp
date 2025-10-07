#include<iostream>
using namespace std;
int main() {
    int start,stop;
    int sum=0;

    cout<<"enter starting no:";
    cin>>start;

    cout<<"enter stopping number:";
    cin>>stop;

    for (int i=start;i<=stop;i++) {
        sum+=i*i;
    }
    cout<<"your sum of square "  <<start <<" to "<<stop<<" is "<<sum;

    return 0;
}