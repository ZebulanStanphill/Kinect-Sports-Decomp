// hkOArchive::~hkOArchive (Common/Base/System/Io/OArchive/hkOArchive.cpp).
#include "havok/hkOArchive.h"

hkOArchive::~hkOArchive()
{
    m_writer->removeReference();
}
