// hkPackfileReader::hkPackfileReader() (hkPackfileReader.cpp).
// hkPackfileReader (Common/Serialize/Packfile/hkPackfileReader.h, 0x18 bytes).
// m_contentsVersion is returned by getContentsVersion (fn_82E12A00) and
// replaced by setContentsVersion (fn_82E12CC8: easyFree, then hkString::strDup);
// the user-written destructor (fn_82E12A48) frees it before the map.
#include "havok/hkBase.h"

class hkPackfileReader : public hkReferencedObject {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_SERIALIZE);
    hkPackfileReader();
    virtual ~hkPackfileReader();

    hkPointerMap<const hkClass *, hkInt32> m_updateFlagFromClass;   // +0x8
    char *m_contentsVersion;                                       // +0x14
};

hkPackfileReader::hkPackfileReader() : m_contentsVersion(HK_NULL) {}
