#ifndef MESSAGE_H
#define MESSAGE_H
#include<QtCore>

class Message:public QEvent
{
public:
    Message(int t=0,int st=0,int rt=0,int ri=0,int stype=0,int si=0);
    void setType(int t);
    int getType()const;
    void setSubtype(int t);
    int getSubtype()const;
    void setReceiverType(int);
    int getReceiverType()const;
    void setReceiverid(int);
    int getReceiverid()const;
    void setSenderType(int);
    int getSenderType()const;
    void setSenderid(int);
    int getSenderid()const;
    void setDetail(QString _detail);
    QString getDetail()const;
    void addArgument(int arg);
    void setArgument(QVector<int> arg);
    QVector<int> getArgument()const;
    friend QDataStream& operator <<(QDataStream &,Message &);
    friend QDataStream& operator >>(QDataStream &,Message &);
private:
    int type;
    int subtype;
    int receivertype;
    int receiverid;
    int sendertype;
    int senderid;
    QString detail;
    QVector<int> arguments;
};
Q_DECLARE_METATYPE(Message)
#endif // MESSAGE_H
