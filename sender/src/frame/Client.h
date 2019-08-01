#ifndef _DIC_CLIENT_H_
#define _DIC_CLIENT_H_

#include <muduo/base/Mutex.h>
#include <muduo/net/TcpClient.h>

#include <boost/noncopyable.hpp>

#include "codec.h"

using namespace muduo;
using namespace muduo::net;

class Client : boost::noncopyable
{
  using DataCallback = std::function(muduo::StringPiece message ());
public:
  Client(EventLoop* loop, const InetAddress& serverAddr);
  ~Client() = default;

  void connect()
  {
    client_.connect();
  }

  void disconnect()
  {
    client_.disconnect();
  }

  // �ú��������߳���ִ��
  void OnHighWaterMark();
  void OnWriteComplete();
  void SetDataCallback(const DataCallback& cb) 
  { dataCallback_ = cb; }
 private:
  // �ú�����IO�߳���ִ�У�IO�߳������̲߳���ͬһ���߳�
  void OnConnection(const TcpConnectionPtr& conn);
  //TODO debug == recv
  void OnStringMessage(const TcpConnectionPtr&,
                       const string& message,
                       Timestamp);
  void Send();
private:
  EventLoop* loop_;
  TcpClient client_;
  LengthHeaderCodec codec_;
  TcpConnectionPtr connection_;
  DataCallback dataCallback_;
};

#endif //_DIC_CLIENT_H_
