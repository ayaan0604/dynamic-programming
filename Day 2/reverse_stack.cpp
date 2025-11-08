#include<iostream>
#include<stack>
#include<vector>

using namespace std;

void insert(stack<int>& s, int element ){
    if(s.empty()){
        s.push(element);
        return;
    }

    int temp = s.top();
    s.pop();

    insert(s, element);

    s.push(temp);

}

void reverse_stack(stack<int>& s){
    if(s.empty()) return;

    int top = s.top();
    s.pop();

    reverse_stack(s);

    insert(s, top);


}


int main(){

    
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);

    cout << "Before" << endl;

    while(!s.empty()){

        cout << s.top() << " ";
        s.pop();
        
    }

    
    
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
 
    reverse_stack(s);

    cout << endl << "after" << endl;
    while(!s.empty()){

        cout << s.top() << " ";
        s.pop();

    }

    return 0;
}