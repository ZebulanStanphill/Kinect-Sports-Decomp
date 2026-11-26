// hkDefaultError::hkDefaultError(hkErrorReportFunction, void *) (Common/Base/System/Error/hkDefaultError.cpp).
#include "havok/hkBase.h"
#include "havok/hkError.h"

typedef void (HK_CALL *hkErrorReportFunction)(const char *s, void *errorReportObject);

hkDefaultError::hkDefaultError(hkErrorReportFunction errorReportFunction, void *errorReportObject)
    : m_errorFunction(errorReportFunction), m_errorObject(errorReportObject)
{
}
