// hkpSerializedDisplayRbTransforms::~hkpSerializedDisplayRbTransforms (Physics/Utilities/Serialize/Display/
// hkpSerializedDisplayRbTransforms.h): removes the references to the rigid bodies, then m_transforms is destroyed.
#include "havok/hkBase.h"
#include "havok/hkpRigidBody.h"

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

hkpSerializedDisplayRbTransforms::~hkpSerializedDisplayRbTransforms()
{
    const int numTransforms = m_transforms.getSize();
    for (int i = 0; i < numTransforms; i++)
        fn_82CE4118(m_transforms[i].m_rb);   // removeReference(); the direct call keeps the original lwzx operand order
}
