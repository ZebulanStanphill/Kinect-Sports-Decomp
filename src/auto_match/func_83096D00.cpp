// hkpAabbTreeCollidableRaycaster::hkpAabbTreeCollidableRaycaster(). The class derives from the four
// hkAabbTreeQueryUtils<...>::Collector interfaces (RTTI order and offsets), then five pointers and
// the early-out hit fraction (1.0f) at +0x24.
// The original source used the literal 1.0f, whose load the compiler schedules above the vtable
// stores (it knows the constant cannot change).
#include "havok/hkpAabbTreeCollidableRaycaster.h"

hkpAabbTreeCollidableRaycaster::hkpAabbTreeCollidableRaycaster()
{
    m_earlyOutHitFraction = 1.0f;
    m_input = HK_NULL;
    m_filter = HK_NULL;
    m_shapeCollectionFilter = HK_NULL;
    m_output = HK_NULL;
    m_collector = HK_NULL;
}
