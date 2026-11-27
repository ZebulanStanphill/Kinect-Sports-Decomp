// hkpHingeConstraintData::getConstraintInfo(ConstraintInfo &) const: slot +0x3C of ??_7hkpHingeConstraintData@@6B@ (the name is Havok's; the slot is
// placed by what the function does, see hkpConstraintData.h). It passes the atoms and their size up to the end of the last
// atom (0x9c bytes, Havok's Atoms::getSizeOfAllAtoms) to 82D9AB30 (hkpConstraintData::getConstraintInfoUtil in
// Havok; it keeps its fn_ name).
#include "havok/hkpHingeConstraintData.h"

extern "C" void fn_82D9AB30(const hkpConstraintAtom *atoms, int sizeOfAllAtoms, hkpConstraintData::ConstraintInfo &infoOut);

void hkpHingeConstraintData::getConstraintInfo(ConstraintInfo &infoOut) const
{
    fn_82D9AB30(reinterpret_cast<const hkpConstraintAtom *>(&m_atoms), 0x9c, infoOut);
}
