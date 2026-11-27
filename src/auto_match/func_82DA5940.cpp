// hkpStiffSpringChainData::getConstraintInfo(ConstraintInfo &) const: slot +0x3C of ??_7hkpStiffSpringChainData@@6B@ (the name is Havok's; the slot is
// placed by what the function does, see hkpConstraintData.h). The bridge atoms; the schema size and
// the solver counts grow with the number of links.
#include "havok/hkpStiffSpringChainData.h"

void hkpStiffSpringChainData::getConstraintInfo(hkpConstraintData::ConstraintInfo &infoOut) const
{
    infoOut.clear();
    infoOut.m_atoms = reinterpret_cast<hkpConstraintAtom *>(const_cast<hkpBridgeAtoms *>(&m_atoms));
    infoOut.m_sizeOfAllAtoms = sizeof(hkpBridgeAtoms);
    infoOut.m_sizeOfSchemas = 0x10;
    int n = m_infos.getSize();
    infoOut.m_numSolverResults = n;
    infoOut.m_sizeOfSchemas = ((n * 0x50 + 0x33) & ~0xf) + 0x10;
    infoOut.m_numSolverElemTemps = n;
}
