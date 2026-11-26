// hkIArchive scalar deleting destructor, generated from the destructor below (hkIArchive.cpp).
#include "havok/hkBase.h"
#include "havok/hkIArchive.h"

hkIArchive::~hkIArchive()
{
    if (m_streamReader)
        m_streamReader->removeReference();
}
