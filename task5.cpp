
#include "tasks_rk1.h"
#include "windows.h"
#include <ctime>
#include <QFile>
#include <QTextStream>
void RandomFillarray (float *arr, int n) {
    srand(time(0));
    for (int i = 0; i < n; i++)
        arr[i] = rand() % 1000;
}

QVector<float>  averStr2DArray(float* ar, int height, int weight) {
QVector<float> averStr;

for (int i = 0; i < height; i++) {
float averStr_temp = 0;
for (int j = 0; j < weight; j++) {
averStr_temp += ar[i*weight + j] / weight;
}

averStr.push_back(averStr_temp);
}


return averStr;
}
void WritetoFile5(QVector <float> vec)
{
QFile f("result_task5");
if(f.open(QIODevice::WriteOnly))
{
    QTextStream out (&f);
    for(int i =0;i<vec.size();i++)
    {
       out << i+1<< "\t"  << vec[i]<<"\n";
    }

}
f.close();
}
