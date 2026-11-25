#include "havok/hkpShape.h"
#include "havok/hkVector4.h"
class hkpBvTreeShape : public hkpShape {
public:
 hkpBvTreeShape(hkFinishLoadedObjectFlag f):hkpShape(f) { if(f.m_finishing) {m_type=8; bvType=2;} }
 unsigned char bvType; char pad[3];
};
struct MoppCode { char pad[16]; hkVector4 offset; int size; void *data; };
class hkMoppBvTreeShapeBase : public hkpBvTreeShape {
public:
 hkMoppBvTreeShapeBase(hkFinishLoadedObjectFlag f):hkpBvTreeShape(f) { if(f.m_finishing) bvType=0; }
 MoppCode *code; int size; void *data; hkVector4 offset;
};
class hkpMoppBvTreeShape : public hkMoppBvTreeShapeBase {
public:
 HK_FORCE_INLINE hkpMoppBvTreeShape(hkFinishLoadedObjectFlag f);
 hkpSingleShapeContainer child;
};
HK_FORCE_INLINE hkpMoppBvTreeShape::hkpMoppBvTreeShape(hkFinishLoadedObjectFlag f):hkMoppBvTreeShapeBase(f),child(f) {
 if(f.m_finishing==1) {m_type=10;offset.m_quad=code->offset.m_quad;size=code->size;data=code->data;}
}
extern "C" hkpMoppBvTreeShape *fn_82D3A7D8(hkpMoppBvTreeShape *self, hkFinishLoadedObjectFlag f) {
 self->hkpMoppBvTreeShape::hkpMoppBvTreeShape(f);
 return self;
}
