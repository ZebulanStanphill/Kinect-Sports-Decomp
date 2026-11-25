#ifndef HAVOK_HKMATRIX4_H
#define HAVOK_HKMATRIX4_H

#include "havok/hkVector4.h"

// Four columns, at offsets 0x00, 0x10, 0x20 and 0x30.
class hkMatrix4 {
public:
    hkVector4 m_col0, m_col1, m_col2, m_col3;
};

#endif
