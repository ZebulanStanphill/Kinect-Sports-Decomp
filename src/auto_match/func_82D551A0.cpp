// hkpSymmetricAgent<hkpBvTreeStreamAgent>'s slot +0x20 (updateShapeCollectionFilter with the bodies swapped): calls
// hkpBvTreeStreamAgent's out of line. hkpSymmetricAgent.h does not declare the slot, so the function keeps its fn_
// name.
#include "havok/hkpBvTreeStreamAgent.h"

extern "C" void fn_82D551A0(hkpBvTreeStreamAgent *self, const hkpCdBody &bodyA, const hkpCdBody &bodyB,
                            const hkpCollisionInput &input, hkCollisionConstraintOwner &constraintOwner)
{
    self->hkpBvTreeStreamAgent::updateShapeCollectionFilter(bodyB, bodyA, input, constraintOwner);
}
