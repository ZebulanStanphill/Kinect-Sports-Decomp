#include "havok/hkBase.h"
#include "havok/hkpConstraintMotor.h"
#include "havok/hkpRagdollConstraintData.h"
#include "havok/hkpPrismaticConstraintData.h"
#include "havok/hkpLimitedHingeConstraintData.h"

extern "C" void fn_8260A488(void *, const void *);
extern "C" void fn_8260A568(void *, const void *);
extern "C" void fn_8260A648(void *, const void *);

static __forceinline void CloneMotor(hkpConstraintMotor **slot)
{
    if (*slot) {
        *slot = (*slot)->clone();
    }
}

extern "C" hkpConstraintData *fn_82DBF6D8(hkpConstraintData *self)
{
    switch (self->getType()) {
    case 7: {
        hkpRagdollConstraintData *copy = new hkpRagdollConstraintData;
        fn_8260A648(&copy->m_atoms, &static_cast<hkpRagdollConstraintData *>(self)->m_atoms);
        copy->m_userData = self->m_userData;
        hkpConstraintMotor **motor = copy->m_atoms.m_ragdollMotors.m_motors;
        for (int i = 3; i != 0; --i, ++motor) {
            if (*motor) {
                *motor = (*motor)->clone();
            }
        }
        return copy;
    }
    case 6: {
        hkpPrismaticConstraintData *copy = new hkpPrismaticConstraintData;
        fn_8260A568(&copy->m_atoms, &static_cast<hkpPrismaticConstraintData *>(self)->m_atoms);
        copy->m_userData = self->m_userData;
        CloneMotor(&copy->m_atoms.m_motor.m_motor);
        return copy;
    }
    case 2: {
        hkpLimitedHingeConstraintData *copy = new hkpLimitedHingeConstraintData;
        fn_8260A488(&copy->m_atoms, &static_cast<hkpLimitedHingeConstraintData *>(self)->m_atoms);
        copy->m_userData = self->m_userData;
        CloneMotor(&copy->m_atoms.m_angMotor.m_motor);
        return copy;
    }
    default:
        return 0;
    }
}
