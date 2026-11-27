// hkDefaultError::message (Common/Base/System/Error/hkDefaultError.cpp; vtable slot +0xC): an id of -1 takes the
// innermost section's id; a disabled id prints nothing. The message type gives the label and whether a stack
// trace follows (asserts and errors), and asserts and errors ask the caller to break.
#include "havok/hkBase.h"
#include "havok/hkError.h"

extern "C" {
extern const char lbl_82196582[];   // ""
void fn_82CFA0B8(hkDefaultError *self, const char *what, int id, const char *description, const char *file, int line,
                 hkBool stackTrace);   // hkDefaultError::showMessage
}

// hkArray::back(), which hkArray.h does not declare.
static HK_FORCE_INLINE int back_82CFA1A8(const hkArray<int> &a) { return a.m_data[a.m_size - 1]; }

int hkDefaultError::message(Message msg, int id, const char *description, const char *file, int line)
{
    if (id == -1 && m_sectionIds.getSize())
        id = back_82CFA1A8(m_sectionIds);
    if (!isEnabled(id))
        return 0;
    const char *what = lbl_82196582;
    hkBool stackTrace = false;
    switch (msg) {
    case MESSAGE_REPORT:
        what = "Report";
        break;
    case MESSAGE_WARNING:
        what = "Warning";
        break;
    case MESSAGE_ASSERT:
        what = "Assert";
        stackTrace = true;
        break;
    case MESSAGE_ERROR:
        what = "Error";
        stackTrace = true;
        break;
    }
    fn_82CFA0B8(this, what, id, description, file, line, stackTrace);
    return msg == MESSAGE_ASSERT || msg == MESSAGE_ERROR;
}
