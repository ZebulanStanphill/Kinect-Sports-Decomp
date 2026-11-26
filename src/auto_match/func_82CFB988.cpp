// hkSocket::hkSocket() (Common/Base/System/Io/Socket/hkSocket.cpp).
#include "havok/hkBase.h"
#include "havok/hkSocket.h"

extern "C" {
extern hkBool lbl_8323B4D8;           // hkSocket::s_platformNetInitialized (Havok's names)
extern void (*lbl_8317F60C)(void);    // hkSocket::s_platformNetInit
}

hkSocket::hkSocket()
{
    m_reader.m_socket = this;
    m_writer.m_socket = this;
    if (!lbl_8323B4D8 && lbl_8317F60C) {
        lbl_8317F60C();
        lbl_8323B4D8 = true;
    }
}
