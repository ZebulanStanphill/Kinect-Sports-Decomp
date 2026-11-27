// hkBinaryPackfileReader::~hkBinaryPackfileReader() (Common/Serialize/Packfile/Binary/hkBinaryPackfileReader.cpp):
// deletes the update tracker and the loaded-objects array that getUpdateTracker / getLoadedObjects built, and
// releases the packfile data; then the members (m_packfileClassRegistry, m_sectionData) and hkPackfileReader
// are destroyed.
#include "havok/hkBinaryPackfileReader.h"
#include "havok/hkPackfileObjectUpdateTracker.h"

hkBinaryPackfileReader::~hkBinaryPackfileReader()
{
    delete m_tracker;
    delete m_loadedObjects;
    m_packfileData->removeReference();
}
