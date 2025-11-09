#include <iostream>
using namespace std;
int main()
{
    float num1,num2;
    char op;
      cout<<"Enter a no."<<endl;
      cin>>num1;
       
       cout<<"Enter the operation"<<endl;
       cin>>op;
       
       cout<<"Enter another number"<<endl;
       cin>>num2;
       
      switch(op){
        case '+':
          cout<<"Result: "<<num1+num2<<endl;
          break;
          
        case '-':
          cout<<"Result: "<<num1-num2<<endl;
          break;
          
        case '*':
          cout<<"Result: "<<num1*num2<<endl;
          break;
        case '/':
            if (num2!= 0)
                cout << "Result: " << num1 / num2 << endl;
            else
                cout << "Error" << endl;
            break;
        default:
            cout << "Invalid operator!" << endl;
      }

    return 0;
}
