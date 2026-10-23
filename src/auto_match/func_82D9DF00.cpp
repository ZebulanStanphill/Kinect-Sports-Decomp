// hkpGenericConstraintData::hkpGenericConstraintData(hkFinishLoadedObjectFlag) (Physics/Dynamics/Constraint/Bilateral/Generic/hkpGenericConstraintData.cpp). It keeps its fn_ name (the Matching getVtable unit func_82D7EF50 calls it), so it is defined inline and expanded below.
#include "havok/hkBase.h"

class hkpConstraintData;

// hkpBridgeConstraintAtom::init(hkpConstraintData *) is out of line (sets
// m_buildJacobianFunc and m_constraintData); it keeps its fn_ name because a
// Matching C unit defines it.
extern "C" void fn_82D9FE70(void *self, hkpConstraintData *data);

struct hkpConstraintAtom {
    hkpConstraintAtom(hkFinishLoadedObjectFlag f) {}
    hkUint16 m_type;   // +0x0
};

struct hkpBridgeConstraintAtom : public hkpConstraintAtom {
    hkpBridgeConstraintAtom(hkFinishLoadedObjectFlag f) : hkpConstraintAtom(f)
    {
        if (f.m_finishing)
            init(m_constraintData);
    }
    void init(hkpConstraintData *constraintData) { fn_82D9FE70(this, constraintData); }

    void *m_buildJacobianFunc;           // +0x4
    hkpConstraintData *m_constraintData; // +0x8
};

struct hkpBridgeAtoms {
    hkpBridgeAtoms(hkFinishLoadedObjectFlag f) : m_bridgeAtom(f) {}
    hkpBridgeConstraintAtom m_bridgeAtom;
};

class hkpConstraintData : public hkReferencedObject {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_CONSTRAINT);
    hkpConstraintData(hkFinishLoadedObjectFlag f) : hkReferencedObject(f) {}

    hkUlong m_userData;   // +0x8
};

class hkVector4 {
public:
    hkReal x, y, z, w;
};
class hkpConstraintModifier;

class hkpConstraintMotor : public hkReferencedObject {
};

struct hkpConstraintInfo {
    int m_maxSizeOfSchema;
    int m_sizeOfSchemas;
    int m_numSolverResults;
    int m_numSolverElemTemps;
};

// The finish constructor and the (implicit) destructor are out of line:
// fn_82DA5F38 and fn_82D801A8.
class hkpGenericConstraintDataScheme {
public:
    hkpGenericConstraintDataScheme(hkFinishLoadedObjectFlag f);
    ~hkpGenericConstraintDataScheme();

    hkpConstraintInfo m_info;                          // +0x0
    hkArray<hkVector4> m_data;                         // +0x10
    hkArray<int> m_commands;                           // +0x1C
    hkArray<hkpConstraintModifier *> m_modifiers;      // +0x28
    hkArray<hkpConstraintMotor *> m_motors;            // +0x34
};

class hkpGenericConstraintData : public hkpConstraintData {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_CONSTRAINT);
    hkpGenericConstraintData(hkFinishLoadedObjectFlag f) : hkpConstraintData(f), m_atoms(f), m_scheme(f)
    {
        if (f.m_finishing)
            m_atoms.m_bridgeAtom.init(this);
    }
    virtual ~hkpGenericConstraintData();

    hkpBridgeAtoms m_atoms;                     // +0xC
    hkpGenericConstraintDataScheme m_scheme;    // +0x18
};

extern "C" hkpGenericConstraintData *fn_82D9DF00(hkpGenericConstraintData *self, hkFinishLoadedObjectFlag f)
{
    self->hkpGenericConstraintData::hkpGenericConstraintData(f);
    return self;
}
