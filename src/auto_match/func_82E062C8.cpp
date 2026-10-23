#include "havok/hkBase.h"
class hkxNode;
extern "C" void fn_82E04A30(hkxNode *);
struct Annotation { int time; hkStringPtr text; };
struct Matrix { char data[64]; };
class hkxNode {
public:
 template<class T> static HK_FORCE_INLINE void clear(hkArrayBase<T> *a) { a->_clearAndDeallocate(hkMemoryRouter::getInstance().heap()); }
 virtual HK_FORCE_INLINE ~hkxNode() {
  ((hkStringPtr *)&asset)->~hkStringPtr();
  clear(&annotation);
  clear(&children);
  clear(&transforms);
  ((hkRefPtr<hkReferencedObject> *)&object)->~hkRefPtr<hkReferencedObject>();
  ((hkStringPtr *)&name)->~hkStringPtr();
  fn_82E04A30(this);
 }
 union StringSlot { char bytes[4]; }; union RefSlot { char bytes[4]; };
 int pad[4]; StringSlot name; RefSlot object;
 hkArrayBase<Matrix> transforms; hkArrayBase<hkRefPtr<hkReferencedObject> > children;
 hkArrayBase<Annotation> annotation; StringSlot asset;
};
extern "C" void fn_82E062C8(hkxNode *p) {p->hkxNode::~hkxNode();}
