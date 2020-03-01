#define BUF_SIZE 1024
#include <iostream>
#include <assert.h>
#include<WinSock2.h>
#include <WS2tcpip.h>
#include <memory>

#include "msg.pb.h"

#define EXE_FAIL -1
#define EXE_SUCCESS 0

using namespace std;
#pragma comment(lib, "WS2_32.lib")

inline int TransByteOrder(void *inoutData, const int length)
{
	assert(sizeof(int) == sizeof(u_long));
	if (NULL == inoutData)
	{
		return EXE_FAIL;
	}
	if (length < 0)
	{
		return EXE_FAIL;
	}
	if (length % 4 != 0)
	{
		assert(0);
		return EXE_FAIL;
	}
	std::unique_ptr<char[]> buffer(new char[length]);
	memcpy(buffer.get(), inoutData, length);
	int *pData = (int*)buffer.get();
	int dataLen = length >> 2;
	int *pInOutData = (int*)inoutData;
	for (int i = 0; i < dataLen; ++i)
	{
		pInOutData[i] = htonl(pData[i]);
	}
	//
	return EXE_SUCCESS;
}

void sendHello(SOCKET sSocket)
{
	struct Data{
		int len;
		char buf[128];
	};
	Data data;
	char buf2[] = "hello";
	strcpy(data.buf, buf2);
	data.len = sizeof(data.buf);
    //
	data.len = htonl(data.len);

    //
	int bytes = send(sSocket, (const char*)&data, sizeof(data), 0);
	if (SOCKET_ERROR == bytes){
		printf("send failed");
	}
}

void sendHelloWorld(SOCKET sSocket)
{
	struct Data{
		int len;
		char buf[512];
	};
	Data data;
	char buf2[] = "helloworldhelloworldhelloworldhelloworldhelloworldhelloworldhelloworldhelloworldhelloworldhelloworldhelloworldhelloworldhelloworldhelloworldhelloworldhelloworldhelloworldhelloworldhelloworldhelloworld";
	strcpy(data.buf, buf2);
	data.len = sizeof(data.buf);
	//
	data.len = htonl(data.len);

	//
	int bytes = send(sSocket, (const char*)&data, sizeof(data), 0);
	if (SOCKET_ERROR == bytes){
		printf("send failed");
	}
}

//
typedef u_long DATA_LEN_TYPE;

//
#define DATA_HEAD_LEN     sizeof(DATA_LEN_TYPE)
#define DATA_BUFSIZE      512
#define DATA_MAX_LEN       (2 * DATA_BUFSIZE)
#define DATA_RECV_BUFSIZE (DATA_MAX_LEN + DATA_HEAD_LEN)
#define TYPENAME_LEN 32

//
struct MsgHead{
	int nameLen;
	char name[TYPENAME_LEN];
	int checkSum; // a check  value of protobuf data.
};

int sendHelloProto(SOCKET sSocket)
{
	//
	const char *str = "hello";
	const int strLen = strlen(str);
	char binProto[] = "helloworld";
	const int binProtoLen = strlen(binProto);

	//
	MsgHead head;
	head.nameLen = strLen;
	strcpy(head.name, str);
	head.name[head.nameLen] = '\0';
	head.checkSum = 10;

	//
	head.nameLen = htonl(head.nameLen);
	head.checkSum = htonl(head.checkSum);

	//
	const int msgLen = sizeof(head) + binProtoLen;
	const int totalLen =  DATA_HEAD_LEN + msgLen;
	char *pdata = new char[totalLen];

	//
	const int netMsgLen = htonl(msgLen);
	memcpy(pdata, &netMsgLen, DATA_HEAD_LEN);
	memcpy(pdata + DATA_HEAD_LEN, &head, sizeof(head));
	memcpy(pdata + DATA_HEAD_LEN + sizeof(head), binProto, binProtoLen);

	//
	int bytes = send(sSocket, pdata, totalLen, 0);
	if (SOCKET_ERROR == bytes){
		printf("send failed");
	}
	//
	delete pdata;

	//
	return 0;
}

//
int sendHelloProto2(SOCKET sSocket)
{
	Protocol::Hello hello;
	hello.set_content("helloserver");
	std::string  typeName = Protocol::Hello::descriptor()->full_name();
	
	//
	std::string buffer;
	hello.SerializeToString(&buffer);

	//
	Protocol::Hello parseHello;
	parseHello.ParseFromString(buffer);
	std::cout << parseHello.GetTypeName() << " " << parseHello.content() << std::endl;

	//
	MsgHead head;
	head.nameLen = typeName.size();
	strcpy(head.name, typeName.c_str());
	head.name[head.nameLen] = '\0';
	head.checkSum = 10;

	//
	head.nameLen = htonl(head.nameLen);
	head.checkSum = htonl(head.checkSum);

	//
	const int msgLen = sizeof(head) + buffer.size();
	const int totalLen = DATA_HEAD_LEN + msgLen;
	char *pdata = new char[totalLen];

	//
	const int netMsgLen = htonl(msgLen);
	memcpy(pdata, &netMsgLen, DATA_HEAD_LEN);
	memcpy(pdata + DATA_HEAD_LEN, &head, sizeof(head));
	memcpy(pdata + DATA_HEAD_LEN + sizeof(head), buffer.c_str(), buffer.size());

	//
	int bytes = send(sSocket, pdata, totalLen, 0);
	if (SOCKET_ERROR == bytes){
		printf("send failed");
	}
	//
	delete pdata;

	//
	return 0;
}

