#include "havok/hkBase.h"
class hkBatchArrays:public hkReferencedObject {
public: HK_FORCE_INLINE ~hkBatchArrays() {} hkArray<int> a,b,c;
};
extern "C" void fn_82DCA028(hkBatchArrays *self) { self->c.~hkArray();self->b.~hkArray();self->a.~hkArray();self->hkReferencedObject::~hkReferencedObject(); }
