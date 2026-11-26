// hkpUnaryAction's scalar deleting destructor. The compiler emits it with the destructor, which it inlines
// here as in the original: both come from Physics/Dynamics/Action/hkpUnaryAction.cpp. The destructor's own
// unit is func_82D95638.cpp.
#include "havok/hkpAction.h"
#include "havok/hkpEntity.h"

hkpUnaryAction::~hkpUnaryAction()
{
    if (m_entity) {
        m_entity->removeReference();
        m_entity = HK_NULL;
    }
}
