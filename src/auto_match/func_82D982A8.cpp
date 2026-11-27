// hkpBreakableConstraintData::getConstraintInfo(ConstraintInfo &) const: slot +0x3C of ??_7hkpBreakableConstraintData@@6B@ (the name is Havok's; the slot is
// placed by what the function does, see hkpConstraintData.h). The wrapped data's info, with the
// class's own bridge atoms in place of the wrapped atoms.
#include "havok/hkpBreakableConstraintData.h"

void hkpBreakableConstraintData::getConstraintInfo(ConstraintInfo &infoOut) const
{
    m_constraintData->getConstraintInfo(infoOut);
    infoOut.m_atoms = reinterpret_cast<hkpConstraintAtom *>(const_cast<hkpBridgeAtoms *>(&m_atoms));
    infoOut.m_sizeOfAllAtoms = sizeof(hkpBridgeAtoms);
}
