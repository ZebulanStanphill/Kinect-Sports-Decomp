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
//
// The vtable has 16 slots (17 in the chain data classes). The six after getRuntimeInfo are placed by what
// their functions do in the 19 data classes' vtables; the names, and the types that are only forward
// declared, follow Havok's header (whose declaration order is different):
//   +0x28 82D9AB28 returns its argument (the runtime is the solver results); hkpPoweredChainData has its own
//         copy, 82DA1B98.
//   +0x2C 82D9AB08 clears the runtime (sizeOfRuntime bytes) in every class.
//   +0x30 the empty function 82BA02A8, except in the classes that build their own Jacobians: breakable
//         82D985C0, malleable 82D98BC0, generic 82D9DEB8, point-to-path 82DA0958, the chains 82D9B1B8,
//         82DA13C0, 82DA5BD0.
//   +0x34 82609770 (returns false); hkpBreakableConstraintData has 82D3ABC8 (returns true).
//   +0x38 the empty function; hkpBreakableConstraintData has 82D986F0.
//   +0x3C each class's own function; in the atom-based classes it passes &m_atoms and their size to
//         fn_82D9AB30, which clears the four hkpConstraintInfo words and stores the two arguments after them
//         (hence ConstraintInfo below). Pure in Havok, plain here like the three above.
// 82D9AB28 and 82D9AB08 stand next to fn_82D9AB30 as functions of their own, so they are out of line; the
// defaults of +0x30 to +0x38 are folded copies, so they are inline.
#ifndef HAVOK_HKPCONSTRAINTDATA_H
#define HAVOK_HKPCONSTRAINTDATA_H

#include "havok/hkBase.h"

class hkpConstraintInstance;
class hkpConstraintQueryIn;
class hkpConstraintQueryOut;
class hkpSolverResults;
struct hkpConstraintAtom;
struct hkpConstraintRuntime;

// hkpConstraintInfo, 0x10 bytes (Havok declares it in Physics/ConstraintSolver; the file is not known from
// the game). The four members in this order are the reflection table of the copy inside
// hkpGenericConstraintDataScheme (hkpGenericConstraintDataSchemeConstraintInfo, lbl_8213EDA8):
// maxSizeOfSchema +0, sizeOfSchemas +4, numSolverResults +8, numSolverElemTemps +0xC.
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
    // 0x18 bytes: what getConstraintInfo fills in (fn_82D9AB30 stores the atoms at +0x10 and their size at
    // +0x14).
    struct ConstraintInfo : public hkpConstraintInfo {
        hkpConstraintAtom *m_atoms;   // +0x10
        hkUint32 m_sizeOfAllAtoms;    // +0x14
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
    virtual hkpSolverResults *getSolverResults(hkpConstraintRuntime *runtime);     // +0x28
    virtual void addInstance(hkpConstraintInstance *constraint, hkpConstraintRuntime *runtime,
                             int sizeOfRuntime) const;                             // +0x2C
    virtual void buildJacobian(const hkpConstraintQueryIn &in, hkpConstraintQueryOut &out) {}   // +0x30
    virtual hkBool isBuildJacobianCallbackRequired() const { return false; }       // +0x34
    virtual void buildJacobianCallback(const hkpConstraintQueryIn &in, const hkpConstraintQueryOut &out) {}   // +0x38
    virtual void getConstraintInfo(ConstraintInfo &infoOut) const;                 // +0x3C

    hkUlong m_userData;   // +0x8
};

// hkpConstraintChainData (Physics/Dynamics/Constraint/Chain/hkpConstraintChainData.h). It adds one slot,
// +0x40: in the three chain classes it is 82897B20, a folded function that returns the word at +0x1C (the
// size of their m_infos array), so each chain class defines it inline. The name follows Havok's header,
// where it is pure.
class hkpConstraintChainData : public hkpConstraintData {
public:
    hkpConstraintChainData() {}
    hkpConstraintChainData(hkFinishLoadedObjectFlag f) : hkpConstraintData(f) {}
    virtual int getNumConstraintInfos();   // +0x40
};

#endif
