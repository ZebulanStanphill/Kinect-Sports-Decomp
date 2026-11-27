// hkpPointToPathConstraintData::getConstraintInfo(ConstraintInfo &) const: slot +0x3C of ??_7hkpPointToPathConstraintData@@6B@ (the name is Havok's; the slot is
// placed by what the function does, see hkpConstraintData.h). The bridge atoms, and a fixed schema
// size and solver counts.
#include "havok/hkpPointToPathConstraintData.h"

void hkpPointToPathConstraintData::getConstraintInfo(ConstraintInfo &infoOut) const
{
    infoOut.m_atoms = reinterpret_cast<hkpConstraintAtom *>(const_cast<hkpBridgeAtoms *>(&m_atoms));
    infoOut.m_sizeOfAllAtoms = sizeof(hkpBridgeAtoms);
    infoOut.m_maxSizeOfSchema = 0;
    infoOut.m_sizeOfSchemas = 0x180;
    infoOut.m_numSolverResults = 7;
    infoOut.m_numSolverElemTemps = 8;
}
