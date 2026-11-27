// hkpMoppBvTreeShape::hkpMoppBvTreeShape(hkFinishLoadedObjectFlag), the out-of-line finish constructor
// (Physics/Collide/Shape/Compound/Tree/Mopp/hkpMoppBvTreeShape.cpp). When finishing it sets HK_SHAPE_MOPP and
// copies the code's offset, data pointer and size. Its finish function and getVtable function call it.
#include "havok/hkpMoppBvTreeShape.h"

hkpMoppBvTreeShape::hkpMoppBvTreeShape(hkFinishLoadedObjectFlag f) : hkMoppBvTreeShapeBase(f), m_child(f)
{
    if (f.m_finishing == 1) {
        m_type = HK_SHAPE_MOPP;
        m_codeInfoCopy.m_quad = m_code->m_info.m_offset.m_quad;
        m_moppData = m_code->m_data.m_data;
        m_moppDataSize = m_code->m_data.m_size;
    }
}
