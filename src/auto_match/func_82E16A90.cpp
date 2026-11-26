// hkPackfileData::hkPackfileData() (Common/Serialize/Packfile/hkPackfileData.cpp): empty maps and arrays, the
// destructors enabled, and the builtin type registry's class name registry as the packfile's class registry.
#include "havok/hkDefaultBuiltinTypeRegistry.h"
#include "havok/hkDefaultClassNameRegistry.h"
#include "havok/hkPackfileData.h"

extern "C" hkBuiltinTypeRegistry *lbl_8323FD9C;   // hkSingleton<hkBuiltinTypeRegistry>::s_instance

hkPackfileData::hkPackfileData()
    : m_topLevelObject(HK_NULL), m_name(HK_NULL), m_trackedTypes(), m_packfileClassRegistry(), m_destructorsEnabled(1)
{
    // m_packfileClassRegistry = the registry: hkRefPtr's assignment (add the new reference, release the old).
    const hkClassNameRegistry *r = lbl_8323FD9C->getClassNameRegistry();
    if (r)
        r->addReference();
    if (m_packfileClassRegistry.m_pntr)
        m_packfileClassRegistry.m_pntr->removeReference();
    m_packfileClassRegistry.m_pntr = r;
}
