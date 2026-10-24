// hkFlags (Common/Base/Types/hkBaseTypes.h): a bit set stored as STORAGE and
// typed by its enum of bit values. A class, so it is passed by value through
// a stack temporary (hkObjectCopier's constructor, fn_82E17F40).
#ifndef HAVOK_HKFLAGS_H
#define HAVOK_HKFLAGS_H
#include "havok/hkBaseTypes.h"

template <typename BITS, typename STORAGE>
class hkFlags {
public:
    HK_FORCE_INLINE hkFlags() {}
    HK_FORCE_INLINE hkFlags(STORAGE s) : m_storage(s) {}
    HK_FORCE_INLINE void clear() { m_storage = 0; }
    HK_FORCE_INLINE void setAll(STORAGE s) { m_storage = s; }
    HK_FORCE_INLINE void orWith(STORAGE s) { m_storage |= s; }
    HK_FORCE_INLINE void andWith(STORAGE s) { m_storage &= s; }
    HK_FORCE_INLINE STORAGE get() const { return m_storage; }
    HK_FORCE_INLINE STORAGE get(STORAGE mask) const { return m_storage & mask; }
    HK_FORCE_INLINE bool anyIsSet(STORAGE mask) const { return (m_storage & mask) != 0; }
    HK_FORCE_INLINE bool allAreSet(STORAGE mask) const { return (m_storage & mask) == mask; }

private:
    STORAGE m_storage;
};

#endif
