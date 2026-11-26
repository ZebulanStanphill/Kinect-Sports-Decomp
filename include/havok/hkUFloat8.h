// hkUFloat8 (Common/Base/Types/hkBaseTypes.h): a float kept as one byte. Reading it looks the byte
// up in a table of 256 floats (lbl_82131F88; hkpMotion's getters, 82D932A8); assigning a float is
// out of line (82CE5458: a binary search of the table, comparing the float's bits). The reference
// return follows Havok's header; the game's code would be the same with a void return.
#ifndef HAVOK_HKUFLOAT8_H
#define HAVOK_HKUFLOAT8_H

#include "havok/hkBaseTypes.h"

extern "C" const hkReal lbl_82131F88[256];                         // the value of each byte

class hkUFloat8 {
public:
    HK_FORCE_INLINE hkUFloat8() {}
    HK_FORCE_INLINE hkUFloat8(const hkReal &f) { *this = f; }
    hkUFloat8 &operator=(const hkReal &f);
    HK_FORCE_INLINE operator hkReal() const { return lbl_82131F88[m_value]; }

    hkUint8 m_value;
};

#endif
