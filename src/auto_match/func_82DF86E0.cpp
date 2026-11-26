// hkpSerializedAgentNnEntry::hkpSerializedAgentNnEntry() (Physics/Utilities/Serialize/hkpSerializedAgentNnEntry.h),
// out of line. Havok code, so /O2 (flag file). m_useEntityIds must be an hkBool: its inline constructor is
// what leaves the two `mr` copies of -1 (with a plain hkUint8 the code is 8 bytes shorter and scheduled
// differently). The contact data info's init() zeroes its 7 words in a loop.
#include "havok/hkBase.h"
#include "havok/hkpSerializedAgentNnEntry.h"

hkpSerializedAgentNnEntry::hkpSerializedAgentNnEntry()
    : m_bodyA(HK_NULL), m_bodyB(HK_NULL), m_bodyAId(hkUlong(-1)), m_bodyBId(hkUlong(-1)), m_useEntityIds(false)
{
    *(hkUint32 *)m_endianCheckBuffer = 0x103;
    m_version = 1;
}
