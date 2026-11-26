#include "havok/hkBase.h"
#include "havok/hkMultiThreadCheck.h"
#include "havok/hkCriticalSection.h"
extern "C" void fn_82CEFB30(void *);
class hkReferencedObjectLock : public hkReferencedObject {public:
 int a,b; hkMultiThreadCheck m_check; hkCriticalSection m_cs;
 virtual ~hkReferencedObjectLock();
 HK_FORCE_INLINE hkReferencedObjectLock() : m_cs(4000) {a=1;fn_82CEFB30(&m_check);b=0;}
};
extern "C" hkReferencedObjectLock *fn_82CE4530(hkReferencedObjectLock *p) {p->hkReferencedObjectLock::hkReferencedObjectLock(); return p;}
