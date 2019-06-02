#ifndef _DIC_CLIENT_H_
#define _DIC_CLIENT_H_

#include <muduo/base/Mutex.h>
#include <muduo/net/TcpClient.h>

#include <boost/noncopyable.hpp>

#include "codec.h"

using namespace muduo;
using namespace muduo::net;

class EventLoop;
class InetAddress;

class Client : boost::noncopyable
{
public:
  Client(EventLoop* loop, const InetAddress& serverAddr);
  ~Client();

  void connect()
  {
    client_.connect();
  }

  void disconnect()
  {
    // client_.disconnect();
  }

  // �ú��������߳���ִ��
  void write(const StringPiece& message);
  void onHighWaterMark();
  void onWriteComplete();
 private:
  // �ú�����IO�߳���ִ�У�IO�߳������̲߳���ͬһ���߳�
  void onConnection(const TcpConnectionPtr& conn);
  //TODO debug
  void onStringMessage(const TcpConnectionPtr&,
                       const string& message,
                       Timestamp);

private:
  EventLoop* loop_;
  TcpClient client_;
  LengthHeaderCodec codec_;
  MutexLock mutex_;
  TcpConnectionPtr connection_;
};

#endif //_DIC_CLIENT_H_
