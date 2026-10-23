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
hkpBroadPhaseBorder::~hkpBroadPhaseBorder() {
 hkReferencedObject **p=m_phantoms;
 int n=6;
 do { if (*p) {(*p)->removeReference(); *p=0;} ++p; } while (--n);
}
