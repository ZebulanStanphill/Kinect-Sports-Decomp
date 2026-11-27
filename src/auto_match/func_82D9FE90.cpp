// hkpSimpleContactConstraintAtom::hkpSimpleContactConstraintAtom(hkFinishLoadedObjectFlag), the finish constructor
// (Physics/ConstraintSolver/Constraint/Atom/hkpSimpleContactConstraintAtom.cpp, Havok's path): when finishing it
// recomputes the contact point properties' striding from the two user data counts.
#include "havok/hkBase.h"
#include "havok/hkpSimpleContactConstraintAtom.h"

hkpSimpleContactConstraintAtom::hkpSimpleContactConstraintAtom(hkFinishLoadedObjectFlag f)
    : hkpConstraintAtom(f), m_info(f)
{
    if (f.m_finishing)
        m_contactPointPropertiesStriding = hkUint8((m_numUserDatasForBodyB + m_numUserDatasForBodyA + 5) * 4);
}
