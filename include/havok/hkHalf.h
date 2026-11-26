// hkHalf (Common/Base/Types/hkBaseTypes.h): a float kept as its upper 16
// bits. The assignment reads the float through an int pointer.
#ifndef HAVOK_HKHALF_H
#define HAVOK_HKHALF_H

#include "havok/hkBaseTypes.h"

class hkHalf {
public:
    hkHalf &operator=(const hkReal &f)
    {
        int t = ((const int *)&f)[0];
        m_value = hkInt16(t >> 16);
        return *this;
    }
    hkInt16 m_value;
};

#endif
