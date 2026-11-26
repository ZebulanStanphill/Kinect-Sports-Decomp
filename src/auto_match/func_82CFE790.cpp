// hkOArchive scalar deleting destructor, generated from the destructor below
// (Common/Base/System/Io/OArchive/hkOArchive.cpp; ~ is fn_82CFE370, inlined here).
#include "havok/hkBase.h"
#include "havok/hkOArchive.h"

hkOArchive::~hkOArchive()
{
    m_writer->removeReference();
}
