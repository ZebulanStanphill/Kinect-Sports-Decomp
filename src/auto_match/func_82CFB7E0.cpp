// hkSocket::ReaderAdapter::read (vtable slot +0x10): reads from the socket until nbytes have arrived or a read
// returns nothing.
#include "havok/hkBase.h"
#include "havok/hkSocket.h"

int hkSocket::ReaderAdapter::read(void *buf, int nbytes)
{
    int nread = 0;
    while (nread < nbytes) {
        int n = m_socket->read(static_cast<char *>(buf) + nread, nbytes - nread);
        nread += n;
        if (n == 0)
            return nread;
    }
    return nbytes;
}
