// hkOstream::hkOstream(hkStreamWriter *) (Common/Base/System/Io/OStream/hkOStream.cpp).
#include "havok/hkBase.h"
#include "havok/hkOstream.h"

hkOstream::hkOstream(hkStreamWriter *sw)
{
    m_writer = sw;
    if (sw)
        sw->addReferenceLockUnchecked();
}
