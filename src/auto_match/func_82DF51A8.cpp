// hkpSerializedDisplayRbTransforms::~hkpSerializedDisplayRbTransforms (Physics/Utilities/Serialize/Display/
// hkpSerializedDisplayRbTransforms.h): removes the references to the rigid bodies, then m_transforms is destroyed.
#include "havok/hkBase.h"
#include "havok/hkpRigidBody.h"
#include "havok/hkpSerializedDisplayRbTransforms.h"

hkpSerializedDisplayRbTransforms::~hkpSerializedDisplayRbTransforms()
{
    const int numTransforms = m_transforms.getSize();
    for (int i = 0; i < numTransforms; i++)
        fn_82CE4118(m_transforms[i].m_rb);   // removeReference(); the direct call keeps the original lwzx operand order
}
