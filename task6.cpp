#include "task6.h"
#include <QCoreApplication>
#include <QDebug>
#include <QFile>
#include <QTextStream>
#include <iostream>
using namespace std;


void task6:: push_back (const char* p)
         {
             Node* temp = new Node(p);

             temp->next= nullptr;
             temp->prev= tail;
             if(tail!=nullptr)
             {
                 tail->next = temp;
            }
            if(head==nullptr)
                  head = tail = temp;
            else
                tail = temp;

         }

void task6:: show ()
   {
       Node* tempnode= head;
       while(tempnode!=nullptr)
       {
           cout<<tempnode->k->str<<"\t";
           tempnode=tempnode->next;

       }
       delete tempnode;
   }

void task6:: Writetofilehead()
    {
    int i=1;
        Node* tempnode = head;
        QFile f("result_task6HEAD");
        if(f.open(QIODevice::WriteOnly))
        {
            QTextStream out (&f);
            while (tempnode!=nullptr)
            {
                out<< i <<"\t" << tempnode->k->str<<"\n";
                tempnode = tempnode->next;
                i++;
            }
        }
f.close();
    }

void task6:: Writetofiletail()
    {
    int i=1;
        Node* tempnode = tail;
        QFile f("result_task6TAIL");
        if(f.open(QIODevice::WriteOnly))
        {
            QTextStream out (&f);
            while (tempnode!=nullptr)
            {
                out<< i <<"\t" << tempnode->k->str<<"\n";
                tempnode = tempnode->prev;
                i++;
            }
        }
f.close();
    }

task6::task6()
{
    head=nullptr;
    tail=nullptr;
}
task6::~task6()
{

}
