//Three Digit Game!
//DEVELOPED BY ME😎
#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
int main() {
    int t=0;
    cout<<"*Three Digit Game*";
    while (t==0) {
    srand (time(NULL));
    int v1 = rand() % 6 + 1;
    int v2 = rand() % 6 + 1;
    int v3 = rand() % 6 + 1;
    int M[3];
    int i=0;
    cout<<endl<<"Guess 3 Numbers from 6 to 1:"<<endl;
    while ( M[0]!=v1 || M[1]!=v2 || M[2]!=v3 ){
        for (int i=0;i<3;i++){
            cin>>M[i];
        }
        cout<<"______"<<endl;
        if (M[0]==v1){
            cout<<"+";
        } else {cout<<"-";}
        if (M[1]==v2){
            cout<<" + ";
        } else {cout<<" - ";}
        if (M[2]==v3){
            cout<<"+"<<endl;
        } else {cout<<"-"<<endl;}
        cout<<"______"<<endl;
        i++;
        if (i>5){
            cout<<"You lost!0_0"<<endl<<"Answer:"<<endl<<v1<<endl<<v2<<endl<<v3;
            break;
        }
    }
    if (M[0]==v1 && M[1]==v2 && M[2]==v3){
        cout<<"You Won!^_^"<<endl<<"In "<<i<<" tries";
    }
    cout<<endl<<"Enter 0 For Playing Again: ";
    t++;
    cin>>t;
    }
    cout<<endl<<"Thanks for running me;)";
    return 0;
}