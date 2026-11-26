// hkpConstraintData (Physics/Dynamics/Constraint/hkpConstraintData.h),
// 0xC bytes: the description of a constraint, shared by its instances.
// isValid, getType and getRuntimeInfo are pure in Havok; they are plain
// virtual functions here so that a unit can construct a subclass without
// declaring them. The generated code is the same.
#ifndef HAVOK_HKPCONSTRAINTDATA_H
#define HAVOK_HKPCONSTRAINTDATA_H

#include "havok/hkBase.h"

class hkpConstraintData : public hkReferencedObject {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_CONSTRAINT);
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
