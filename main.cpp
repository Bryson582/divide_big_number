#include <iostream>
#include <cstdio>
#include <cstring>
#define max 1000
using namespace std;
int main()
{
    int a[max],c[max],i,x,k,lena,lenc;
    char a1[max];
//   此处的除法是使用数组除数，被除数使用数组，除数是10位以内的数。
//   将整型数组全部清空
    memset(a,0,sizeof(a));
    memset(c,0,sizeof(c));
//  从键盘输入两个字符数组
    gets(a1);
    cin>>k;
//   求字符数组的长度
    lena = strlen(a1);
//   字符数组转换为整型数组
    for (i=0;i<lena;i++)
        a[i] = a1[i] - '0';
    x=0;
//    处理部分
    for (i=0;i<lena;i++)
    {
        c[i] = (a[i]+10*x)/k;
        x = (a[i]+10*x)%k;
    }
    lenc = 0;
    while (c[lenc]==0&&lenc<lena)
    lenc++;
    for (i=lenc;i<lena;i++)
        cout<<c[i];
}
