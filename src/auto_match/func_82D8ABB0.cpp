// hkpEntity::hkpEntity(hkFinishLoadedObjectFlag) (Physics/Dynamics/Entity/hkpEntity.cpp): the base and member
// finish constructors, then the finish constructor of the motion's real class over m_motion, chosen by the
// serialised motion type.
//
// The null test of each placement new stays in the original. It only stays here because hkVector4 has no
// user-written default constructor (see havok/hkVector4.h).
#include "havok/hkBase.h"
#include "havok/hkpEntity.h"

hkpEntity::hkpEntity(hkFinishLoadedObjectFlag flag)
    : hkpWorldObject(flag), m_material(flag), m_spuCollisionCallback(flag), m_motion(flag), m_localFrame(flag)
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
