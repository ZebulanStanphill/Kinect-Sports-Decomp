// hkPackfileData::getContentsTypeName() const (slot +0x1C of ??_7hkPackfileData@@6B@): the class name
// m_trackedObjects records for the top-level object (hkMapBase<hkUlong, hkUlong>::getWithDefault, fn_82CEA280),
// or null when there is none.
#include "havok/hkPackfileData.h"

extern "C" hkUlong fn_82CEA280(const void *map, hkUlong key, hkUlong def);

const char *hkPackfileData::getContentsTypeName() const
{
    if (m_topLevelObject)
        return (const char *)fn_82CEA280(&m_trackedObjects, hkUlong(m_topLevelObject), 0);
    return HK_NULL;
}
