// Freezes the motion states of an island's entities at the given time: every entity's swept transform
// starts and ends at its current state, and entities not yet marked are collected into an array.
#include "havok/hkBase.h"

typedef __declspec(passinreg) __declspec(align(16)) union __vector4 {
    float vector4_f32[4];
    unsigned int vector4_u32[4];
} __vector4;

class hkVector4
{
  public:
    HK_FORCE_INLINE void operator=(const hkVector4 &v)
    {
        m_quad = v.m_quad;
    }

    HK_FORCE_INLINE hkReal &operator()(int i)
    {
        return m_quad.vector4_f32[i];
    }

    __vector4 m_quad;
};

class hkSweptTransform
{
  public:
    hkVector4 m_centerOfMass0;     // +0x00
    hkVector4 m_centerOfMass1;     // +0x10
    hkVector4 m_rotation0;         // +0x20
    hkVector4 m_rotation1;         // +0x30
    hkVector4 m_centerOfMassLocal; // +0x40
};

class hkMotionState
{
  public:
    hkUint8 m_transform[0x40];         // +0x00
    hkSweptTransform m_sweptTransform; // +0x40
};

class Entity_82DB5D78
{
  public:
    hkUint8 pad0[0xf0];
    hkMotionState m_motionState; // +0xf0
};

struct Clock_82DB5D78;

struct Island_82DB5D78 {
    hkUint8 pad0[0x18];
    Clock_82DB5D78 *clock; // +0x18
    hkUint8 pad1c[0x48 - 0x1c];
    hkArray<Entity_82DB5D78 *> entities; // +0x48
};

extern "C" void fn_82CE63B0(hkMemoryAllocator *, void *, int);
extern "C" void fn_83081170(hkReal time, hkMotionState *motionState);
extern "C" float fn_82D80A50(Clock_82DB5D78 *clock);

template <typename T> static HK_FORCE_INLINE void constructWithCopy(T *t, int n, const T &tcopy)
{
    for (int i = 0; i < n; ++i)
        t[i] = tcopy;
}

class Entities_82DB5D78 : public hkArrayBase<Entity_82DB5D78 *>
{
  public:
    HK_FORCE_INLINE void push(Entity_82DB5D78 *const &v)
    {
        hkMemoryAllocator &alloc = hkMemoryRouter::getInstance().heap();
        if (m_size == getCapacity())
            fn_82CE63B0(&alloc, this, sizeof(Entity_82DB5D78 *));
        constructWithCopy(m_data + m_size, 1, v);
        m_size++;
    }
};

extern "C" void fn_82DB5D78(hkReal time, Island_82DB5D78 *island, hkArray<hkUint8> *marks,
                            Entities_82DB5D78 *out)
{
    for (int i = 0; i < island->entities.getSize(); i++) {
        Entity_82DB5D78 *entity = island->entities[i];
        hkMotionState *motionState = &entity->m_motionState;

        fn_83081170(time, motionState);
        if ((*marks)[i] != 0x10) {
            out->push(entity);
            (*marks)[i] = 0x10;
        }
        motionState->m_sweptTransform.m_centerOfMass0 = motionState->m_sweptTransform.m_centerOfMass1;
        motionState->m_sweptTransform.m_rotation0 = motionState->m_sweptTransform.m_rotation1;
        motionState->m_sweptTransform.m_centerOfMass0(3) = time;
        motionState->m_sweptTransform.m_centerOfMass1(3) = 1.0f / (fn_82D80A50(island->clock) - time);
    }
}
