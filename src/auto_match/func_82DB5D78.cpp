// Freezes the motion states of an island's entities at the given time: every entity's swept transform
// starts and ends at its current state, and entities not yet marked are collected into an array.
#include "havok/hkBase.h"
#include "havok/hkpEntity.h"

struct Clock_82DB5D78;

struct Island_82DB5D78 {
    hkUint8 pad0[0x18];
    Clock_82DB5D78 *clock; // +0x18
    hkUint8 pad1c[0x48 - 0x1c];
    hkArray<hkpEntity *> entities; // +0x48
};

extern "C" void fn_83081170(hkReal time, hkMotionState *motionState);
extern "C" float fn_82D80A50(Clock_82DB5D78 *clock);

template <typename T> static HK_FORCE_INLINE void constructWithCopy(T *t, int n, const T &tcopy)
{
    for (int i = 0; i < n; ++i)
        t[i] = tcopy;
}

class Entities_82DB5D78 : public hkArrayBase<hkpEntity *>
{
  public:
    HK_FORCE_INLINE void push(hkpEntity *const &v)
    {
        hkMemoryAllocator &alloc = hkMemoryRouter::getInstance().heap();
        if (m_size == getCapacity())
            hkArrayUtil::_reserveMore(alloc, this, sizeof(hkpEntity *));
        constructWithCopy(m_data + m_size, 1, v);
        m_size++;
    }
};

extern "C" void fn_82DB5D78(hkReal time, Island_82DB5D78 *island, hkArray<hkUint8> *marks,
                            Entities_82DB5D78 *out)
{
    for (int i = 0; i < island->entities.getSize(); i++) {
        hkpEntity *entity = island->entities[i];
        hkMotionState *motionState = entity->m_motion.getMotionState();

        fn_83081170(time, motionState);
        if ((*marks)[i] != 0x10) {
            out->push(entity);
            (*marks)[i] = 0x10;
        }
        motionState->m_sweptTransform.m_centerOfMass0 = motionState->m_sweptTransform.m_centerOfMass1;
        motionState->m_sweptTransform.m_rotation0.m_vec = motionState->m_sweptTransform.m_rotation1.m_vec;
        motionState->m_sweptTransform.m_centerOfMass0(3) = time;
        motionState->m_sweptTransform.m_centerOfMass1(3) = 1.0f / (fn_82D80A50(island->clock) - time);
    }
}
