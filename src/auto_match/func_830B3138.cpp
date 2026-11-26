#include "havok/hkBase.h"
#include "havok/hkpAction.h"
#include "havok/hkpEntity.h"

hkpBinaryAction::hkpBinaryAction(hkpEntity *entityA, hkpEntity *entityB, hkUlong userData)
    : hkpAction(userData), m_entityA(entityA), m_entityB(entityB)
{
    if (m_entityB != HK_NULL || m_entityA != HK_NULL) {
        if (m_entityA != HK_NULL)
            m_entityA->addReference();
        if (m_entityB != HK_NULL)
            m_entityB->addReference();
    }
}
