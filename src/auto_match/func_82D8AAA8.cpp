// hkpEntity::hkpEntity(const hkpShape *shape): hkpWorldObject(shape, BROAD_PHASE_ENTITY), then the
// members in declaration order (hkpMaterial friction/restitution, the constraint arrays, the SPU
// collision callback, the motion, the listener/action arrays, the local frame), then the body.
// m_motion (hkpMaxSizeMotion at +0xe0, see func_82D8C6B0.cpp) stores nothing but m_savedMotion
// (+0x118) and its vtable: hkpMotion's default constructor runs hkReferencedObject's finish
// constructor and clears m_savedMotion in its body, which is why that store comes before the
// vtable store; the intermediate vtable stores are dead.
#include "havok/hkBase.h"

// The source used the literals 0.5f, 0.4f and 1.0f. symbols.txt names the game's 0.4f constant
// __real@3ecccccd, which is what the plain literal produces; the 0.5f and 1.0f copies are still
// lbl_s. Declaring those with their values lets the compiler treat them as constants and
// schedule their loads the way the original does.
extern "C" __declspec(selectany) const float lbl_82002C5C = 0.5f;
extern "C" __declspec(selectany) const float lbl_82002AE0 = 1.0f;

class hkpShape;

class hkpWorldObject : public hkReferencedObject {
public:
    enum BroadPhaseType { BROAD_PHASE_INVALID, BROAD_PHASE_ENTITY, BROAD_PHASE_PHANTOM, BROAD_PHASE_BORDER };
    hkpWorldObject(const hkpShape *shape, BroadPhaseType type);
    hkUint8 m_members[0x84];   // up to +0x8c
};

struct hkpMaterial {
    HK_FORCE_INLINE hkpMaterial() : m_friction(lbl_82002C5C), m_restitution(0.4f) {}
    hkInt8 m_responseType;
    hkInt16 m_rollingFrictionMultiplier;
    hkReal m_friction;
    hkReal m_restitution;
};

template <typename T>
struct hkSmallArray {
    HK_FORCE_INLINE hkSmallArray() : m_data(HK_NULL), m_size(0), m_capacityAndFlags(0x8000) {}
    T *m_data;
    hkUint16 m_size;
    hkUint16 m_capacityAndFlags;
};

class hkpMaxSizeMotion;

class hkpMotion : public hkReferencedObject {
protected:
    HK_FORCE_INLINE hkpMotion() : hkReferencedObject(hkFinishLoadedObjectFlag()) { m_savedMotion = HK_NULL; }
public:
    hkUint8 m_members[0x110];
    hkpMaxSizeMotion *m_savedMotion;      // +0x118
    hkUint16 m_savedQualityTypeIndex;
    hkInt16 m_gravityFactor;
};

class hkpKeyframedRigidMotion : public hkpMotion {
protected:
    HK_FORCE_INLINE hkpKeyframedRigidMotion() {}
};

class hkpMaxSizeMotion : public hkpKeyframedRigidMotion {
public:
    HK_FORCE_INLINE hkpMaxSizeMotion() {}
};

class hkpEntity : public hkpWorldObject {
public:
    hkpEntity(const hkpShape *shape);

    struct SpuCollisionCallback {
        HK_FORCE_INLINE SpuCollisionCallback() : m_util(HK_NULL), m_capabilities(0), m_eventFilter(3), m_userFilter(1) {}
        void *m_util;
        hkUint16 m_capabilities;
        hkUint8 m_eventFilter;
        hkUint8 m_userFilter;
    };

    hkpMaterial m_material;                       // +0x8c
    void *m_limitContactImpulseUtilAndFlag;       // +0x98
    hkReal m_damageMultiplier;                    // +0x9c
    void *m_breakableBody;                        // +0xa0
    hkUint32 m_solverData;                        // +0xa4
    hkUint16 m_storageIndex;                      // +0xa8
    hkUint16 m_contactPointCallbackDelay;         // +0xaa
    hkSmallArray<void> m_constraintsMaster;       // +0xac
    hkArray<void *> m_constraintsSlave;           // +0xb4
    hkArray<hkUint8> m_constraintRuntime;         // +0xc0
    void *m_simulationIsland;                     // +0xcc
    hkInt8 m_autoRemoveLevel;                     // +0xd0
    hkUint8 m_numShapeKeysInContactPointProperties; // +0xd1
    hkUint8 m_responseModifierFlags;              // +0xd2
    hkUint32 m_uid;                               // +0xd4
    SpuCollisionCallback m_spuCollisionCallback;  // +0xd8
    hkpMaxSizeMotion m_motion;                    // +0xe0
    hkSmallArray<void *> m_contactListeners;      // +0x200
    hkSmallArray<void *> m_actions;               // +0x208
    hkRefPtr<hkReferencedObject> m_localFrame;    // +0x210
    void *m_extendedListeners;                    // +0x214
};

hkpEntity::hkpEntity(const hkpShape *shape)
    : hkpWorldObject(shape, BROAD_PHASE_ENTITY)
{
    m_damageMultiplier = lbl_82002AE0;
    m_storageIndex = hkUint16(-1);
    m_simulationIsland = HK_NULL;
    m_extendedListeners = HK_NULL;
    m_limitContactImpulseUtilAndFlag = HK_NULL;
    m_uid = hkUint32(-1);
    m_solverData = 0;
    m_numShapeKeysInContactPointProperties = 0;
    m_breakableBody = HK_NULL;
}
