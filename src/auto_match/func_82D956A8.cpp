#include "havok/hkArray.h"
#include "havok/hkpAction.h"

// Slot +0x10 of ??_7hkpUnaryAction@@6B@, inherited by every vtable of a class derived from it.
void hkpUnaryAction::getEntities(hkArray<hkpEntity *> &entitiesOut)
{
    entitiesOut.pushBack(m_entity);
}
