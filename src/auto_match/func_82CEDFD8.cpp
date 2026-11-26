// hkOstream::hkOstream(const char *) (Common/Base/System/Io/OStream/hkOStream.cpp).
#include "havok/hkBase.h"
#include "havok/hkOstream.h"
#include "havok/hkFileSystem.h"

hkOstream::hkOstream(const char *filename)
{
    m_writer = hkFileSystem::getInstance().openWriter(filename);
}
