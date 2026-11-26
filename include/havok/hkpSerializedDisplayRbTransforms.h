// hkpSerializedDisplayRbTransforms (Physics/Utilities/Serialize/Display/hkpSerializedDisplayRbTransforms.h),
// 0x14 bytes, and its nested DisplayTransformPair (0x50 bytes). The sizes and members come from the game's
// hkClasses: hkpSerializedDisplayRbTransforms (initialiser 83134EC8, members lbl_82144A20: "transforms", an array
// of DisplayTransformPair at +0x8) and hkpSerializedDisplayRbTransformsDisplayTransformPair (initialiser
// 83134E58, members lbl_821449F0: "rb", a pointer to hkpRigidBody at +0x0, and "localToDisplay", an hkTransform
// at +0x10). The destructor is out of line (82DF51A8: it removes the references to the rigid bodies); the
// deleting destructor is 82DE4FE0. The finish constructor is inline (82DE4FB8, 82DE4FD0).
#ifndef HAVOK_HKPSERIALIZEDDISPLAYRBTRANSFORMS_H
#define HAVOK_HKPSERIALIZEDDISPLAYRBTRANSFORMS_H

#include "havok/hkBase.h"
#include "havok/hkTransform.h"

class hkpRigidBody;

class hkpSerializedDisplayRbTransforms : public hkReferencedObject {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_UTILITIES);
    struct DisplayTransformPair {
        hkpRigidBody *m_rb;               // +0x0
        hkTransform m_localToDisplay;     // +0x10
    };
    hkpSerializedDisplayRbTransforms(hkFinishLoadedObjectFlag f) : hkReferencedObject(f), m_transforms(f) {}
    virtual ~hkpSerializedDisplayRbTransforms();

    hkArray<DisplayTransformPair> m_transforms;   // +0x8
};

#endif
