// hkBsdSocket::~hkBsdSocket (Common/Base/System/Io/Socket/Bsd/hkBsdSocket.cpp).
#include "havok/hkBase.h"
#include "havok/hkSocket.h"

extern "C" int closesocket(int s);

class hkBsdSocket : public hkSocket {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_BASE);
    hkBsdSocket() {}
    virtual ~hkBsdSocket();
    void close()
    {
        if (m_socket != -1) {
            closesocket(m_socket);
            m_socket = -1;
        }
    }

    int m_socket;   // +0x20
};

hkBsdSocket::~hkBsdSocket()
{
    close();
}
