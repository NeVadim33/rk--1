#ifndef TASK6_H
#define TASK6_H
#include <QCoreApplication>
#include <QDebug>
#include <QFile>
#include <QTextStream>
#include <iostream>
using namespace std;
struct Data
{
    const char* str;
};
struct Node
{
    Node* next;
    Node* prev;
    Data * k;
public:
    Node(const char* d)
    {
       this->k =new Data;
        this->k->str=d;
    }
};




class task6
{
private:
    Node* head;
       Node* tail;
public:
    task6();
    ~task6();
      void push_back (const char* p);
      void show();
       void Writetofilehead();
       void Writetofiletail();
};

#endif // TASK6_H
