#include<bits/stdc++.h>
using namespace std;
class stackA{
    int *data;
    int index;
    int capacity;
    public:
    stackA(){
        data= new int[5];
        index=-1;
        capacity=5;
    }
    int size(){
        return index+1;
    }
    void push(int ele){
        if(index==capacity-1){
             capacity=2*capacity;
            int *newData= new int[capacity];
            for(int i=0;i<=index;i++)
            newData[i]=data[i];
            delete [] data;
            data=newData;
        }
            index++;
            data[index]=ele;
    }
    bool isEmpty(){
        return index==-1;
    }
    int pop(){
        if(isEmpty()){
            cout<<"Stack empty\n";
            return INT_MIN;
        }
        index--;
        return data[index];
    }
    int top(){
        if(isEmpty()){
            cout<<"Stack empty\n";
            return INT_MIN;
        }
        return data[index];
    }
};
int main(){
 stackA s;
 s.push(10);
 s.push(20);
 s.push(30);
 s.push(30);
 s.push(90);
 s.push(20);
 s.push(30);
 s.pop();
 s.pop();
 cout<<s.top()<<"\n";
 cout<<s.size()<<"\n";
}