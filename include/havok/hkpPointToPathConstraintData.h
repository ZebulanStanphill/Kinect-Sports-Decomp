// hkpPointToPathConstraintData (Physics/Dynamics/Constraint/Bilateral/PointToPath/hkpPointToPathConstraintData.h),
// 0xB0 bytes: keeps a point of one body on a path (an hkpParametricCurve) in the other's space.
// The members, their offsets and types are the game's reflection table for the class (lbl_831832A8, with the
// OrientationConstraintType enum of lbl_8213BBF0). The constructor (??0hkpPointToPathConstraintData@@QAA@XZ, 82DA0508)
// and the destructor (82DA05E8, releases m_path) are out of line; the finish constructor is inline in
// finishLoadedObjecthkpPointToPathConstraintData (82D7F528).
// The vtable (??_7hkpPointToPathConstraintData@@6B@, 16 slots) has 82DA0500 at +0x20 (getType: 3); slots +0x28 to
// +0x3C are hkpConstraintData's virtual functions (hkpConstraintData.h says what each is).
#ifndef HAVOK_HKPPOINTTOPATHCONSTRAINTDATA_H
#define HAVOK_HKPPOINTTOPATHCONSTRAINTDATA_H

#include "havok/hkBase.h"
#include "havok/hkEnum.h"
#include "havok/hkTransform.h"
#include "havok/hkpConstraintAtom.h"
#include "havok/hkpConstraintData.h"

class hkpParametricCurve;

class hkpPointToPathConstraintData : public hkpConstraintData {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_CONSTRAINT);
    // The names follow Havok's header; the constructor sets CONSTRAIN_ORIENTATION_NONE (1).
    enum OrientationConstraintType {
        CONSTRAIN_ORIENTATION_INVALID,
        CONSTRAIN_ORIENTATION_NONE,
        CONSTRAIN_ORIENTATION_ALLOW_SPIN,
        CONSTRAIN_ORIENTATION_TO_PATH,
        CONSTRAIN_ORIENTATION_MAX_ID
    };
    hkpPointToPathConstraintData();
    hkpPointToPathConstraintData(hkFinishLoadedObjectFlag f) : hkpConstraintData(f), m_atoms(f) {}
    virtual ~hkpPointToPathConstraintData();
    virtual void getConstraintInfo(ConstraintInfo &infoOut) const;   // +0x3C 82DA0638

    hkpBridgeAtoms m_atoms;                                              // +0xC
    hkpParametricCurve *m_path;                                          // +0x18
    hkReal m_maxFrictionForce;                                           // +0x1C
    hkEnum<OrientationConstraintType, hkInt8> m_angularConstrainedDOF;   // +0x20
    hkTransform m_transform_OS_KS[2];                                    // +0x30
};

#endif
