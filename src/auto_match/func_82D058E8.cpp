// hkBsdSocket::close (vtable slot +0x10): closes an open socket and marks it closed.
#include "havok/hkBase.h"
#include "havok/hkBsdSocket.h"

extern "C" void closesocket(int s);

void hkBsdSocket::close()
{
    if (m_socket != -1) {
        closesocket(m_socket);
        m_socket = -1;
    }
}
