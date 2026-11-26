#include "havok/hkBase.h"

// hkStringOld: an hkArray<char> whose size counts the terminating zero.
class String_82CFCD88
{
  public:
    enum ReplaceType {
        REPLACE_ONE,
        REPLACE_ALL
    };

    hkBool replaceInplace(const String_82CFCD88 &from, const String_82CFCD88 &to, ReplaceType type);

    hkArray<char> m_string;
};

extern "C" {
hkBool fn_82CFC6A8(const char *text, const char *pattern, hkArray<int> &positions, int all);
void fn_82CFC5C0(char *out, const char *text, int length, const String_82CFCD88 &from,
                 const String_82CFCD88 &to, const hkArray<int> &positions);
}

// hkStringOld::replaceInplace
hkBool String_82CFCD88::replaceInplace(const String_82CFCD88 &from, const String_82CFCD88 &to,
                                       ReplaceType type)
{
    hkInplaceArray<int, 12> positions;
    hkBool result;
    if (fn_82CFC6A8(m_string.m_data, from.m_string.m_data, positions, type)) {
        int size = (to.m_string.m_size - from.m_string.m_size) * positions.getSize() + m_string.m_size;
        char *buffer;
        if (size > m_string.m_size) {
            buffer = (char *)hkContainerHeapAllocator::get(0).blockAlloc(size);
        } else {
            buffer = m_string.m_data;
        }
        fn_82CFC5C0(buffer, m_string.m_data, m_string.m_size - 1, from, to, positions);
        buffer[size - 1] = 0;
        if (buffer != m_string.m_data) {
            m_string._clearAndDeallocate(hkContainerHeapAllocator::get(0));
            m_string.m_data = buffer;
            m_string.m_capacityAndFlags = size;
            m_string.m_size = size;
        } else {
            hkMemoryAllocator &alloc = hkContainerHeapAllocator::get(0);
            m_string._reserve(alloc, size);
            m_string.m_size = size;
        }
        result = true;
    } else {
        result = false;
    }
    return result;
}
