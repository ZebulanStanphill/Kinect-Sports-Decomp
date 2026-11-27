// hkpBoxBoxManifold::hkpBoxBoxManifold (out of line; hkpBoxBoxAgent's inline constructor and the box-box agent3's
// data initialiser fn_82D67E30 call it): clears the second half-word of the eight points and the bytes at
// +0x20..+0x22, written out one store at a time (the unit is /O1).
#include "havok/hkpBoxBoxManifold.h"

hkpBoxBoxManifold::hkpBoxBoxManifold()
{
    m_contactPoints[0].m_data2 = 0;
    m_contactPoints[1].m_data2 = 0;
    m_contactPoints[2].m_data2 = 0;
    m_contactPoints[3].m_data2 = 0;
    m_contactPoints[4].m_data2 = 0;
    m_contactPoints[5].m_data2 = 0;
    m_contactPoints[6].m_data2 = 0;
    m_contactPoints[7].m_data2 = 0;
    m_numPoints = 0;
    m_data20 = 0;
    m_data22 = 0;
}
