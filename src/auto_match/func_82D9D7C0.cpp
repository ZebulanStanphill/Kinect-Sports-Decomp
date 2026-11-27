// hkpGenericConstraintData::getConstraintInfo(ConstraintInfo &) const: slot +0x3C of ??_7hkpGenericConstraintData@@6B@ (the name is Havok's; the slot is
// placed by what the function does, see hkpConstraintData.h). The bridge atoms, and the scheme's
// info.
#include "havok/hkpGenericConstraintData.h"

void hkpGenericConstraintData::getConstraintInfo(ConstraintInfo &infoOut) const
{
    infoOut.clear();
    infoOut.m_atoms = reinterpret_cast<hkpConstraintAtom *>(const_cast<hkpBridgeAtoms *>(&m_atoms));
    infoOut.m_sizeOfAllAtoms = sizeof(hkpBridgeAtoms);
    static_cast<hkpConstraintInfo &>(infoOut) = m_scheme.m_info;
}
