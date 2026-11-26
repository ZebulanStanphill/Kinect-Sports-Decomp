// hkStringPtr::operator=(const char *) (Common/Base/Container/StringPtr/hkStringPtr.cpp): frees an owned
// copy, then keeps a heap copy of the new string (flagged owned) or the default pointer for null.
#include "havok/hkStringPtr.h"
#include "havok/hkMemoryRouter.h"

extern "C" {
extern const char *lbl_8323B430;
char *fn_82CED330(const char *s);   // copies the string on the heap
}

hkStringPtr &hkStringPtr::operator=(const char *string)
{
    if (cString() != string) {
        if ((hkUlong(m_stringAndFlag) & OWNED_FLAG) == OWNED_FLAG) {
            hkDeallocate<char>(const_cast<char *>(m_stringAndFlag - 1));
        }
        if (string != HK_NULL) {
            m_stringAndFlag = fn_82CED330(string) + 1;
        } else {
            m_stringAndFlag = lbl_8323B430;
        }
    }
    return *this;
}
