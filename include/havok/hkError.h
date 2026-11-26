// hkError (Common/Base/System/Error/hkError.h) and hkDefaultError (Common/Base/System/Error/hkDefaultError.h).
// hkError is the error handler interface, 0x8 bytes: an hkReferencedObject and an hkSingleton<hkError>
// (the RTTI of hkDefaultError gives both bases). It has no vtable of its own. Its six functions are placed by
// hkDefaultError's vtable (??_7hkDefaultError@@6B@, 9 slots): message (+0xC, 82CFA1A8), setEnabled (82CFA2D0),
// isEnabled (82CFA060), enableAll (82CFA0B0), sectionBegin (82CFA338 pushes the id on m_sectionIds) and
// sectionEnd (82CFA2B8 pops it). The function names and the Message enumerators follow Havok's header; the
// values are the game's (hkBsdSocket reports errors with 3, hkpCollisionDispatcher::debugPrintTable reports
// with 0).
// The singleton instance is lbl_8323B464.
#ifndef HAVOK_HKERROR_H
#define HAVOK_HKERROR_H

#include "havok/hkBase.h"
#include "havok/hkSingleton.h"

class hkError;

extern "C" hkError *lbl_8323B464;   // hkSingleton<hkError>::s_instance

typedef void (HK_CALL *hkErrorReportFunction)(const char *s, void *errorReportObject);

class hkError : public hkReferencedObject, public hkSingleton<hkError> {
public:
    enum Message {
        MESSAGE_REPORT = 0,
        MESSAGE_WARNING = 1,
        MESSAGE_ASSERT = 2,
        MESSAGE_ERROR = 3
    };

    hkError() {}
    // Returns nonzero when the caller should break into the debugger.
    virtual int message(Message m, int id, const char *description, const char *file, int line);   // +0xC
    virtual void setEnabled(int id, hkBool enabled);                                              // +0x10
    virtual hkBool isEnabled(int id);                                                             // +0x14
    virtual void enableAll();                                                                     // +0x18
    virtual void sectionBegin(int id, const char *sectionName);                                   // +0x1C
    virtual void sectionEnd();                                                                    // +0x20
};

template <> HK_FORCE_INLINE hkError *&hkSingleton<hkError>::instanceRef() { return lbl_8323B464; }

// hkDefaultError, 0x28 bytes: the handler hkBaseSystem::init installs (82CE7B00). The constructor (82CFA3B0)
// stores the report function and object; the destructor (82CFA430) is the implicit one, out of line because the
// deleting destructor (82CFA4C0) calls it. Its overrides keep their fn_ names (see hkError); the member names
// follow Havok's header.
class hkDefaultError : public hkError {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_BASE);
    hkDefaultError(hkErrorReportFunction errorReportFunction, void *errorReportObject = HK_NULL);

    hkPointerMap<int, int> m_disabledAssertIds;   // +0x8: setEnabled, isEnabled and enableAll work on it
    hkArray<int> m_sectionIds;                    // +0x14: sectionBegin pushes, sectionEnd pops
    hkErrorReportFunction m_errorFunction;        // +0x20
    void *m_errorObject;                          // +0x24
};

#endif
