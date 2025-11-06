#include<iostream>
#include<stack>
using namespace std; 

void delete_stack_mid(stack<int>& s,int size, int current=0){
    if(current == size) return;

    int temp=s.top();
    s.pop();

    delete_stack_mid(s, size, current+1);

    if(current == size/2) return;

    s.push(temp);

}


int main(){

    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);

    cout << "Before " << endl;

    while(!s.empty()){
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;

    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);

    delete_stack_mid(s, s.size());

    cout<< "After" << endl;

    while(!s.empty()){
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;

    

    return 0;
}