#include "havok/hkBase.h"
#include "havok/hkMultiThreadCheck.h"
extern "C" void fn_82CEFBD0(void *,int);
extern "C" void fn_82CEFB30(void *);
struct hkCriticalSection { char data[0x1c]; HK_FORCE_INLINE hkCriticalSection(int spin) { fn_82CEFBD0(this, spin); } };
class hkReferencedObjectLock : public hkReferencedObject {public:
 int a,b; hkMultiThreadCheck m_check; hkCriticalSection m_cs;
 virtual ~hkReferencedObjectLock();
 HK_FORCE_INLINE hkReferencedObjectLock() : m_cs(4000) {a=1;fn_82CEFB30(&m_check);b=0;}
};
extern "C" hkReferencedObjectLock *fn_82CE4530(hkReferencedObjectLock *p) {p->hkReferencedObjectLock::hkReferencedObjectLock(); return p;}
