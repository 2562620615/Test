#include<stdio.h>
#include<winsock2.h>
#pragma comment(lib,"Ws2_32.lib")

int main()
{
    //加载套接字库
    //版本号2.2
    WORD wVersionRequested=(WORD)MAKEWORD(2,2);     //第一个参数次版本 第二个参数主版本
    WSADATA wd;
    if(0!=WSAStartup(wVersionRequested,&wd))        //成功返回0
    {
        printf("初始化套接字库错误,错误代号: %d",GetLastError());
        return 0;
    }

    return 0;
}