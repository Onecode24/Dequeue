#include "Dequeue.h"

Dequeue::Dequeue(/* args */)
{
   
}

Dequeue::~Dequeue()
{
}
void Dequeue::addFront(int n){
    std::vector<int> newValues;
    newValues.push_back(n);
    for (auto i : values)
    {
        newValues.push_back(i);
    }
    values=newValues;
}
void Dequeue::addBack(int n){
    values.push_back(n);
}
void Dequeue::removeFront(){
    std::vector<int> newValues;
    for (size_t i = 1; i < values.size(); i++)
    {   
        newValues.push_back(values[i]);
    }
    values=newValues;
}
void Dequeue::removeBack(){
    values.pop_back();
}
int Dequeue::getFront(){
    return values[0];
}
int Dequeue::getBack(){
    return values[values.size()-1];
}