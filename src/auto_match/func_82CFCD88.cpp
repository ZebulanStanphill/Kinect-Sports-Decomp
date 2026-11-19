#include "havok/hkBase.h"

// hkStringOld: an hkArray<char> whose size counts the terminating zero.
class String_82CFCD88
{
  public:
    enum ReplaceType {
        REPLACE_ONE,
        REPLACE_ALL
    };

    HK_FORCE_INLINE String_82CFCD88(char *buffer, int size, int capacity)
    {
        m_string.m_data = buffer;
        m_string.m_size = size;
        m_string.m_capacityAndFlags = capacity;
    }

    String_82CFCD88 replace(const String_82CFCD88 &from, const String_82CFCD88 &to, ReplaceType type) const;

    hkArrayBase<char> m_string;
};

extern "C" {
hkBool fn_82CFC6A8(const char *text, const char *pattern, hkArray<int> &positions, int all);
void fn_82CFC5C0(char *out, const char *text, int length, const String_82CFCD88 &from,
                 const String_82CFCD88 &to, const hkArray<int> &positions);
void *memcpy(void *dst, const void *src, unsigned int n);
}

// hkStringOld::replace
String_82CFCD88 String_82CFCD88::replace(const String_82CFCD88 &from, const String_82CFCD88 &to,
                                         ReplaceType type) const
{
    hkArray<int> positions;
    fn_82CFC6A8(m_string.m_data, from.m_string.m_data, positions, type);
    int size = (to.m_string.m_size - from.m_string.m_size) * positions.getSize() + m_string.m_size;
    char *buffer = (char *)hkContainerHeapAllocator::get(0).blockAlloc(size);
    if (positions.getSize() != 0) {
        fn_82CFC5C0(buffer, m_string.m_data, m_string.m_size - 1, from, to, positions);
    } else {
        memcpy(buffer, m_string.m_data, m_string.m_size - 1);
    }
    buffer[size - 1] = 0;
    return String_82CFCD88(buffer, size, size);
}
