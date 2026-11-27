// hkBsdSocket scalar deleting destructor, generated from the destructor below.
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
