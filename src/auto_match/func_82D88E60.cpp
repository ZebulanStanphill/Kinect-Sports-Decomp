// Havok hkpWorld::setCollisionFilter-like (World_82D88E60): installs a collision filter.
#include "havok/hkBase.h"
#include "havok/hkpNullCollisionFilter.h"

struct WorldPart_82D88E60 {
    char pad0[0xc];
    hkpCollisionFilter *filter;
};
struct World_82D88E60 {
    char pad0[0x78];
    WorldPart_82D88E60 *part;
    hkpCollisionFilter *m_filter;
};
extern "C" void fn_82D88440(World_82D88E60 *w, int a, int b);

extern "C" void fn_82D88E60(World_82D88E60 *w, hkpCollisionFilter *filter, char update, int mode, int mode2)
{
    if (filter == 0) {
        filter = new hkpNullCollisionFilter();
    } else {
        filter->addReference();
    }
    w->m_filter->removeReference();
    w->m_filter = filter;
    w->part->filter = filter;
    if (update != 0) fn_82D88440(w, mode, mode2);
}
