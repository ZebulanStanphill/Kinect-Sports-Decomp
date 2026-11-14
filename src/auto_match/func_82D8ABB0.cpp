// hkpEntity::hkpEntity(hkFinishLoadedObjectFlag) (Physics/Dynamics/Entity/hkpEntity.cpp). It keeps its fn_
// name (getVtablehkpEntity, a Matching C unit, calls it), as does the out-of-line hkpWorldObject finish
// constructor fn_82D93708, so the class code runs through an explicit constructor call (MSVC's
// self->C::C(args) extension; placement new would add a null check).
// Not matched: at /O2 (Havok code) everything matches except the 1.0f constant's name. The original
// hoists one load of the literal 1.0f (__real@3f800000) above the finishing test; symbols.txt names it
// lbl_82002AE0, which Matching C units reference, so it cannot be renamed, and an extern const float
// is reloaded in every case instead of being hoisted.
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

template <typename T>
class hkSmallArray {
public:
    enum { DONT_DEALLOCATE_FLAG = 0x8000 };
    HK_FORCE_INLINE hkSmallArray() : m_data(HK_NULL), m_size(0), m_capacityAndFlags(DONT_DEALLOCATE_FLAG) {}
    T *m_data;
    hkUint16 m_size;
    hkUint16 m_capacityAndFlags;
};

class hkpMotion : public hkReferencedObject {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_DYNAMICS);
    enum MotionType {
        MOTION_INVALID, MOTION_DYNAMIC, MOTION_SPHERE_INERTIA, MOTION_BOX_INERTIA, MOTION_KEYFRAMED,
        MOTION_FIXED, MOTION_THIN_BOX_INERTIA, MOTION_CHARACTER, MOTION_MAX_ID
    };
    hkpMotion(hkFinishLoadedObjectFlag flag) : hkReferencedObject(flag)
    {
        if (flag.m_finishing)
        {
            m_gravityFactor = 1.0f;
        }
    }
    hkUint8 m_type;             // +0x8
    char m_pad09[0x115];        // +0x9
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

class hkpWorldObject : public hkReferencedObject {
public:
    // The real finish constructor is out of line (fn_82D93708) and keeps its fn_ name.
    HK_FORCE_INLINE hkpWorldObject(hkFinishLoadedObjectFlag flag) : hkReferencedObject(flag) {}
    char m_pad08[0xa4];
};

class hkpConstraintInstance;
class hkpContactListener;
class hkpAction;
struct hkConstraintInternal;

class hkpEntity : public hkpWorldObject {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_ENTITY);
    HK_FORCE_INLINE hkpEntity(hkFinishLoadedObjectFlag flag) : hkpWorldObject(flag), m_motion(flag)
    {
        if (flag.m_finishing)
        {
            switch (m_motion.m_type)
            {
            case hkpMotion::MOTION_SPHERE_INERTIA: new (&m_motion) hkpSphereMotion(flag); break;
            case hkpMotion::MOTION_BOX_INERTIA: new (&m_motion) hkpBoxMotion(flag); break;
            case hkpMotion::MOTION_KEYFRAMED: new (&m_motion) hkpKeyframedRigidMotion(flag); break;
            case hkpMotion::MOTION_FIXED: new (&m_motion) hkpFixedRigidMotion(flag); break;
            case hkpMotion::MOTION_THIN_BOX_INERTIA: new (&m_motion) hkpThinBoxMotion(flag); break;
            case hkpMotion::MOTION_CHARACTER: new (&m_motion) hkpCharacterMotion(flag); break;
            }
        }
    }
    hkSmallArray<hkConstraintInternal> m_constraintsMaster;    // +0xAC
    hkArray<hkpConstraintInstance *> m_constraintsSlave;       // +0xB4
    hkArray<hkUint8> m_constraintRuntime;                      // +0xC0
    char m_padCC[0x14];                                        // +0xCC
    hkpMaxSizeMotion m_motion;                                 // +0xE0
    hkSmallArray<hkpContactListener *> m_contactListeners;     // +0x200
    hkSmallArray<hkpAction *> m_actions;                       // +0x208
};

extern "C" void fn_82D93708(hkpWorldObject *self, hkFinishLoadedObjectFlag flag);

extern "C" hkpEntity *fn_82D8ABB0(hkpEntity *self, hkFinishLoadedObjectFlag flag)
{
    fn_82D93708(self, flag);
    self->hkpEntity::hkpEntity(flag);
    return self;
}
