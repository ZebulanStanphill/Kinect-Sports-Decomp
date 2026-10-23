// hkString (Common/Base/Container/String/hkString.h): only the static memory
// helpers, which are out of line in the game and keep their fn_ names
// (Matching C units call fn_82CFC050).
#ifndef HAVOK_HKSTRING_H
#define HAVOK_HKSTRING_H
#include "havok/hkBaseTypes.h"

extern "C" {
void fn_82CFC050(void *dst, const void *src, int n);   // hkString::memCpy
void fn_82CFC060(void *dst, int c, int n);              // hkString::memSet
}

class hkString {
public:
    static HK_FORCE_INLINE void HK_CALL memCpy(void *dst, const void *src, int n) { fn_82CFC050(dst, src, n); }
    static HK_FORCE_INLINE void HK_CALL memSet(void *dst, int c, int n) { fn_82CFC060(dst, c, n); }
};

#endif
