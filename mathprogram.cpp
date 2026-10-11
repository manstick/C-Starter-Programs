
#include <iostream>
#include <cmath>

using namespace std;



int main()
{
    int num1;
    int num2;
    string answer;
    
    do{
        cout << "==================================="<< endl;
        
        cout << "Welcome To C++ Math Function Tester"<< endl;
    
        cout << "==================================="<< endl;
    
        cout << "Enter Your First Number = ";
        cin>>num1;
        
        if (!(cin>>num1)){
            cout << "ENTER A NUMBER "<<endl;
            cout <<"Program End" << endl;
            return 0;
        }
        
        cout<< endl;
    
        cout << "Enter Your Second Number = ";
        cin>>num2;
        
        if (!(cin>>num1)){
            cout << "Blud Enter A Int variable" << endl;
            cout <<"Program End";
            return 0;
        }
        
        cout << endl;
        cout << "Min in nums = " <<min(num1,num2)<<endl;
        //taking min or max in between numbers
        cout << "Max in nums = " <<max(num1,num2)<<endl;
        cout << endl;
        cout << "Log = " << log(num1) << " num1---num2 " << log(num2)<<endl;
        //taking logaritm of the numbers
        cout << endl;
    
    
        cout << "Square roots = " << sqrt(num1) << " num1---num2 " << sqrt(num2)<<endl;
        cout << "Square root tester =" << sqrt(num1)*sqrt(num1)<< " num1 --- num2 " << sqrt(num2)*sqrt(num2); 
    
        //taking square roor of the numbers
        cout << endl;
        cout <<"Rounding = " << round(num1) << " num1---num2 " << round(num2)<< endl;
        //if the number countinues after the dot it rounds it
        cout << endl;
        cout << "Abs="<< abs(num1) << " num1---num2 " << abs(num2)<< endl;
        //taking the measure between number and zero
    
        cout<<"================================================================"<< endl;
    
        cout <<"Want to Make Another?(Yes/No)===";
        cin>>answer;
    
    }while (answer == "Yes");

    cout << "Program End" << endl;
    return 0;
}