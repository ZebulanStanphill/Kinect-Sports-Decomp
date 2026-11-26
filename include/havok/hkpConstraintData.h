// hkpConstraintData (Physics/Dynamics/Constraint/hkpConstraintData.h),
// 0xC bytes: the description of a constraint, shared by its instances.
// isValid, getType and getRuntimeInfo are pure in Havok; they are plain
// virtual functions here so that a unit can construct a subclass without
// declaring them. The generated code is the same.
// ConstraintType's values are the ones each data class's getType (vtable
// +0x20) returns in the game: 0 82D96720, 1 82D96840, 2 82D93900, 3 82DA0500,
// 6 82D96FA8, 7 82D97818, 8 82D98228, 9 82D99268, 10 82D9D7B8, 11 82DC7818,
// 12 82D98358, 13 82D98A78, 14 82D98D38, 15 82DA1C78, 16 82DA2460,
// 18 82D9EB78, 19 82DA1EC0, 100 82DA5938, 101 82D9AF28, 102 82DA0EF0. The
// names are Havok's.
#ifndef HAVOK_HKPCONSTRAINTDATA_H
#define HAVOK_HKPCONSTRAINTDATA_H

#include "havok/hkBase.h"

class hkpConstraintData : public hkReferencedObject {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_CONSTRAINT);
    enum ConstraintType {
        CONSTRAINT_TYPE_BALLANDSOCKET = 0,
        CONSTRAINT_TYPE_HINGE = 1,
        CONSTRAINT_TYPE_LIMITEDHINGE = 2,
        CONSTRAINT_TYPE_POINTTOPATH = 3,
        CONSTRAINT_TYPE_PRISMATIC = 6,
        CONSTRAINT_TYPE_RAGDOLL = 7,
        CONSTRAINT_TYPE_STIFFSPRING = 8,
        CONSTRAINT_TYPE_WHEEL = 9,
        CONSTRAINT_TYPE_GENERIC = 10,
        CONSTRAINT_TYPE_CONTACT = 11,
        CONSTRAINT_TYPE_BREAKABLE = 12,
        CONSTRAINT_TYPE_MALLEABLE = 13,
        CONSTRAINT_TYPE_POINTTOPLANE = 14,
        CONSTRAINT_TYPE_PULLEY = 15,
        CONSTRAINT_TYPE_ROTATIONAL = 16,
        CONSTRAINT_TYPE_HINGE_LIMITS = 18,
        CONSTRAINT_TYPE_RAGDOLL_LIMITS = 19,
        BEGIN_CONSTRAINT_CHAIN_TYPES = 100,
        CONSTRAINT_TYPE_STIFF_SPRING_CHAIN = 100,
        CONSTRAINT_TYPE_BALL_SOCKET_CHAIN = 101,
        CONSTRAINT_TYPE_POWERED_CHAIN = 102
    };
    struct RuntimeInfo {
        int m_sizeOfExternalRuntime;
        int m_numSolverResults;
    };
    hkpConstraintData() : m_userData(0) {}
    hkpConstraintData(hkFinishLoadedObjectFlag flag) : hkReferencedObject(flag) {}

    virtual void setMaxLinearImpulse(hkReal maxImpulse);   // +0xC
    virtual hkReal getMaxLinearImpulse() const;            // +0x10
    virtual void setBodyToNotify(int bodyIdx);             // +0x14
    virtual hkUint8 getNotifiedBodyIndex() const;          // +0x18
    virtual hkBool isValid() const;                        // +0x1C
    virtual int getType() const;                           // +0x20
    virtual void getRuntimeInfo(hkBool wantRuntime, RuntimeInfo &infoOut) const;   // +0x24

    hkUlong m_userData;   // +0x8
};

// hkpConstraintChainData (Physics/Dynamics/Constraint/Chain/hkpConstraintChainData.h)
class hkpConstraintChainData : public hkpConstraintData {
public:
    hkpConstraintChainData() {}
    hkpConstraintChainData(hkFinishLoadedObjectFlag f) : hkpConstraintData(f) {}
};

// hkpConstraintInfo (Physics/ConstraintSolver/Constraint/hkpConstraintQueryIn.h? 0x10 bytes)
struct hkpConstraintInfo {
    HK_FORCE_INLINE void clear()
    {
        m_maxSizeOfSchema = 0;
        m_sizeOfSchemas = 0;
        m_numSolverResults = 0;
        m_numSolverElemTemps = 0;
    }
    int m_maxSizeOfSchema;
    int m_sizeOfSchemas;
    int m_numSolverResults;
    int m_numSolverElemTemps;
};

#endif
