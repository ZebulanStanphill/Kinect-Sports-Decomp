// hkStringBuf (Common/Base/Container/String/hkStringBuf.h), 0x2C bytes: a string builder over an
// hkInplaceArray<char, 32> on the temp allocator that always holds the terminating zero.
// The (s0 .. s5) constructor is out of line (82D05288: it appends the zero and joins the strings through
// appendJoin, fn_82D04CD0). The default constructor and the destructor are out of line under fn_ names
// (fn_82CE7EE0, fn_82CE7E68; hkNativeFileSystem::openReader, 82CE7F80, calls them) but hkBsdSocket's
// pollForNewClient (82D05F78) expands them, so they are inline here: the default constructor reserves one
// character, sets the size to one and stores the zero twice (82CE7EE0 expands it, 82D05F78); the destructor is
// hkArray's, through the temp allocator.
#ifndef HAVOK_HKSTRINGBUF_H
#define HAVOK_HKSTRINGBUF_H

#include "havok/hkBase.h"

class hkStringBuf {
public:
    HK_FORCE_INLINE hkStringBuf()
    {
        m_string.reserve(1);
        m_string.setSizeUnchecked(1);
        m_string[0] = 0;
        m_string[0] = 0;
    }
    hkStringBuf(const char *s0, const char *s1 = HK_NULL, const char *s2 = HK_NULL, const char *s3 = HK_NULL,
                const char *s4 = HK_NULL, const char *s5 = HK_NULL);

    hkInplaceArray<char, 32, hkContainerTempAllocator> m_string;   // +0x0
};

#endif
