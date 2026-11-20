#include "havok/hkOArchive.h"

hkBool hkOArchive::isOk() const
{
    return m_writer->isOk();
}
