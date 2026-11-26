// hkBsdSocket::hkBsdSocket(SOCKET s) (Common/Base/System/Io/Socket/Bsd/hkBsdSocket.cpp):
// the out-of-line hkSocket constructor (fn_82CFB988), then the socket handle;
// an invalid handle creates a new TCP socket (close(), then socket(AF_INET,
// SOCK_STREAM, 0), socket).
#include "havok/hkBase.h"
#include "havok/hkBsdSocket.h"

hkBsdSocket::hkBsdSocket(int s) : m_socket(s)
{
    if (m_socket == -1)
        createSocket();
}
