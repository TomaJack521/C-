#include<iostream>
using namespace std;

int square(int i){
    cout<< "The square of integer 7 is ";
    return i*i;
}

double square(double i){
    cout<< "The square of double 7.5 is ";
    return i*i;
}

int main(void){
    cout<<square(7);
    cout<<endl;
    cout<<square(7.5);
    cout<<endl;

}