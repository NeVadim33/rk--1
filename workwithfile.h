#ifndef WORKWITHFILE_H
#define WORKWITHFILE_H
#include <QCoreApplication>
#include <QTextStream>
#include <QPair>
#include <iostream>
#include <QFile>
#include <QtDebug>
#include <ctime>
#include <cstdlib>

class WorkWithFile
{
private:
    QByteArray fileData;
    void ReadFromFile(const char* fileName);
     void  prepareTestFile(const char* filename);
     void WriteToFile(int ar[],const char* outFile);
     int randomRange(int low, int high);
public:
    WorkWithFile();
    ~WorkWithFile();
    void writeStatInfoToFile(const char* outFile);
};

#endif // WORKWITHFILE_H
