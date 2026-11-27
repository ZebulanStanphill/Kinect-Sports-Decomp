#include "havok/hkpAction.h"

extern "C" void fn_82D88AE0(hkpWorld *world, hkpAction *action);

// Slot +0x18 of ??_7hkpBinaryAction@@6B@: an action whose entity leaves the world leaves it too.
// fn_82D88AE0 is called with the world and the action (hkpWorld has no header yet).
void hkpBinaryAction::entityRemovedCallback(hkpEntity *entity)
{
    if ((int)m_world != 0) {   // the original tests the pointer with cmpwi
        fn_82D88AE0(m_world, this);
    }
}
