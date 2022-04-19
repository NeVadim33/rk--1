#include "workwithfile.h"
#include <QCoreApplication>
#include <QTextStream>
#include <QPair>
#include <iostream>
#include <QFile>
#include <QtDebug>
#include <ctime>
#include <cstdlib>
void WorkWithFile::WriteToFile(int ar[],const char* outFile)
{
    QFile ff (outFile);
    if(ff.open(QIODevice::WriteOnly))
    {
    QTextStream out (&ff);
    for ( int i =0;i<=255;i++)
    out << char(i)<< "\t"<<ar[i]<<"\n";
    }
    ff.close();
}
void WorkWithFile::ReadFromFile(const char *fileName)
{
    QFile f(fileName);
    if(f.open(QIODevice::ReadOnly))
    {

     fileData = f.readAll();
}

    f.close();
}
void WorkWithFile::prepareTestFile(const char *filename)
{
    QFile f2(filename);
    if(f2.open(QIODevice::WriteOnly))
    {
        QTextStream out(&f2);
        for(int i =0; i<100;i++)
        {
            const char ch = randomRange('a', 'z');
                    out << ch;
        }
    }
    f2.close();
}
int WorkWithFile::randomRange(int low, int high)
{
    return rand() % (high - low + 1) + low;
}
void WorkWithFile::writeStatInfoToFile(const char *outFile)
{
    prepareTestFile("sourceFile_task1.txt");
    ReadFromFile("sourceFile_task1.txt");

    int ar[256];
    memset(&ar[0], 0x00, sizeof(int) * 256);

    for (int i = 0; i < fileData.size(); i++) {
        ar[int(fileData[i])]++;
    }

    WriteToFile(ar, outFile);
}

WorkWithFile::WorkWithFile()
{

}
WorkWithFile::~WorkWithFile()
{

}
