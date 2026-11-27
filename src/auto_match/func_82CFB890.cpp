// hkSocket::WriterAdapter::write (vtable slot +0x10): writes to the socket until nbytes are out or a write sends
// nothing.
#include "havok/hkBase.h"
#include "havok/hkSocket.h"

int hkSocket::WriterAdapter::write(const void *buf, int nbytes)
{
    int nwritten = 0;
    while (nwritten < nbytes) {
        int n = m_socket->write(static_cast<const char *>(buf) + nwritten, nbytes - nwritten);
        nwritten += n;
        if (n == 0)
            return nwritten;
    }
    return nbytes;
}