//
int sendGetNameProto(SOCKET sSocket)
{
	Protocol::GetName hello;
	hello.set_userid(10);
	hello.set_sex(122);
	std::string  typeName = Protocol::GetName::descriptor()->full_name();

	//
	std::string buffer;
	hello.SerializeToString(&buffer);

	//
	MsgHead head;
	head.nameLen = typeName.size();
	strcpy(head.name, typeName.c_str());
	head.name[head.nameLen] = '\0';
	head.checkSum = 111;

	//
	head.nameLen = htonl(head.nameLen);
	head.checkSum = htonl(head.checkSum);

	//
	const int msgLen = sizeof(head) + buffer.size();
	const int totalLen = DATA_HEAD_LEN + msgLen;
	char *pdata = new char[totalLen];

	//
	const int netMsgLen = htonl(msgLen);
	memcpy(pdata, &netMsgLen, DATA_HEAD_LEN);
	memcpy(pdata + DATA_HEAD_LEN, &head, sizeof(head));
	memcpy(pdata + DATA_HEAD_LEN + sizeof(head), buffer.c_str(), buffer.size());

	//
	int bytes = send(sSocket, pdata, totalLen, 0);
	if (SOCKET_ERROR == bytes){
		printf("send failed");
	}
	//
	delete pdata;

	//
	return 0;
}

int main()
{
	//
	WSADATA wsd;
	SOCKET sSocket;
	SOCKADDR_IN servAddr;
	char buf[BUF_SIZE];
	int retVal;
	//初始化套接字动态库
	if (WSAStartup(MAKEWORD(2, 2), &wsd) != 0)
	{
		printf("WSAStartup failed\n");
		return -1;
	}
	//创建套接字
	sSocket = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
	if (INVALID_SOCKET == sSocket){
		printf("socker failed\n");
		WSACleanup();
		return -1;
	}
	//设置服务器地址
	servAddr.sin_family = AF_INET;
	servAddr.sin_addr.s_addr = inet_addr("127.0.0.1");
	servAddr.sin_port = htons((short)27015);
	int nServAddrLen = sizeof(servAddr);
	//连接服务器
	retVal = connect(sSocket, (LPSOCKADDR)&servAddr, nServAddrLen);
	if (SOCKET_ERROR == retVal){
		printf("connect failed\n");
		closesocket(sSocket);
		WSACleanup();//释放套接字资源
		return -1;
	}
	{
		/*
		//
		ZeroMemory(buf, BUF_SIZE);
		sprintf(buf, "%d,hello", 128);
		retVal = send(sSocket, buf, BUF_SIZE, 0);
		if (SOCKET_ERROR == retVal){
		printf("send failed");
		}
		printf("send %d bytes.\n", retVal);

		//发送数据
		for (int i = 0; i < 1; ++i)
		{
		ZeroMemory(buf, BUF_SIZE);
		//sprintf(buf, "hello server %d", i);
		//retVal = send(sSocket, buf, BUF_SIZE, 0);
		int val = 128;
		retVal = send(sSocket, (const char*)&val, sizeof(int), 0);
		if (SOCKET_ERROR == retVal){
		printf("send failed");
		}
		printf("send %d bytes.\n", retVal);

		//
		ZeroMemory(buf, BUF_SIZE);
		int ret = recv(sSocket, buf, BUF_SIZE, 0);
		printf("ret = %d.\n", ret);
		printf("recv data: %s\n", buf);
		}
		*/
	}
	//
	{
		//
		//for (int i = 0; i < 10; ++i)
		//{
		//	sendHello(sSocket);
		//	sendHelloWorld(sSocket);
		//}
	}

	//
	//sendHelloProto(sSocket);
	sendHelloProto2(sSocket);
	sendGetNameProto(sSocket);

	//
	ZeroMemory(buf, BUF_SIZE);
	int ret = recv(sSocket, buf, BUF_SIZE, 0);
	printf("ret = %d.\n", ret);
	printf("recv data: %s\n", buf);

	//
	closesocket(sSocket);
	//
	WSACleanup();//释放套接字资源

	return 0;
}