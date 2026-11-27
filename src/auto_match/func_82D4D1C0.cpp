// hkpRemoveTerminalsMoppModifier::applyRemoveTerminals(hkpMoppCode *) (Physics/Collide/Shape/Compound/Tree/Mopp/
// Modifiers/hkpRemoveTerminalsMoppModifier.cpp), /O1: for each recorded terminal (code offset << 8), saves the
// code byte in the entry's low byte and clears it in the code.
#include "havok/hkpRemoveTerminalsMoppModifier.h"
#include "havok/hkpMoppCode.h"

void hkpRemoveTerminalsMoppModifier::applyRemoveTerminals(hkpMoppCode *code)
{
    for (int i = 0; i < m_removeInfo.getSize(); i++) {
        hkUint32 &info = m_removeInfo[i];
        hkUint8 *byte = const_cast<hkUint8 *>(&code->m_data[info >> 8]);
        hkUint8 v = *byte;
        reinterpret_cast<hkUint8 *>(&info)[3] = 0;
        info |= v;
        *byte = 0;
    }
}
