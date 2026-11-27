// hkContainerResourceMap::getObjectByName(const char *objectName, const hkClass **klassOut) const (slot 0 of
// ??_7hkContainerResourceMap@@6B@): the handle the string map holds for the name; its object, and its class
// through klassOut when asked (cleared first); null when there is no such resource.
#include "havok/hkContainerResourceMap.h"
#include "havok/hkResourceHandle.h"

void *hkContainerResourceMap::getObjectByName(const char *objectName, const hkClass **klassOut) const
{
    if (klassOut)
        *klassOut = HK_NULL;
    hkResourceHandle *handle = (hkResourceHandle *)m_resources.m_map.getWithDefault(hkUlong(objectName), 0);
    if (handle == HK_NULL)
        return HK_NULL;
    if (klassOut)
        *klassOut = handle->getClass();
    return handle->getObject();
}
