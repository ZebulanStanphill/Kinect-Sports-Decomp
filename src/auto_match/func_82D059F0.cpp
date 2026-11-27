// hkBsdSocket::write (vtable slot +0x18): send on an open socket; a failed or empty send closes it and returns 0.
#include "havok/hkBase.h"
#include "havok/hkBsdSocket.h"

extern "C" int send(int s, const void *buf, int len, int flags);

int hkBsdSocket::write(const void *buf, int nbytes)
{
    if (m_socket != -1) {
        int n = send(m_socket, buf, nbytes, 0);
        if (n > 0 && n != -1)
            return n;
        close();
    }
    return 0;
}
