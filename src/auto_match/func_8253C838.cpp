#include "havok/hkBase.h"
class hkpWorldDeletionListener { public: static void operator delete(void*p){fn_8265CA20(p);} virtual ~hkpWorldDeletionListener(){} };
class hkpPhantomOverlapListener { public: static void operator delete(void*p){fn_8265CA20(p);} virtual ~hkpPhantomOverlapListener(){} };
class hkpWorldPostSimulationListener { public: static void operator delete(void*p){fn_8265CA20(p);} virtual ~hkpWorldPostSimulationListener(){} };
class hkpBroadPhaseBorder : public hkReferencedObject, public hkpWorldDeletionListener, public hkpPhantomOverlapListener, public hkpWorldPostSimulationListener {
public:
 HK_DECLARE_CLASS_ALLOCATOR(0);
 ~hkpBroadPhaseBorder();
 int m_flags; hkReferencedObject *m_phantoms[6]; int m_pad[2]; hkArray<int> m_array;
};

class Border_8253C838 : public hkpBroadPhaseBorder {
public:
 hkArray<int> m_a;
 hkArray<int> m_b;
};

extern "C" Border_8253C838 *fn_8253C838(Border_8253C838 *self, unsigned flags)
{
 self->m_b.~hkArray();
 self->m_a.~hkArray();
 self->hkpBroadPhaseBorder::~hkpBroadPhaseBorder();
 if (flags & 1) {
  hkMemoryRouter::getInstance().heap().blockFree(self, self->m_memSizeAndFlags);
 }
 return self;
}
