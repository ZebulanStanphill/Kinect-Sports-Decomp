#include "havok/hkBase.h"
#include "havok/hkpAction.h"
#include "havok/hkpEntity.h"

hkpBinaryAction::~hkpBinaryAction()
{
    if (m_entityA != HK_NULL) {
        m_entityA->removeReference();
        m_entityA = HK_NULL;
    }
    if (m_entityB != HK_NULL) {
        m_entityB->removeReference();
        m_entityB = HK_NULL;
    }
}
