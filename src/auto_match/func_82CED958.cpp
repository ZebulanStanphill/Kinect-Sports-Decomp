// hkOstream::~hkOstream (Common/Base/System/Io/OStream/hkOStream.cpp).
#include "havok/hkOstream.h"

hkOstream::~hkOstream()
{
    if (m_writer)
        m_writer->removeReferenceLockUnchecked();
}
