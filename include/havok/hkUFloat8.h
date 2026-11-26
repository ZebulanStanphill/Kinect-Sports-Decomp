// hkUFloat8 (Common/Base/Types/hkBaseTypes.h): a float kept as one byte. Reading it looks the byte
// up in a table of 256 floats (lbl_82131F88; hkpMotion's getters, 82D932A8); assigning a float is
// out of line (fn_82CE5458, which keeps its fn_ name: Matching C units call it).
#ifndef HAVOK_HKUFLOAT8_H
#define HAVOK_HKUFLOAT8_H

#include "havok/hkBaseTypes.h"

class hkUFloat8;
extern "C" const hkReal lbl_82131F88[256];                         // the value of each byte
extern "C" void fn_82CE5458(hkUFloat8 *self, const hkReal &f);     // hkUFloat8::operator=(const hkReal &)

class hkUFloat8 {
public:
    HK_FORCE_INLINE hkUFloat8() {}
    HK_FORCE_INLINE hkUFloat8(const hkReal &f) { *this = f; }
    HK_FORCE_INLINE hkUFloat8 &operator=(const hkReal &f)
    {
        fn_82CE5458(this, f);
        return *this;
    }
    HK_FORCE_INLINE operator hkReal() const { return lbl_82131F88[m_value]; }

    hkUint8 m_value;
};

#endif
