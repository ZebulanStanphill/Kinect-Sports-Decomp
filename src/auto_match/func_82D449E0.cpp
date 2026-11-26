#include "havok/hkBase.h"
#include "havok/hkpCollisionFilter.h"

class hkpCollisionFilterList:public hkpCollisionFilter {public:hkArrayBase<hkpCollisionFilter*> filters;hkpCollisionFilterList(const hkArrayBase<hkpCollisionFilter*>&);};
static void copyArray(hkArrayBase<hkpCollisionFilter*> &d,const hkArrayBase<hkpCollisionFilter*> &s) {
 hkMemoryAllocator &al=hkMemoryRouter::getInstance().heap();int cap=d.getCapacity();
 if(cap<s.m_size){if((d.m_capacityAndFlags & (int)0x80000000)==0)al.bufFree(d.m_data,cap,4);int n=s.m_size;d.m_data=(hkpCollisionFilter**)al.bufAlloc(n,4);d.m_capacityAndFlags=n;}
 int n=s.m_size;hkpCollisionFilter **dest=d.m_data;d.m_size=n;hkpCollisionFilter **src=s.m_data;for(int i=0;i<n;++i)dest[i]=src[i];
}
hkpCollisionFilterList::hkpCollisionFilterList(const hkArrayBase<hkpCollisionFilter*>& src) { m_type=3;copyArray(filters,src);for(int i=0;i<filters.m_size;++i)filters.m_data[i]->addReference(); }
