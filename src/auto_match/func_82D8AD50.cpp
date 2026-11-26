// hkpEntity::~hkpEntity() (Physics/Dynamics/Entity/hkpEntity.cpp): removes and deletes the contact impulse
// limiter that hkpBreakOffPartsUtil attached, fires the entity-deleted callbacks and deletes the extended
// listeners; the members and hkpWorldObject follow.
#include "havok/hkpEntity.h"
#include "havok/hkpBreakOffPartsUtil.h"

extern "C" void fn_82DACF28(hkpEntity *entity);   // hkpEntityCallbackUtil::fireEntityDeleted

hkpEntity::~hkpEntity()
{
    if (m_limitContactImpulseUtilAndFlag) {
        hkpBreakOffPartsUtil::LimitContactImpulseUtil *util =
            static_cast<hkpBreakOffPartsUtil::LimitContactImpulseUtil *>(m_limitContactImpulseUtilAndFlag);
        int i = m_contactListeners.indexOf(util);
        m_contactListeners.m_data[i] = HK_NULL;
        delete util;
        m_limitContactImpulseUtilAndFlag = HK_NULL;
    }
    fn_82DACF28(this);
    delete m_extendedListeners;
}
