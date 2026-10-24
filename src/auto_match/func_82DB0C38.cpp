// hkpAabbTreeWorldManager::castRay (vtable slot 7; keeps its fn_ name): casts a ray through the
// active kd-tree (an hkpKdTreeCollidableRaycaster on the stack, inside the if) and, when there is
// one, the inactive AABB tree (an hkpAabbTreeCollidableRaycaster built before the timers, through
// its hkAabbTreeQueryUtils<hkAabbTreeAabb16, hkUint16>::Collector base at +4), inside
// HK_TIMER_BEGIN_LIST("CastRay", "ActiveTree") / SPLIT_LIST("InactiveTree") / END_LIST().
// Both raycasters test the output pointer once per member (two if/else statements), as in
// func_82DB3288.cpp. The kd raycaster's destructor leaves hkKdTreeCastCollector's vtable store
// (the next timer call could observe it); the AABB raycaster's destructor stores are dead.
#include "havok/hkBase.h"

extern "C" unsigned __int64 __mftb();
extern "C" void fn_8265CA20(void *p);   // global operator delete

struct hkMonitorStreamCommand { const char *m_commandAndMonitor; hkUint32 m_time0, m_time1; };
struct hkMonitorStream { char *m_start; hkMonitorStreamCommand *m_end; char *m_capacity; hkMonitorStreamCommand *m_capacityMinus16; };
extern "C" {
hkMonitorStream *KeTlsGetValue(unsigned int);
extern unsigned int lbl_8323B4A0;
extern const float lbl_82002AE0;
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

struct hkAabbTreeData {
    struct hkAabbTreeAabb;
    struct hkAabbTreeAabb16;
};

template <typename BOUNDING_VOLUME, typename IDX>
class hkAabbTreeQueryUtils {
public:
    class Collector {
    public:
        static void operator delete(void *p) { fn_8265CA20(p); }
        virtual ~Collector() {}
    };
};

class hkpAabbTreeCollidableRaycaster : public hkAabbTreeQueryUtils<hkAabbTreeData::hkAabbTreeAabb, hkUint16>::Collector,
                                       public hkAabbTreeQueryUtils<hkAabbTreeData::hkAabbTreeAabb16, hkUint16>::Collector,
                                       public hkAabbTreeQueryUtils<hkAabbTreeData::hkAabbTreeAabb, hkUint32>::Collector,
                                       public hkAabbTreeQueryUtils<hkAabbTreeData::hkAabbTreeAabb16, hkUint32>::Collector {
public:
    static void operator delete(void *p) { fn_8265CA20(p); }
    hkpAabbTreeCollidableRaycaster();

    const void *m_input;
    void *m_output14;
    void *m_output10;
    const void *m_filter;
    int m_numHits;
    hkReal m_earlyOutHitFraction;
};

class hkKdTreeCastCollector {
public:
    static void operator delete(void *p) { fn_8265CA20(p); }
    virtual ~hkKdTreeCastCollector() {}
};

class hkpKdTreeCollidableRaycaster : public hkKdTreeCastCollector {
public:
    HK_DECLARE_NONVIRTUAL_CLASS_ALLOCATOR(HK_MEMORY_CLASS_COLLIDE, hkpKdTreeCollidableRaycaster);

    hkpKdTreeCollidableRaycaster(const void *input, char *output, const void *filter)
    {
        m_filter = filter;
        m_input = input;
        m_numHits = 0;
        if (output) m_output14 = output + 0x14; else m_output14 = HK_NULL;
        if (output) m_output10 = output + 0x10; else m_output10 = HK_NULL;
    }

    const void *m_input;
    void *m_output14;
    void *m_output10;
    const void *m_filter;
    int m_numHits;
};

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

extern "C" void fn_82DB0C38(hkpAabbTreeWorldManager *self, const char *input, char *output,
                            const void *filter)
{
    hkpAabbTreeCollidableRaycaster aabbRaycaster;
    aabbRaycaster.m_filter = filter;
    aabbRaycaster.m_input = input;
    if (output) aabbRaycaster.m_output14 = output + 0x14; else aabbRaycaster.m_output14 = HK_NULL;
    if (output) aabbRaycaster.m_output10 = output + 0x10; else aabbRaycaster.m_output10 = HK_NULL;

    timerBeginList("LtCastRay", "StActiveTree");
    if (self->m_activeTree) {
        hkpKdTreeCollidableRaycaster raycaster(input, output, filter);
        __declspec(align(16)) char result[16];
        fn_83084210(result, self->m_activeTree, input, input + 0x10, &raycaster);
    }
    timerMark("StInactiveTree");
    if (self->m_hasInactiveTree) {
        fn_82D378E8(self->m_inactiveTree, input, input + 0x10, &aabbRaycaster, lbl_82002AE0);
    }
    timerMark("lt");
}
