// hkpEntity::hkpEntity(const hkpShape *shape): hkpWorldObject(shape, BROAD_PHASE_ENTITY), then the
// members in declaration order (hkpMaterial friction/restitution, the constraint arrays, the SPU
// collision callback, the motion, the listener/action arrays, the local frame), then the body.
// m_motion (hkpMaxSizeMotion at +0xe0, see func_82D8C6B0.cpp) stores nothing but m_savedMotion
// (+0x118) and its vtable: hkpMotion's default constructor runs hkReferencedObject's finish
// constructor and clears m_savedMotion in its body, which is why that store comes before the
// vtable store; the intermediate vtable stores are dead.
#include "havok/hkBase.h"
#include "havok/hkpEntity.h"

// The source used the literals 0.5f, 0.4f and 1.0f. symbols.txt names the game's 0.4f constant
// __real@3ecccccd, which is what the plain literal produces; the 0.5f and 1.0f copies are still
// lbl_s. Declaring those with their values lets the compiler treat them as constants and
// schedule their loads the way the original does.

hkpEntity::hkpEntity(const hkpShape *shape)
    : hkpWorldObject(shape, BROAD_PHASE_ENTITY)
{
    m_damageMultiplier = 1.0f;
    m_storageIndex = hkUint16(-1);
    m_simulationIsland = HK_NULL;
    m_extendedListeners = HK_NULL;
    m_limitContactImpulseUtilAndFlag = HK_NULL;
    m_uid = hkUint32(-1);
    m_solverData = 0;
    m_numShapeKeysInContactPointProperties = 0;
    m_breakableBody = HK_NULL;
}
