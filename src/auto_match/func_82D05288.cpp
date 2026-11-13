// hkStringBuf::hkStringBuf(const char *s0, ..., const char *s5) (Common/Base/Container/String/hkStringBuf.cpp).
#include "havok/hkBase.h"
#include "havok/hkArray.h"

class hkStringBuf;

// hkStringBuf::appendJoin; keeps its fn_ name (the Matching C unit func_82D04DF8 calls it).
extern "C" void fn_82D04CD0(hkStringBuf *self, const char *s0, const char *s1, const char *s2, const char *s3,
                            const char *s4, const char *s5);

class hkStringBuf {
public:
    hkStringBuf(const char *s0, const char *s1 = HK_NULL, const char *s2 = HK_NULL, const char *s3 = HK_NULL,
                const char *s4 = HK_NULL, const char *s5 = HK_NULL);

    hkInplaceArray<char, 32> m_string;
};

hkStringBuf::hkStringBuf(const char *s0, const char *s1, const char *s2, const char *s3, const char *s4,
                         const char *s5)
{
    m_string.m_data[m_string.m_size++] = 0;
    fn_82D04CD0(this, s0, s1, s2, s3, s4, s5);
}
