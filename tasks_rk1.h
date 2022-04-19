#ifndef TASKS_RK1_H
#define TASKS_RK1_H

#endif // TASKS_RK1_H
#include <QVector>
char* convertDecToBin(int num) ;
void WritetoFile(char* numb);   ///task2
void result(int i);


char* convertBinToHex( const char* str);
void WritetoFile3(char* numb,const char* filename); /// task3


void buildTree(int height); /// task4


void RandomFillarray(float *arr, int n );
QVector<float>  averStr2DArray(float* ar, int height, int weight);  //task 5
void WritetoFile5(QVector <float> vec);


