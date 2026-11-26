// hkpSerializedAgentNnEntry::~hkpSerializedAgentNnEntry (Physics/Utilities/Serialize/hkpSerializedAgentNnEntry.cpp); m_trackInfo's
// destructor is out of line (fn_82DF4EF8).
#include "havok/hkBase.h"
#include "havok/hkpEntity.h"
#include "havok/hkpSerializedAgentNnEntry.h"

hkpSerializedAgentNnEntry::~hkpSerializedAgentNnEntry()
{
    if (m_bodyA)
        m_bodyA->removeReference();
    if (m_bodyB)
        m_bodyB->removeReference();
}
