// hkpConvexTranslateShape (Physics/Collide/Shape/Convex/ConvexTranslate/hkpConvexTranslateShape.h), 0x30 bytes:
// a convex child moved by a translation. The size and m_translation (+0x20) are the game's hkClass
// (initialiser 8312D3D0). The finish constructor stores HK_SHAPE_CONVEX_TRANSLATE whether finishing or not
// (finishLoadedObject 82D39EA8).
#ifndef HAVOK_HKPCONVEXTRANSLATESHAPE_H
#define HAVOK_HKPCONVEXTRANSLATESHAPE_H

#include "havok/hkBase.h"
#include "havok/hkVector4.h"
#include "havok/hkpConvexTransformShapeBase.h"

class hkpConvexTranslateShape : public hkpConvexTransformShapeBase {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_SHAPE);
    hkpConvexTranslateShape(hkFinishLoadedObjectFlag flag) : hkpConvexTransformShapeBase(flag)
    {
        m_type = HK_SHAPE_CONVEX_TRANSLATE;
    }

    HK_FORCE_INLINE const hkVector4 &getTranslation() const { return m_translation; }

    hkVector4 m_translation;   // +0x20
};

#endif
