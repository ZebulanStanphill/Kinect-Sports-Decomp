// hkSocket::ReaderAdapter::isOk (Common/Base/System/Io/Socket/hkSocket.cpp; vtable slot +0xC): asks the socket.
#include "havok/hkBase.h"
#include "havok/hkSocket.h"

hkBool hkSocket::ReaderAdapter::isOk() const { return m_socket->isOk(); }
