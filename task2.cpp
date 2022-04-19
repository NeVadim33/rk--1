#include "tasks_rk1.h"
#include <QCoreApplication>
#include <QTextStream>
#include <QPair>
#include <iostream>
#include <QFile>
#include <QtDebug>
#include <ctime>
#include <cstdlib>
 char binNumb[32];
char* convertDecToBin(int num) {
    memset(binNumb, 0x00, 32 * sizeof(int));

    for (int i = 0; i < 32; i++) {
        binNumb[i] = ((num & 1 << i)) ? 0x31 : 0x30;
    }
    return binNumb;
}
void WritetoFile(char* numb,const char* filename){
    QFile f(filename);
    if(f.open(QIODevice::WriteOnly))
    {
        QTextStream out (&f);
        for(int i =0;i<32;i++)
        {
           out << numb[i];
        }

    }
    f.close();
}

void result(int i) {
    convertDecToBin(i);
    WritetoFile(binNumb,"result_task2");
    qDebug() << "task 2 :" <<binNumb;

}
