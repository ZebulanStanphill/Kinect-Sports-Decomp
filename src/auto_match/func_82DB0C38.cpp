// hkpAabbTreeWorldManager::castRay (vtable slot 7; keeps its fn_ name): casts a ray through the
// active kd-tree (an hkpKdTreeCollidableRaycaster on the stack, inside the if) and, when there is
// one, the inactive AABB tree (an hkpAabbTreeCollidableRaycaster built before the timers, through
// its hkAabbTreeQueryUtils<hkAabbTreeAabb16, hkUint16>::Collector base at +4), inside
// HK_TIMER_BEGIN_LIST("CastRay", "ActiveTree") / SPLIT_LIST("InactiveTree") / END_LIST().
// Both raycasters take the hkpRayCollidableFilter and hkpRayShapeCollectionFilter bases of the
// collision filter, each conversion testing the filter pointer (two if/else statements), as in
// func_82DB3288.cpp. The kd raycaster's destructor leaves hkKdTreeCastCollector's vtable store
// (the next timer call could observe it); the AABB raycaster's destructor stores are dead.
#include "havok/hkpCollisionFilter.h"
#include "havok/hkpAabbTreeCollidableRaycaster.h"
#include "havok/hkpKdTreeCollidableRaycaster.h"
#include "havok/hkpWorldRayCastInput.h"

extern "C" unsigned __int64 __mftb();

struct hkMonitorStreamCommand { const char *m_commandAndMonitor; hkUint32 m_time0, m_time1; };
struct hkMonitorStream { char *m_start; hkMonitorStreamCommand *m_end; char *m_capacity; hkMonitorStreamCommand *m_capacityMinus16; };
extern "C" {
hkMonitorStream *KeTlsGetValue(unsigned int);
extern unsigned int lbl_8323B4A0;
}
static HK_FORCE_INLINE void timerBeginList(const char *name, const char *split)
{
    hkMonitorStream *m = KeTlsGetValue(lbl_8323B4A0);
    hkMonitorStreamCommand *h = m->m_end;
    if (h < m->m_capacityMinus16) {
        h->m_commandAndMonitor = name;
        ((const char **)h)[3] = split;
        h->m_time0 = (hkUint32)__mftb();
        m->m_end = (hkMonitorStreamCommand *)((char *)h + 16);
    }
}
static HK_FORCE_INLINE void timerMark(const char *name)
{
    hkMonitorStream *m = KeTlsGetValue(lbl_8323B4A0);
    hkMonitorStreamCommand *h = m->m_end;
    if (h < m->m_capacityMinus16) {
        h->m_commandAndMonitor = name;
        h->m_time0 = (hkUint32)__mftb();
        m->m_end = h + 1;
    }
}

typedef hkAabbTreeQueryUtils<hkAabbTreeData::hkAabbTreeAabb16, hkUint16>::Collector AabbCollector;
extern "C" void fn_83084210(void *result, void *tree, const void *from, const void *to,
                            hkKdTreeCastCollector *collector);
extern "C" void fn_82D378E8(void *tree, const void *from, const void *to, AabbCollector *collector,
                            float earlyOut);

struct hkpAabbTreeWorldManager {
    void *m_vtable;
    char m_pad04[8];
    void *m_inactiveTree;     // +0x0c
    void *m_activeTree;       // +0x10
    char m_pad14[0x10];
    hkBool m_hasInactiveTree; // +0x24
};

extern "C" void fn_82DB0C38(hkpAabbTreeWorldManager *self, const hkpWorldRayCastInput &input,
                            const hkpCollisionFilter *filter, hkpWorldRayCastOutput &output)
{
    hkpAabbTreeCollidableRaycaster aabbRaycaster;
    aabbRaycaster.m_output = &output;
    aabbRaycaster.m_input = &input;
    aabbRaycaster.m_filter = filter;
    aabbRaycaster.m_shapeCollectionFilter = filter;

    timerBeginList("LtCastRay", "StActiveTree");
    if (self->m_activeTree) {
        hkpKdTreeCollidableRaycaster raycaster;
        raycaster.m_output = &output;
        raycaster.m_input = &input;
        raycaster.m_collector = HK_NULL;
        raycaster.m_filter = filter;
        raycaster.m_shapeCollectionFilter = filter;
        __declspec(align(16)) char result[16];
        fn_83084210(result, self->m_activeTree, &input.m_from, &input.m_to, &raycaster);
    }
    timerMark("StInactiveTree");
    if (self->m_hasInactiveTree) {
        fn_82D378E8(self->m_inactiveTree, &input.m_from, &input.m_to, &aabbRaycaster, 1.0f);
    }
    timerMark("lt");
}
