// hkpPointToPlaneConstraintData::getConstraintInfo(ConstraintInfo &) const: slot +0x3C of ??_7hkpPointToPlaneConstraintData@@6B@ (the name is Havok's; the slot is
// placed by what the function does, see hkpConstraintData.h). It passes the atoms and their size up to the end of the last
// atom (0x94 bytes, Havok's Atoms::getSizeOfAllAtoms) to 82D9AB30 (hkpConstraintData::getConstraintInfoUtil in
// Havok; it keeps its fn_ name).
#include "havok/hkpPointToPlaneConstraintData.h"

extern "C" void fn_82D9AB30(const hkpConstraintAtom *atoms, int sizeOfAllAtoms, hkpConstraintData::ConstraintInfo &infoOut);

void hkpPointToPlaneConstraintData::getConstraintInfo(ConstraintInfo &infoOut) const
{
    fn_82D9AB30(reinterpret_cast<const hkpConstraintAtom *>(&m_atoms), 0x94, infoOut);
}
