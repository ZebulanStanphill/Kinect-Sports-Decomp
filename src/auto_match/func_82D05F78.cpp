// hkBsdSocket::pollForNewClient() (Common/Base/System/Io/Socket/Bsd/hkBsdSocket.cpp), Xbox 360 build:
// select() on the listening socket, accept(), HK_REPORT the peer, TCP_NODELAY, then
// `new hkBsdSocket(s)`. hkSocket's constructor is out of line (??0hkSocket@@QAA@XZ).
// Notes for matching:
// - FD_ZERO/FD_SET are the winsock2 macros (duplicate-check loop) and select's first argument is
//   computed before them (maxFd); with the folded stores written directly, or with
//   `m_socket + 1` inside the call, the addi moves to just before the call.
// - hkStringBuf's constructor reserves with hkArray::reserve's `(n < cap2) ? cap2 : n`.
#include "havok/hkBase.h"
typedef unsigned int SOCKET;
struct fd_set { unsigned int fd_count; SOCKET fd_array[64]; };
struct timeval { long tv_sec; long tv_usec; };
struct sockaddr_in { unsigned short sin_family, sin_port; unsigned int sin_addr; char sin_zero[8]; };
#define INVALID_SOCKET ((SOCKET)~0)
#define FD_ZERO(set) (((fd_set *)(set))->fd_count = 0)
#define FD_SET(fd, set) do { \
    unsigned int __i; \
    for (__i = 0; __i < ((fd_set *)(set))->fd_count; __i++) { \
        if (((fd_set *)(set))->fd_array[__i] == (fd)) { \
            break; \
        } \
    } \
    if (__i == ((fd_set *)(set))->fd_count) { \
        if (((fd_set *)(set))->fd_count < 64) { \
            ((fd_set *)(set))->fd_array[__i] = (fd); \
            ((fd_set *)(set))->fd_count++; \
        } \
    } \
} while (0)

class hkError {
public:
    virtual void v0(); virtual void v1(); virtual void v2();
    virtual void message(int type, int id, const char *description, const char *file, int line);
};
struct hkErrStream { char m_data[12]; };   // hkOstream over a char buffer; fn_ ctor/dtor
extern "C" {
int fn_82CE09D0(int nfds, fd_set *readfds, fd_set *writefds, fd_set *exceptfds, const timeval *timeout);   // select
int fn_82CE0BE8(SOCKET s, fd_set *set);                                  // __WSAFDIsSet
SOCKET fn_82CE09B8(SOCKET s, sockaddr_in *addr, int *addrlen);           // accept
int fn_82CE0908(SOCKET s, int level, int optname, const char *optval, int optlen);   // setsockopt
void fn_82CE6310(hkMemoryAllocator *alloc, void *array, int numElem, int sizeElem);   // hkArrayUtil::_reserve
void fn_82D04B90(void *str, const char *fmt, ...);                       // hkStringBuf::printf
void fn_82CEE578(hkErrStream *s, void *buf, int bufSize);                // hkErrStream::hkErrStream
void fn_82CEE238(hkErrStream *s, void *str);                             // operator<<(hkStringBuf)
void fn_82CED958(hkErrStream *s);                                        // ~hkErrStream
extern hkError *lbl_8323B464;                                            // hkError singleton
}

// hkStringBuf: an hkInplaceArray<char, 32> on the temp allocator, holding "".
struct hkStringBuf {
    char *m_data; int m_size; int m_capacityAndFlags; char m_storage[32];
    HK_FORCE_INLINE hkStringBuf() : m_data(m_storage), m_size(0), m_capacityAndFlags(0x80000020)
    {
        hkMemoryAllocator &a = hkMemoryRouter::getInstance().temp();
        int capacity = m_capacityAndFlags & 0x3fffffff;
        if (capacity < 1) {
            int cap2 = 2 * capacity;
            fn_82CE6310(&a, this, (1 < cap2) ? cap2 : 1, 1);
        }
        m_size = 1;
        m_data[0] = 0;
        m_data[0] = 0;
    }
    HK_FORCE_INLINE ~hkStringBuf()
    {
        hkMemoryAllocator &a = hkMemoryRouter::getInstance().temp();
        m_size = 0;
        if ((m_capacityAndFlags & (int)0x80000000) == 0) a.bufFree(m_data, m_capacityAndFlags & 0x3fffffff, 1);
    }
};

class hkSocket : public hkReferencedObject { public: hkSocket(); char m_pad[0x18]; };
class hkBsdSocket : public hkSocket {
public:
    HK_FORCE_INLINE hkBsdSocket(SOCKET s) : m_socket(s) {}
    SOCKET m_socket;
};

extern "C" hkSocket *fn_82D05F78(hkBsdSocket *self)
{
    if (self->m_socket != INVALID_SOCKET) {
        int maxFd = (int)self->m_socket + 1;
        fd_set readFds;
        FD_ZERO(&readFds);
        FD_SET(self->m_socket, &readFds);
        fd_set exceptFds;
        FD_ZERO(&exceptFds);
        FD_SET(self->m_socket, &exceptFds);
        timeval t; t.tv_sec = 0; t.tv_usec = 0;
        if (fn_82CE09D0(maxFd, &readFds, 0, &exceptFds, &t) > 0 && fn_82CE0BE8(self->m_socket, &readFds)) {
            sockaddr_in from;
            int fromlen = sizeof(from);
            SOCKET s = fn_82CE09B8(self->m_socket, &from, &fromlen);
            hkStringBuf str;
            fn_82D04B90(&str, "Socket got connection from [%lx:%d]\n", from.sin_addr, from.sin_port);
            char reportBuf[512];
            hkErrStream ostr;
            fn_82CEE578(&ostr, reportBuf, sizeof(reportBuf));
            fn_82CEE238(&ostr, &str);
            lbl_8323B464->message(0, -1, reportBuf, ".\\System\\Io\\Socket\\Bsd\\hkBsdSocket.cpp", 0x193);
            fn_82CED958(&ostr);
            if (s == INVALID_SOCKET) return 0;
            int flag = 1;
            fn_82CE0908(s, 6, 1, (char *)&flag, sizeof(int));
            return new hkBsdSocket(s);
        }
    }
    return 0;
}
