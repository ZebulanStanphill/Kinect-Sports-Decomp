// finishLoadedObjecthkpPointToPathConstraintData: hkpPointToPathConstraintData's hkTypeInfo finish function
// (HK_REFLECTION_DEFINE_VIRTUAL). The finish constructor stores the vtable and finishes the bridge atom.
#include "havok/hkBase.h"

class hkpConstraintData;
class hkpParametricCurve;

// hkpBridgeConstraintAtom::init(hkpConstraintData *) is out of line; it keeps its fn_ name
// because a Matching C unit defines it.
extern "C" void fn_82D9FE70(void *self, hkpConstraintData *data);

struct hkpConstraintAtom {
    hkpConstraintAtom(hkFinishLoadedObjectFlag f)
    {
    }

    hkUint16 m_type; // +0x0
};

struct hkpBridgeConstraintAtom : public hkpConstraintAtom {
    hkpBridgeConstraintAtom(hkFinishLoadedObjectFlag f) : hkpConstraintAtom(f)
    {
        if (f.m_finishing) {
            init(m_constraintData);
        }
    }

    void init(hkpConstraintData *constraintData)
    {
        fn_82D9FE70(this, constraintData);
    }

    void *m_buildJacobianFunc;           // +0x4
    hkpConstraintData *m_constraintData; // +0x8
};

struct hkpBridgeAtoms {
    hkpBridgeAtoms(hkFinishLoadedObjectFlag f) : m_bridgeAtom(f)
    {
    }

    hkpBridgeConstraintAtom m_bridgeAtom;
};

class hkpConstraintData : public hkReferencedObject
{
  public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_CONSTRAINT);

    hkpConstraintData(hkFinishLoadedObjectFlag f) : hkReferencedObject(f)
    {
    }

    hkUlong m_userData; // +0x8
};

class hkpPointToPathConstraintData : public hkpConstraintData
{
  public:
    hkpPointToPathConstraintData(hkFinishLoadedObjectFlag f) : hkpConstraintData(f), m_atoms(f)
    {
    }

    virtual ~hkpPointToPathConstraintData();

    hkpBridgeAtoms m_atoms;     // +0xC
    hkpParametricCurve *m_path; // +0x18
};

extern "C" void HK_CALL fn_82D7F528(void *p, int finishing)
{
    hkFinishLoadedObjectFlag f;
    f.m_finishing = finishing;
    new (p) hkpPointToPathConstraintData(f);
}
