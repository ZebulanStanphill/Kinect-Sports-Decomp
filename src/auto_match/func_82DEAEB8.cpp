// hkpBreakOffPartsUtil::LimitContactImpulseUtil::LimitContactImpulseUtil(hkpBreakOffPartsUtil *, hkpEntity *)
// (hkpBreakOffPartsUtil.cpp).
#include "havok/hkBase.h"
#include "havok/hkpEntity.h"
#include "havok/hkpBreakOffPartsUtil.h"

hkpBreakOffPartsUtil::LimitContactImpulseUtil::LimitContactImpulseUtil(hkpBreakOffPartsUtil *breakUtil, hkpEntity *entity)
    : m_entity(entity)
{
    m_maxImpulse.m_value = 0xff;
    m_maxImpulseFactor = 3.40282e+38f;
    entity->m_limitContactImpulseUtilAndFlag = this;
    entity->addContactListener(this);
}
