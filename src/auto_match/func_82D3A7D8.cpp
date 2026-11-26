// hkpMoppBvTreeShape::hkpMoppBvTreeShape(hkFinishLoadedObjectFlag) (Physics/Collide/Shape/Compound/Tree/Mopp/
// hkpMoppBvTreeShape.cpp): known in the game only as fn_82D3A7D8. When finishing it sets HK_SHAPE_MOPP and copies
// the code's offset, data pointer and size. The header declares the constructor; it is defined here,
// HK_FORCE_INLINE, inside the extern "C" function.
#include "havok/hkpMoppBvTreeShape.h"

HK_FORCE_INLINE hkpMoppBvTreeShape::hkpMoppBvTreeShape(hkFinishLoadedObjectFlag f) : hkMoppBvTreeShapeBase(f), m_child(f)
{
    if (f.m_finishing == 1) {
        m_type = HK_SHAPE_MOPP;
        m_codeInfoCopy.m_quad = m_code->m_info.m_offset.m_quad;
        m_moppData = m_code->m_data.m_data;
        m_moppDataSize = m_code->m_data.m_size;
    }
}

extern "C" hkpMoppBvTreeShape *fn_82D3A7D8(hkpMoppBvTreeShape *self, hkFinishLoadedObjectFlag f)
{
    self->hkpMoppBvTreeShape::hkpMoppBvTreeShape(f);
    return self;
}
