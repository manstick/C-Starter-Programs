#include <iostream>

using namespace std;

//Even-Odd Number founder

int num;

int main()
{
    cout<<"Enter the max number==";
    cin>>num;
    for (int i=0;i<num+1;i++){
        if (i%2==0){
            cout<< i <<"=Found an even number"<< endl;
        }
        else{
            cout<< i <<"=Found an odd number"<< endl;
        }
    }
}