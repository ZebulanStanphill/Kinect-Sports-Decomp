// hkBsdSocket::isOk (Common/Base/System/Io/Socket/Bsd/hkBsdSocket.cpp; vtable slot +0xC): the socket is open.
#include "havok/hkBase.h"
#include "havok/hkBsdSocket.h"

hkBool hkBsdSocket::isOk() const { return (unsigned int)m_socket != 0xFFFFFFFFu; }   // INVALID_SOCKET (an unsigned SOCKET)
