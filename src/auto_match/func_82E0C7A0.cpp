#include "havok/hkBase.h"
class hkBinaryPackfileReader;
extern "C" { void fn_82E12A48(hkBinaryPackfileReader *); void fn_82E0E0A8(void *, unsigned); }
class hkBinaryPackfileReader {
public:
 template<class T> static HK_FORCE_INLINE void clear(hkArrayBase<T> *a) { a->_clearAndDeallocate(hkMemoryRouter::getInstance().heap()); }
 virtual HK_FORCE_INLINE ~hkBinaryPackfileReader() {
  if (owned) delete owned;
  if (other) fn_82E0E0A8(other,1);
  object->removeReference();
  if(ref) ref->removeReference();
  ref=0;
  clear(&array);
  fn_82E12A48(this);
 }
 int pad[5]; hkReferencedObject *object; int pad2[2];
 hkArrayBase<int> array; int pad3[17]; void *other; hkBaseObject *owned; hkReferencedObject *ref;
};
extern "C" void fn_82E0C7A0(hkBinaryPackfileReader *p) { p->hkBinaryPackfileReader::~hkBinaryPackfileReader(); }
