#include "server.h"

#include <QObject>

Server::Server()
{

}

Server::~Server()
{

}

void Server::initSocket()
{
    qDebug() << "C++ Style Debug Message";

    udpSocket = new QUdpSocket(this);
    udpSocket->bind(QHostAddress::LocalHost, 7755);

    connect(udpSocket, SIGNAL(readyRead()), this, SLOT(readPendingDatagrams()));
}

void Server::readPendingDatagrams()
{
    qDebug() << "data coming in";

    while (udpSocket->hasPendingDatagrams()) {
        QByteArray datagram;
        datagram.resize(udpSocket->pendingDatagramSize());
        QHostAddress sender;
        quint16 senderPort;

        udpSocket->readDatagram(datagram.data(), datagram.size(),
                                &sender, &senderPort);

        qDebug() << "C++ Style Debug Message" << datagram.data();

//        processTheDatagram(datagram);
    }
}
