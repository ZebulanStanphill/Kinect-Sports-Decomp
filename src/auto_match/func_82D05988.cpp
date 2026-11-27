// hkBsdSocket::read (vtable slot +0x14): recv from an open socket; a failed or empty read closes it and returns 0.
#include "havok/hkBase.h"
#include "havok/hkBsdSocket.h"

extern "C" int recv(int s, void *buf, int len, int flags);

int hkBsdSocket::read(void *buf, int nbytes)
{
    if (m_socket != -1) {
        int n = recv(m_socket, buf, nbytes, 0);
        if (n > 0 && n != -1)
            return n;
        close();
    }
    return 0;
}
