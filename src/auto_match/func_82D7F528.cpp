// finishLoadedObjecthkpPointToPathConstraintData: hkpPointToPathConstraintData's hkTypeInfo finish function
// (HK_REFLECTION_DEFINE_VIRTUAL). The finish constructor stores the vtable and finishes the bridge atom.
#include "havok/hkBase.h"
#include "havok/hkpConstraintAtom.h"
#include "havok/hkpConstraintData.h"

class hkpParametricCurve;

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
