#include "tasks_rk1.h"
#include <QCoreApplication>
#include <QTextStream>
#include <QPair>
#include <iostream>
#include <QFile>
#include <QtDebug>
#include <ctime>
#include <cstdlib>
using namespace std;
void WritetoFile3(char* numb,const char* filename){
    QFile f(filename);
    if(f.open(QIODevice::WriteOnly))
    {
        QTextStream out (&f);
        for(int i =0;i<10;i++)
        {
           out << numb[i];
        }

    }
    f.close();
}

char* convertBinToHex( const char* str)
{
char* k = new char[10];

k[0]='0';
k[1]='x';
int countfork =2;
int countmain = 0;
int count =0;
char* temp= new char[4];
char* tempmain= new char[4];
for(int i =0; i<159;i++)
{
temp[count]= str[i];
count++;
if(count==4 ||str[i]== NULL)
{
    count = 0;
    i++;
//        for (int i=0;i<4;i++)
//        {
//            cout<<temp[i];
//        }
//        cout<<endl;
  if(temp[0]=='0' && temp[1]=='x' && temp[2]=='3' && temp[3]=='1')
  {
      tempmain[countmain]='1';
      countmain++;
      if(countmain==4 ||str[i]==NULL)
      {    /*for(int i=0;i<4;i++)
          {
              cout<<tempmain[i];
              if (i==3)
                  cout<<endl;
          }*/
          countmain=0;

          if(tempmain[0]=='0' && tempmain[1]=='0' && tempmain[2]=='0' && tempmain[3]=='0')
          {
              k[countfork]='0';
              countfork++;
           }
          if(tempmain[0]=='0' && tempmain[1]=='0' && tempmain[2]=='0' && tempmain[3]=='1')
          {
              k[countfork]='1';
              countfork++;
           }
          if(tempmain[0]=='0' && tempmain[1]=='0' && tempmain[2]=='1' && tempmain[3]=='0')
          {
              k[countfork]='2';
              countfork++;
           }
          if(tempmain[0]=='0' && tempmain[1]=='0' && tempmain[2]=='1' && tempmain[3]=='1')
          {
              k[countfork]='3';
              countfork++;
           }
          if(tempmain[0]=='0' && tempmain[1]=='1' && tempmain[2]=='0' && tempmain[3]=='0')
          {
              k[countfork]='4';
              countfork++;
           }
          if(tempmain[0]=='0' && tempmain[1]=='1' && tempmain[2]=='0' && tempmain[3]=='1')
          {
              k[countfork]='5';
              countfork++;
           }

          if(tempmain[0]=='0' && tempmain[1]=='1' && tempmain[2]=='1' && tempmain[3]=='0')
          {
              k[countfork]='6';
              countfork++;
           }
          if(tempmain[0]=='0' && tempmain[1]=='1' && tempmain[2]=='1' && tempmain[3]=='1')
          {
              k[countfork]='7';
              countfork++;
           }
          if(tempmain[0]=='1' && tempmain[1]=='0' && tempmain[2]=='0' && tempmain[3]=='0')
          {
              k[countfork]='8';
              countfork++;
           }
          if(tempmain[0]=='1' && tempmain[1]=='0' && tempmain[2]=='0' && tempmain[3]=='1')
          {
              k[countfork]='9';
              countfork++;
           }
          if(tempmain[0]=='1' && tempmain[1]=='0' && tempmain[2]=='1' && tempmain[3]=='0')
          {
              k[countfork]='A';
              countfork++;
           }
          if(tempmain[0]=='1' && tempmain[1]=='0' && tempmain[2]=='1' && tempmain[3]=='1')
          {
              k[countfork]='B';
              countfork++;
           }
          if(tempmain[0]=='1' && tempmain[1]=='1' && tempmain[2]=='0' && tempmain[3]=='0')
          {
              k[countfork]='C';
              countfork++;
           }
          if(tempmain[0]=='1' && tempmain[1]=='1' && tempmain[2]=='0' && tempmain[3]=='1')
          {
              k[countfork]='D';
              countfork++;
           }
          if(tempmain[0]=='1' && tempmain[1]=='1' && tempmain[2]=='1' && tempmain[3]=='0')
          {
              k[countfork]='E';
              countfork++;
           }
          if(tempmain[0]=='1' && tempmain[1]=='1' && tempmain[2]=='1' && tempmain[3]=='1')
          {
              k[countfork]='F';
              countfork++;
           }
      }
  }

  if(temp[0]=='0' && temp[1]=='x' && temp[2]=='3' && temp[3]=='0')
  {
      tempmain[countmain]='0';
      countmain++;
      if(countmain==4)
      {
//              for(int i=0;i<4;i++)
//              {
//                  cout<<tempmain[i];
//                  if (i==3)
//                      cout<<endl;
//              }

          countmain=0;
          if(tempmain[0]=='0' && tempmain[1]=='0' && tempmain[2]=='0' && tempmain[3]=='0')
          {
              k[countfork]='0';
              countfork++;
           }
          if(tempmain[0]=='0' && tempmain[1]=='0' && tempmain[2]=='0' && tempmain[3]=='1')
          {
              k[countfork]='1';
              countfork++;
           }
          if(tempmain[0]=='0' && tempmain[1]=='0' && tempmain[2]=='1' && tempmain[3]=='0')
          {
              k[countfork]='2';
              countfork++;
           }
          if(tempmain[0]=='0' && tempmain[1]=='0' && tempmain[2]=='1' && tempmain[3]=='1')
          {
              k[countfork]='3';
              countfork++;
           }
          if(tempmain[0]=='0' && tempmain[1]=='1' && tempmain[2]=='0' && tempmain[3]=='0')
          {
              k[countfork]='4';
              countfork++;
           }
          if(tempmain[0]=='0' && tempmain[1]=='1' && tempmain[2]=='0' && tempmain[3]=='1')
          {
              k[countfork]='5';
              countfork++;
           }

          if(tempmain[0]=='0' && tempmain[1]=='1' && tempmain[2]=='1' && tempmain[3]=='0')
          {
              k[countfork]='6';
              countfork++;
           }
          if(tempmain[0]=='0' && tempmain[1]=='1' && tempmain[2]=='1' && tempmain[3]=='1')
          {
              k[countfork]='7';
              countfork++;
           }
          if(tempmain[0]=='1' && tempmain[1]=='0' && tempmain[2]=='0' && tempmain[3]=='0')
          {
              k[countfork]='8';
              countfork++;
           }
          if(tempmain[0]=='1' && tempmain[1]=='0' && tempmain[2]=='0' && tempmain[3]=='1')
          {
              k[countfork]='9';
              countfork++;
           }
          if(tempmain[0]=='1' && tempmain[1]=='0' && tempmain[2]=='1' && tempmain[3]=='0')
          {
              k[countfork]='A';
              countfork++;
           }
          if(tempmain[0]=='1' && tempmain[1]=='0' && tempmain[2]=='1' && tempmain[3]=='1')
          {
              k[countfork]='B';
              countfork++;
           }
          if(tempmain[0]=='1' && tempmain[1]=='1' && tempmain[2]=='0' && tempmain[3]=='0')
          {
              k[countfork]='C';
              countfork++;
           }
          if(tempmain[0]=='1' && tempmain[1]=='1' && tempmain[2]=='0' && tempmain[3]=='1')
          {
              k[countfork]='D';
              countfork++;
           }
          if(tempmain[0]=='1' && tempmain[1]=='1' && tempmain[2]=='1' && tempmain[3]=='0')
          {
              k[countfork]='E';
              countfork++;
           }
          if(tempmain[0]=='1' && tempmain[1]=='1' && tempmain[2]=='1' && tempmain[3]=='1')
          {
              k[countfork]='F';
              countfork++;
           }
      }
  }
}
}
for(int i=0;i<10;i++)
{
cout<< k[i];
}
WritetoFile3(k,"result_task3");
return k;
}
