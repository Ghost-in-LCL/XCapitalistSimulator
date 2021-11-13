#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;
const int n=100;
int pnum,now,t,thi;
struct people
{
    int out[n][2];//0:time,1:num
    int use[n][2];//0:time,1:num
    int have[n];
    int pricer[n][1000];
    int numr[n][1000];
    int price;
    int num;
    int mon;
};
people ai[10];
void in()
{
    int i,j;
    scanf("%d%d%d",&t,&pnum,&thi);
    for(i=1;i<=pnum;i++)
    {
        for(j=1;j<=thi;j++)
        {
            scanf("%d%d",&ai[i].out[j][0],&ai[i].out[j][1]);
        }
    }
    for(i=1;i<=pnum;i++)
    {
        for(j=1;j<=thi;j++)
        {
            scanf("%d%d",&ai[i].use[j][0],&ai[i].use[j][1]);
        }
        scanf("%d",&ai[i].mon);
        memset(ai[i].have,0,sizeof(ai[i].have));
    }
}
void get()
{
    int i,j;
    for(i=1;i<=pnum;i++)
    {
        for(j=1;j<=thi;j++)
        {
            if(ai[i].out[j][0]==0)  continue;
            if(now%ai[i].out[j][0]==0)
            {
                ai[i].have[j]+=ai[i].out[j][1];
            }
        }
    }
    for(i=1;i<=pnum;i++)
    {
        for(j=1;j<=thi;j++)
        {
            if(ai[i].use[j][0]==0)  continue;
            if(now%ai[i].use[j][0]==0)
            {
                ai[i].have[j]-=ai[i].use[j][1];
            }
        }
    }
}
void make(int i,int j)
{

}
void buy()
{

}
void dingjia()
{
    int i,j;
    for(i=1;i<=pnum;i++)
    {
        for(j=1;j<=thi;j++)
        {
            make(i,j);
        }
    }
}
void jiaoyi()
{
    int i,j;
    for(i=1;i<=pnum;i++)
    {
        for(j=1;j<=thi;j++)
        {
            buy();
        }
    }
}
int main()
{
    in();
    for(now=1;now<=t;now++)
    {
        get();
        dingjia();
        jiaoyi();
    }
}