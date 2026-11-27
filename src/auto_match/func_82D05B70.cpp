// hkBsdSocket::~hkBsdSocket (Common/Base/System/Io/Socket/Bsd/hkBsdSocket.cpp).
#include "havok/hkBsdSocket.h"

extern "C" int closesocket(int s);

// close is expanded inline in the destructor (see hkBsdSocket.h); it is defined here for that.
inline void hkBsdSocket::close()
{
    if (m_socket != -1) {
        closesocket(m_socket);
        m_socket = -1;
    }
}

hkBsdSocket::~hkBsdSocket()
{
    close();
}
