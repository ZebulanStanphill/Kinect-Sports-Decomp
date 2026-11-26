// hkEnum (Common/Base/Types/hkBaseTypes.h): an enumeration stored in an
// integer type of a chosen size.
#ifndef HAVOK_HKENUM_H
#define HAVOK_HKENUM_H

template <typename ENUM, typename STORAGE>
class hkEnum {
public:
    hkEnum() {}
    hkEnum(ENUM e) { m_storage = static_cast<STORAGE>(e); }
    operator ENUM() const { return static_cast<ENUM>(m_storage); }
    void operator=(ENUM e) { m_storage = static_cast<STORAGE>(e); }
    STORAGE m_storage;
};

#endif
