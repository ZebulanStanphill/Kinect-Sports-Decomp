// hkBsdSocket::connect(const char *servername, int port) (Common/Base/System/Io/Socket/Bsd/hkBsdSocket.cpp),
// Xbox 360 build: only numeric addresses are accepted; a host name raises an error report.
#include "havok/hkBase.h"

struct sockaddr_in {
    unsigned short sin_family; /* 0x0 */
    unsigned short sin_port;   /* 0x2 */
    unsigned int sin_addr;     /* 0x4 */
    char sin_zero[8];          /* 0x8 */
};

class hkError
{
  public:
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual int message(int type, int id, const char *description, const char *file, int line);
};

struct hkErrStream {
    char m_data[12];
};

extern "C" {
void fn_82CFC060(void *dst, int value, int size);             // hkString::memSet
unsigned int fn_82CE0BA8(const char *cp);                     // inet_addr
int fn_82CE08B8(int af, int type, int protocol);              // socket
int fn_82CE0990(int s, const sockaddr_in *name, int namelen); // connect
void fn_82CEE578(hkErrStream *s, void *buf, int bufSize);     // hkErrStream::hkErrStream
void fn_82CEDB38(hkErrStream *s, const char *str);            // operator<<(const char *)
void fn_82CED958(hkErrStream *s);                             // ~hkErrStream
extern hkError *lbl_8323B464;                                 // hkError singleton
}

class hkBsdSocket : public hkReferencedObject
{
  public:
    virtual hkBool isOk() const;
    virtual void close();

    char m_pad[0x18];
    int m_socket; // +0x20
};

static HK_FORCE_INLINE hkBool isDigit(int c)
{
    return c >= '0' && c <= '9';
}

extern "C" int fn_82D05BD0(hkBsdSocket *self, const char *servername, int port)
{
    sockaddr_in server;
    fn_82CFC060(&server, 0, sizeof(server));
    server.sin_family = 2; // AF_INET
    server.sin_port = (unsigned short)port;
    if (isDigit(servername[0])) {
        server.sin_addr = fn_82CE0BA8(servername);
    } else {
        char buf[512];
        hkErrStream os;
        fn_82CEE578(&os, buf, sizeof(buf));
        fn_82CEDB38(&os, "Hostname lookup not supported on xbox");
        if (lbl_8323B464->message(3, 0x2a9c1ba2, buf, ".\\System\\Io\\Socket\\Bsd\\hkBsdSocket.cpp", 0xc3)) {
            __debugbreak();
        }
        fn_82CED958(&os);
    }
    if (self->m_socket == -1) {
        self->close();
        self->m_socket = fn_82CE08B8(2, 1, 0);
        if (self->m_socket == -1) {
            return 1;
        }
    }
    if (fn_82CE0990(self->m_socket, &server, sizeof(server)) == -1) {
        self->close();
        return 1;
    }
    return 0;
}
