#include<bits/stdc++.h>
template <typename T>
class stackA{
    T *data;
    int index;
    int capacity;
    public:
    stackA(){
        data= new T[5];
        index=-1;
        capacity=5;
    }
    int size(){
        return index+1;
    }
    void push(T ele){
        if(index==capacity-1){
             capacity=2*capacity;
            T *newData= new T[capacity];
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
    T pop(){
        if(isEmpty()){
            cout<<"Stack empty\n";
            return 0;
        }
        index--;
        return data[index];
    }
    T top(){
        if(isEmpty()){
            cout<<"Stack empty\n";
            return 0;
        }
        return data[index];
    }
};
