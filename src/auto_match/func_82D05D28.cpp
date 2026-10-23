// hkBsdSocket::hkBsdSocket(SOCKET s) (Common/Base/System/Io/Socket/Bsd/hkBsdSocket.cpp):
// the out-of-line hkSocket constructor (fn_82CFB988), then the socket handle;
// an invalid handle creates a new TCP socket (close(), then socket(AF_INET,
// SOCK_STREAM, 0), fn_82CE08B8).
#include "havok/hkBase.h"

extern "C" int fn_82CE08B8(int af, int type, int protocol);   // socket

class hkStreamReader : public hkReferencedObject {
public:
    virtual hkBool isOk() const;
    virtual int read(void *buf, int nbytes);
};

class hkStreamWriter : public hkReferencedObject {
public:
    virtual hkBool isOk() const;
    virtual int write(const void *buf, int nbytes);
};

// hkSocket (Common/Base/System/Io/Socket/hkSocket.h), as in func_82D05B70.cpp.
class hkSocket : public hkReferencedObject {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_BASE);
    class ReaderAdapter : public hkStreamReader {
    public:
        ReaderAdapter() {}
        virtual hkBool isOk() const;
        virtual int read(void *buf, int nbytes);
        hkSocket *m_socket;   // +0x8
    };
    class WriterAdapter : public hkStreamWriter {
    public:
        WriterAdapter() {}
        virtual hkBool isOk() const;
        virtual int write(const void *buf, int nbytes);
        hkSocket *m_socket;   // +0x8
    };
    hkSocket();   // fn_82CFB988
    virtual hkBool isOk() const = 0;   // +0xC
    virtual void close() = 0;          // +0x10

    ReaderAdapter m_reader;   // +0x8
    WriterAdapter m_writer;   // +0x14
};

class hkBsdSocket : public hkSocket {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_BASE);
    hkBsdSocket(int s);
    virtual ~hkBsdSocket();
    virtual hkBool isOk() const;
    virtual void close();

    void createSocket()
    {
        close();
        m_socket = fn_82CE08B8(2, 1, 0);   // AF_INET, SOCK_STREAM
    }

    int m_socket;   // +0x20
};

hkBsdSocket::hkBsdSocket(int s) : m_socket(s)
{
    if (m_socket == -1)
        createSocket();
}
