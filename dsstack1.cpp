#include<bits/stdc++.h>
using namespace std;
class stack100{
    int top;
    int arr[5];
    public:
        stack100(){
            top = -1;
            for(int i =0;i<5;i++){
                arr[i] = 0;
            }
        }
        bool is_empty(){
            if(top == -1)
                return true;
            else
                return false;
        }
        bool is_full(){
            if(top == 4)
                return true;
            else
                return false;
        }
        void push(int val){
            if(is_full()){
                cout<<"stack overflow"<<endl;
                cout<<"stack is full you cannot add more\n";
            }
            else
            {
                top++;
                cout<<"value of top is : "<<top<<endl;
                arr[top] == val;
                cout<<"value added at index"<<"  "<<top<<endl;
            }
            
        }
        int pop(){
            if(is_empty())
                cout<<"stack underflow "<<"no item is in stack"<<endl;
            else{
                int temp = arr[top];
                arr[top] = 0;
                top--;
                return temp;
            }
        }
        int peek(int pos){
            if(is_empty()){
                cout<<"stack underflow \n";
            }
            else{
                return arr[pos];
            }
        }
        void display(){
            for(int i = 4;i>=0;i--){
                cout<<arr[i];
                cout<<endl;
            }
        }
        void printAll(){
            for(int i =4;i>=0;i--)
                cout<<arr[i]<<endl;
        }
};
int main(){
    stack100 s;
    int option,value,position;

    do{
        cout<<"0 toexit()"<<endl;
        cout<<"1  is_empty()"<<endl;
        cout<<"2  is_full()"<<endl;
        cout<<"3  push()"<<endl;
        cout<<"4  pop()"<<endl;
        cout<<"5  peek()"<<endl;
        cout<<"6  display()"<<endl;
        cout<<"7 to clear the screen"<<endl;
        
        cin>>option;
        cout<<endl;

        switch(option){
            case 0:
                break;
            case 1:
                cout<<s.is_empty()<<endl;
                break; 
            case 2:
                cout<<s.is_full()<<endl;
                break;
            case 3:
                cout<<"push method invoked\n";
                cout<<"please enter element you want to add"<<endl;
                cin>>value;
                s.push(value);
                break;
            case 4:
                cout<<"the element popped is"<<"  "<<s.pop()<<endl;
                break;
            case 5:
                cout<<"please enter the position between 0 to 4 you want  to peek\n";
                cin>>position;
                cout<<endl<<s.peek(position)<<endl;
                break;
            case 6:
                cout<<endl;
                s.printAll();
                cout<<endl;
                break;
            case 7:
                system("cls");
                break;
            default:
                cout<<"please enter a valid option"<<endl;
        }

    }while(option!=0);
    cout<<"BYE!"<<" "<<"Visit again";
    return 0;
}
