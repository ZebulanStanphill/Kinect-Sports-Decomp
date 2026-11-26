// hkBsdSocket::connect(const char *servername, int port) (Common/Base/System/Io/Socket/Bsd/hkBsdSocket.cpp),
// Xbox 360 build: only numeric addresses are accepted; a host name raises an error report.
#include "havok/hkOstream.h"
#include "havok/hkError.h"
#include "havok/hkBsdSocket.h"

struct sockaddr_in {
    unsigned short sin_family; /* 0x0 */
    unsigned short sin_port;   /* 0x2 */
    unsigned int sin_addr;     /* 0x4 */
    char sin_zero[8];          /* 0x8 */
};

struct hkErrStream {
    char m_data[12];
};

extern "C" {
unsigned int inet_addr(const char *cp);
int socket(int af, int type, int protocol);
int connect(int s, const sockaddr_in *name, int namelen);
void fn_82CEE578(hkErrStream *s, void *buf, int bufSize);     // hkErrStream::hkErrStream
}

static HK_FORCE_INLINE hkBool isDigit(int c)
{
    return c >= '0' && c <= '9';
}

extern "C" int fn_82D05BD0(hkBsdSocket *self, const char *servername, int port)
{
    sockaddr_in server;
    hkString::memSet(&server, 0, sizeof(server));
    server.sin_family = 2; // AF_INET
    server.sin_port = (unsigned short)port;
    if (isDigit(servername[0])) {
        server.sin_addr = inet_addr(servername);
    } else {
        char buf[512];
        hkErrStream os;
        fn_82CEE578(&os, buf, sizeof(buf));
        *(hkOstream *)&os << "Hostname lookup not supported on xbox";
        if (hkError::getInstance().message(hkError::MESSAGE_ERROR, 0x2a9c1ba2, buf,
                                           ".\\System\\Io\\Socket\\Bsd\\hkBsdSocket.cpp", 0xc3)) {
            __debugbreak();
        }
        ((hkOstream *)&os)->hkOstream::~hkOstream();
    }
    if (self->m_socket == -1) {
        self->close();
        self->m_socket = socket(2, 1, 0);
        if (self->m_socket == -1) {
            return 1;
        }
    }
    if (connect(self->m_socket, &server, sizeof(server)) == -1) {
        self->close();
        return 1;
    }
    return 0;
}
