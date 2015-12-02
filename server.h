#ifndef SERVER_H
#define SERVER_H

#include <QUdpSocket>
#include <QObject>

#include "videoplayer.h"

class Server : public QObject
{
    Q_OBJECT

public:
    Server();
    ~Server();

    void Server::initSocket();

    QUdpSocket *udpSocket;

public slots:
    void readPendingDatagrams();

};

#endif // SERVER_H
