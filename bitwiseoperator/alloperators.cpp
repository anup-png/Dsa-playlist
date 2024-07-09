#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main() {
    // Your code goes here
    cout<<(5 & 3)<<endl;
    cout<<(5 | 3)<<endl;
    cout<<(5 ^ 3)<<endl;
    cout<<(5 ^ 5 ^ 9)<<endl;
    cout<<(5 ^ 0)<< endl;
    cout<<(5 >> 2)<<endl;
    cout<<(5<<3)<<endl;

    //even  and odd

    cout<<(5 & 1)<<endl;
    cout<<(4 & 1)<<endl;


    int number =15;
    int bitCount=0;
    
    while( number != 0 ){

     if((number & 1) == 1){
        bitCount++;
     }
     
     number=(number>>1);

    }

    cout<<"no of bits : " <<bitCount<<endl;



    




    return 0;
}

