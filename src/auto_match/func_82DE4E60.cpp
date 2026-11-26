// hkpSerializedDisplayMarkerList::~hkpSerializedDisplayMarkerList (Physics/Utilities/Serialize/Display/
// hkpSerializedDisplayMarkerList.h): removes the references to the markers, then the m_markers array is destroyed.
#include "havok/hkBase.h"
#include "havok/hkpSerializedDisplayMarker.h"
#include "havok/hkpSerializedDisplayMarkerList.h"

hkpSerializedDisplayMarkerList::~hkpSerializedDisplayMarkerList()
{
    for (int i = 0; i < m_markers.getSize(); i++)
        fn_82CE4118(m_markers[i]);   // removeReference(); the direct call keeps the original lwzx operand order
}
