// finishLoadedObjecthkpFixedRigidMotion: hkpFixedRigidMotion's hkTypeInfo finish function (HK_REFLECTION_DEFINE_VIRTUAL, static in Havok).
// hkpMotion (Physics/Dynamics/Motion/hkpMotion.h) and its subclasses (RTTI). Its finish constructor sets
// m_gravityFactor (an hkHalf at +0x11e) to 1.0f when finishing; copying the literal to a float local keeps
// the stack copy that hkHalf::operator=(const hkReal &) reads as an int.
#include "havok/hkBase.h"


class hkHalf {
public:
    hkHalf &operator=(const hkReal &f)
    {
        int t = ((const int *)&f)[0];
        m_value = hkInt16(t >> 16);
        return *this;
    }
    hkInt16 m_value;
};

class hkpMotion : public hkReferencedObject {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_DYNAMICS);
    hkpMotion(hkFinishLoadedObjectFlag flag) : hkReferencedObject(flag)
    {
        if (flag.m_finishing)
        {
            hkReal one = 1.0f;
            m_gravityFactor = one;
        }
    }

    char m_pad08[0x116];        // +0x8
    hkHalf m_gravityFactor;     // +0x11E
};

class hkpBoxMotion : public hkpMotion {
public:
    hkpBoxMotion(hkFinishLoadedObjectFlag flag) : hkpMotion(flag) {}
};

class hkpThinBoxMotion : public hkpBoxMotion {
public:
    hkpThinBoxMotion(hkFinishLoadedObjectFlag flag) : hkpBoxMotion(flag) {}
};

class hkpSphereMotion : public hkpMotion {
public:
    hkpSphereMotion(hkFinishLoadedObjectFlag flag) : hkpMotion(flag) {}
};

class hkpCharacterMotion : public hkpMotion {
public:
    hkpCharacterMotion(hkFinishLoadedObjectFlag flag) : hkpMotion(flag) {}
};

class hkpKeyframedRigidMotion : public hkpMotion {
public:
    hkpKeyframedRigidMotion(hkFinishLoadedObjectFlag flag) : hkpMotion(flag) {}
};

class hkpFixedRigidMotion : public hkpKeyframedRigidMotion {
public:
    hkpFixedRigidMotion(hkFinishLoadedObjectFlag flag) : hkpKeyframedRigidMotion(flag) {}
};

class hkpMaxSizeMotion : public hkpKeyframedRigidMotion {
public:
    hkpMaxSizeMotion(hkFinishLoadedObjectFlag flag) : hkpKeyframedRigidMotion(flag) {}
};

void HK_CALL finishLoadedObjecthkpFixedRigidMotion(void *p, int finishing)
{
    hkFinishLoadedObjectFlag f;
    f.m_finishing = finishing;
    new (p) hkpFixedRigidMotion(f);
}
