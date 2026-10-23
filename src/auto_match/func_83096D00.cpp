// hkpAabbTreeCollidableRaycaster::hkpAabbTreeCollidableRaycaster(). The class derives from the four
// hkAabbTreeQueryUtils<...>::Collector interfaces (RTTI order and offsets), then five pointers and
// the early-out hit fraction (1.0f) at +0x24.
// The original source used the literal 1.0f, whose load the compiler schedules above the vtable
// stores (it knows the constant cannot change); the game's copy of that constant is lbl_82002AE0.
// A plain extern lbl_82002AE0 keeps the load below the vtable stores; renaming it to
// __real@3f800000 is blocked by Matching C units, so it is declared here as a known constant.
#include "havok/hkBase.h"

extern "C" __declspec(selectany) const float lbl_82002AE0 = 1.0f;

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
    virtual ~hkpAabbTreeCollidableRaycaster();

    void *m_a;
    void *m_b;
    void *m_c;
    void *m_d;
    void *m_e;
    hkReal m_earlyOutHitFraction;
};

hkpAabbTreeCollidableRaycaster::hkpAabbTreeCollidableRaycaster()
{
    m_earlyOutHitFraction = lbl_82002AE0;
    m_a = 0;
    m_b = 0;
    m_c = 0;
    m_d = 0;
    m_e = 0;
}
