#include <QCoreApplication>
#include <QTextStream>
#include <QPair>
#include <iostream>
#include <QFile>
#include <QtDebug>
#include <ctime>
#include <cstdlib>
#include "workwithfile.h"
#include "tasks_rk1.h"
#include "task6.h"

using namespace std;

void task_4(int height)
{
    buildTree(height);
    }


void task_1()
{
   WorkWithFile test;
   test.writeStatInfoToFile("result_task1");
}

void task_2()
{
    result(22);

}
void task_3()
{
    convertBinToHex("0x31 0x30 0x31 0x30 0x30 0x31 0x30 0x31 0x30 0x31 0x31 0x30 0x31 0x30 0x30 0x31 0x30 0x31 0x30 0x31 0x31 0x30 0x31 0x30 0x30 0x31 0x30 0x31 0x30 0x31 0x31 0x30");
}
/////////////////


void task_5() {
float arr[12];
RandomFillarray(arr,12);
WritetoFile5(averStr2DArray(arr,3,4));
}


void task_6()
{
    task6 test;
    test.push_back("Andre");
    test.push_back("Pavel");
    test.push_back("Timur");
    test.push_back("Kirill");
    test.push_back("Daniil");
    test.push_back("Vladimir");
    test.Writetofilehead();
    test.Writetofiletail();

}


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    task_1();
    //cout<<fileData.size();


    task_2();
    //////////
    cout<<"task 3 :  ";
    task_3();
    ////////
     cout<<endl;
cout<<"task_4 :";
cout<<endl;
    task_4(8);
    ///

task_5();
      ///
      ///
     task_6();
    return 0;
}
