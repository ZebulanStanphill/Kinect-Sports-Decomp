// hkPackfileObjectUpdateTracker::hkPackfileObjectUpdateTracker(hkPackfileData *data): the maps reserve nothing (hkMapBase::reserve, fn_82CEAB00); the packfile data gets a reference.
// hkPackfileObjectUpdateTracker (Common/Serialize/Packfile/hkPackfileObjectUpdateTracker.h,
// 0x38 bytes): hkObjectUpdateTracker (an interface over hkReferencedObject, RTTI).
#include "havok/hkPackfileData.h"
#include "havok/hkPackfileObjectUpdateTracker.h"

hkPackfileObjectUpdateTracker::hkPackfileObjectUpdateTracker(hkPackfileData *data)
    : m_packfileData(data), m_topLevelObject(HK_NULL)
{
    m_packfileData->addReference();
}
