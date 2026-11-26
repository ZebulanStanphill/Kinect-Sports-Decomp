#include "havok/hkBase.h"
#include "havok/hkpBroadPhase.h"

hkpBroadPhase::hkpBroadPhase() : m_criticalSection(HK_NULL)
{
    fn_82CEFB20(&m_multiThreadCheck);
}
