// hkDefaultError::hkDefaultError(hkErrorReportFunction, void *) (Common/Base/System/Error/hkDefaultError.cpp).
#include "havok/hkBase.h"

template <typename T>
class hkSingleton {
public:
    static T *s_instance;
};

typedef void (HK_CALL *hkErrorReportFunction)(const char *s, void *errorReportObject);

class hkError : public hkReferencedObject, public hkSingleton<hkError> {
public:
    hkError() {}
};

class hkDefaultError : public hkError {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_BASE);
    hkDefaultError(hkErrorReportFunction errorReportFunction, void *errorReportObject);

    hkPointerMap<int, int> m_disabledAssertIds;   // +0x8
    hkArray<int> m_sectionIds;                    // +0x14
    hkErrorReportFunction m_errorFunction;        // +0x20
    void *m_errorObject;                          // +0x24
};

hkDefaultError::hkDefaultError(hkErrorReportFunction errorReportFunction, void *errorReportObject)
    : m_errorFunction(errorReportFunction), m_errorObject(errorReportObject)
{
}
