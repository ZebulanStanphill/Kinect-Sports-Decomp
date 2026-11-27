#include "havok/hkArray.h"
#include "havok/hkpAction.h"

// Slot +0x10 of ??_7hkpBinaryAction@@6B@, inherited by the dashpot, angular dashpot and spring actions.
void hkpBinaryAction::getEntities(hkArray<hkpEntity *> &entitiesOut)
{
    entitiesOut.pushBack(m_entityA);
    entitiesOut.pushBack(m_entityB);
}
