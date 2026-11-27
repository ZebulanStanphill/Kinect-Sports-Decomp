// hkpSymmetricAgent<hkpBvAgent>'s slot +0x20 (updateShapeCollectionFilter with the bodies swapped): calls
// hkpBvAgent's out of line. hkpSymmetricAgent.h does not declare the slot, so the function keeps its fn_ name.
#include "havok/hkpBvAgent.h"

extern "C" void fn_82D6EE70(hkpBvAgent *self, const hkpCdBody &bodyA, const hkpCdBody &bodyB,
                            const hkpCollisionInput &input, hkCollisionConstraintOwner &constraintOwner)
{
    self->hkpBvAgent::updateShapeCollectionFilter(bodyB, bodyA, input, constraintOwner);
}
