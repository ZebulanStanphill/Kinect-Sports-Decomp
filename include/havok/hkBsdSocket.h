// hkBsdSocket (Common/Base/System/Io/Socket/Bsd/hkBsdSocket.h), 0x24 bytes: an hkSocket over a winsock
// handle (+0x20, -1 when there is none).
// The constructor (82D05D28, ??0hkBsdSocket@@QAA@H@Z) calls hkSocket's, stores the handle and, when it is -1,
// closes (through the vtable) and opens a new TCP socket (createSocket). The destructor (82D05B70) closes the socket; close
// is expanded inline there, so the destructor units declare the class themselves.
// The overrides (see hkSocket.h for the slots): isOk 82D058C8, close 82D058E8, read
// 82D05988, write 82D059F0, connect 82D05BD0, listen 82D05DA0, the seventh slot 82D05A78 (returns 1; its name is not known, so it keeps its fn_ name) and
// pollForNewClient 82D05F78.
#ifndef HAVOK_HKBSDSOCKET_H
#define HAVOK_HKBSDSOCKET_H

#include "havok/hkSocket.h"

extern "C" int socket(int af, int type, int protocol);

class hkBsdSocket : public hkSocket {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_BASE);
    hkBsdSocket(int s = -1);
    virtual ~hkBsdSocket();
    virtual hkBool isOk() const;
    virtual void close();
    virtual int read(void *buf, int nbytes);
    virtual int write(const void *buf, int nbytes);
    virtual hkResult connect(const char *servername, int portNumber);
    virtual hkResult listen(int port);
    virtual int slot24();
    virtual hkSocket *pollForNewClient();

    // Inline in the game: the constructor closes and opens the socket itself.
    HK_FORCE_INLINE void createSocket()
    {
        close();
        m_socket = socket(2, 1, 0);   // AF_INET, SOCK_STREAM
    }

    int m_socket;   // +0x20
};

#endif
