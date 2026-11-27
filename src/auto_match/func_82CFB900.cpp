// hkSocket::WriterAdapter::isOk (vtable slot +0xC): asks the socket.
#include "havok/hkBase.h"
#include "havok/hkSocket.h"

hkBool hkSocket::WriterAdapter::isOk() const { return m_socket->isOk(); }
