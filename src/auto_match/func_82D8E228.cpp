// hkpBroadPhaseBorder::~hkpBroadPhaseBorder (Physics/Dynamics/World/BroadPhaseBorder/hkpBroadPhaseBorder.cpp):
// releases and clears the six border phantoms; the member array and the bases are destroyed after.
#include "havok/hkpBroadPhaseBorder.h"

hkpBroadPhaseBorder::~hkpBroadPhaseBorder()
{
    hkpPhantom **p = m_phantoms;
    int n = 6;
    do {
        if (*p) {
            (*p)->removeReference();
            *p = 0;
        }
        ++p;
    } while (--n);
}
