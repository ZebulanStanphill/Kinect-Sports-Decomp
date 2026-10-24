// Adjustor thunk in hkpConvexPieceShape's hkpShapeContainer vtable (subobject at +0x14): adjusts this and tail-calls
// the scalar deleting destructor with the same flags. The compiler emits it with the vtable as
// ??_EhkpConvexPieceShape@@WBE@AAPAXI@Z, branching to the weak alias ??_EhkpConvexPieceShape@@UAAPAXI@Z, while
// symbols.txt names that address after the scalar deleting destructor (??_G..., func_82D6FD20.cpp). A qualified call
// of MSVC's scalar deleting destructor member __delDtor references ??_G directly; at the unit's /O1 it stays a tail
// call (/O2 inlines the 0x70-byte ??_G). The class declaration is that of func_82D6FD20.cpp, without the constructor
// definition that emits the vtable there.
#include "havok/hkpShape.h"

class hkVector4;

class hkpConvexPieceShape : public hkpConvexShape, public hkpShapeContainer {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_SHAPE);
    hkpConvexPieceShape(hkReal radius);

    virtual const hkpShapeContainer *getContainer() const;
    virtual int getNumChildShapes() const;
    virtual hkpShapeKey getFirstKey() const;
    virtual hkpShapeKey getNextKey(hkpShapeKey oldKey) const;
    virtual const hkpShape *getChildShape(hkpShapeKey key, hkpShapeBuffer &buffer) const;

    int m_numVertices;                  // +0x18
    const hkVector4 *m_vertices;        // +0x1C
    const hkpShape *m_displayMesh;      // +0x20
    int m_numDisplayShapeKeys;          // +0x24
    hkpShapeKey *m_displayShapeKeys;    // +0x28
};

extern "C" void *fn_82D6FD18(char *self, unsigned int flags)
{
    return ((hkpConvexPieceShape *)(self - 0x14))->hkpConvexPieceShape::__delDtor(flags);
}
