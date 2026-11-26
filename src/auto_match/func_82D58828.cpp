// hkpCollisionDispatcher::disableDebugging() (Physics/Collide/Dispatch/hkpCollisionDispatcher.cpp), /O2:
// frees the four debug tables (32 x 32 DebugEntry cells, 0xC00 bytes each) to the debug allocator. The
// destructor (82D597D8) calls it. Havok's name, chosen by what the function does.
#include "havok/hkMemoryRouter.h"
#include "havok/hkpCollisionDispatcher.h"

static HK_FORCE_INLINE void freeDebugTable(hkpCollisionDispatcher::DebugEntry *table)
{
    hkMemoryRouter::getInstance().debug().blockFree(
        table, hkpCollisionDispatcher::HK_MAX_SHAPE_TYPE * hkpCollisionDispatcher::HK_MAX_SHAPE_TYPE *
                   int(sizeof(hkpCollisionDispatcher::DebugEntry)));
}

void hkpCollisionDispatcher::disableDebugging()
{
    if (m_debugAgent2Table) {
        freeDebugTable(m_debugAgent2Table);
        freeDebugTable(m_debugAgent2TablePred);
        freeDebugTable(m_debugAgent3Table);
        freeDebugTable(m_debugAgent3TablePred);
        m_debugAgent2Table = HK_NULL;
        m_debugAgent2TablePred = HK_NULL;
        m_debugAgent3Table = HK_NULL;
        m_debugAgent3TablePred = HK_NULL;
    }
}
