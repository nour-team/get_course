#include <iostream>

using namespace std;

int main()
{ bool winner=false;
    cout <<"*******welcome to you in connect 4 to win game******** "<<endl;
    cout <<"we will consider the red piece for the first player is  the number one , the yellow piece for second player  is number two and  empty place as number zero "<<endl;
cout <<"let's start "<<endl;
int a[6][7]={{2,2,0,2,2,2,0},{0,0,0,0,0,0,0},{1,0,0,0,0,0,0},{0,0,0,0,0,0,0},{1,0,0,0,0,0,0},{0,0,0,0,0,1,0}};
int c=1;
    for (int i=0;i<6;i++)
    {for (int j=0;j<7;j++)
        cout <<a[i][j]<<"\t";
        cout <<endl;}
    for (int i=0;i<6;i++)
    {for (int j=0;j<7;j++)
     {for (int k=i+1;k<i+4&&winner!=true&&a[k][j]==a[k-1][j];k++)c++;
        if (c==4&&a[i][j]==1)
        {winner=true;
    cout <<"the winner is the first player";}
    c=1;
    for (int k=j+1;k<j+4&&winner!=true&&a[i][k]==a[i][k-1];k++)c++;
    if (c==4&&a[i][j]==1)
       {winner=true;
    cout <<"the winner is the first player";}
    c=1;
         for (int k=1;k<4&&winner!=true&&a[i][j]==a[i+k][j+k];k++)c++;
    if (c==4&&a[i][j]==1)
       {winner=true;
    cout <<"the winner is the first player";}
         for (int k=1;k<4&&winner!=true&&a[i][j]==a[i+k][j-k];k++)c++;
      if (c==4&&a[i][j]==1)
       {winner=true;
    cout <<"the winner is the first player";}}}
    c=1;
    for (int i=0;i<6;i++)
    {for (int j=0;j<7;j++)
     {for (int k=i+1;k<i+4&&winner!=true&&a[k][j]==a[k-1][j];k++)
       {c++;
    if (c==4&&a[i][j]==2)
       {winner=true;
    cout <<"the winner is the second player";}}
    c=1;
    for (int k=j+1;k<j+4&&winner!=true&&a[i][k]==a[i][k-1];k++)
       {c++;
    if (c==4&&a[i][j]==2)
       {winner=true;
    cout <<"the winner is the second player";}}
    c=1;
        for (int k=1;k<4&&winner!=true&&a[i][j]==a[i+k][j+k];k++)
         {c++;
    if (c==4&&a[i][j]==2)
       {winner=true;
    cout <<"the winner is the second player";}}
         for (int k=1;k<4&&winner!=true&&a[i][j]==a[i+k][j-k];k++)
       {c++;
      if (c==4&&a[i][j]==2)
      {cout <<"the winner is the second player";
       winner=true;}}}}
if (winner==false)
    cout <<"there is no winner in this game";



    return 0;
}
