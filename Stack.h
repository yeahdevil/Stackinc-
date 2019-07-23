#include<iostream>
using namespace std;

template <typename T>
class Stack
{
    public:
        //stack structure
    struct Node{
    T data;
    Node* next;
    };
    //variables
    int SIZE = 0;
    Node* Top;
    //constructor
    Stack(){
    cout<<"Stack lib included"<<endl;
    this->Top=NULL;
    };
    //functions
        bool createNode(T);
        bool push(T);
        T pop();
        bool isEmpty();
        T top();
        int stackSize();

};

/*template <typename T>
void Stack<T>::printStack(){
    int counts = 0;
    Node* ptr = Top;
while(ptr!=NULL)
{
 counts++;
 cout<<"["<<counts<<"]"<<"["<<ptr->data<<"]\t";
 ptr=ptr->next;
}
cout<<endl;
}*/
template <typename T>
int Stack<T>::stackSize(){
cout<<"Size of stack is "<<SIZE<<endl;
return SIZE;
}
template <typename T>
bool Stack <T>::push(T data)
{
    if(createNode(data)){
          cout<<data<<" is successfully inserted"<<endl;
          SIZE++;
    }

}
template <typename T>
T Stack <T>::pop()
{
    if(!isEmpty()){
    Node* ptr = Top;
    T temp = Top->data;
    Top=Top->next;
    delete(ptr);
    SIZE--;
    cout<<temp<<" is successfully popped"<<endl;
    return temp;
    }
    else{
         cout<<"Stack is empty"<<endl;
    }

}
template <typename T>
bool Stack <T>::isEmpty()
{
    if(Top==NULL){
        return true;
    }
    else{
        return false;
    }
}
template <typename T>
T Stack <T>::top()
{
    if(!isEmpty()){
        cout<<"Data in top of stack is "<<Top->data<<endl;
        return Top->data;
    }
    else{
         cout<<"Stack is empty"<<endl;
    }

}
template <typename T>
bool Stack <T>::createNode(T data)
{
     Node* temp;
     Node* node = new Node();
    if(Top==NULL){
        Top = node;
        Top->data = data;
        Top->next = NULL;
        return true;
    }
    else{
        temp = Top;
        Top = node;
        Top->data = data;
        Top->next = temp;
        return true;
    }
    return false;
}
