#include "havok/hkBase.h"
class EntityMap {public: int *data;int size,cap;};

extern "C" void fn_82CEA480(void*);extern "C" void fn_82CEA160(void*,hkMemoryAllocator*,int,int);
class hkEntitySelectorListed {public:HK_DECLARE_PLACEMENT_ALLOCATOR(); virtual ~hkEntitySelectorListed();EntityMap map;hkEntitySelectorListed(hkFinishLoadedObjectFlag) {}};
extern "C" hkEntitySelectorListed *fn_82DF85B8(hkEntitySelectorListed *self,const int *p,int n) {
 union{void *ptr;char buf[sizeof(hkEntitySelectorListed)];}u;hkFinishLoadedObjectFlag f;new(u.buf)hkEntitySelectorListed(f);*(void**)self=u.ptr;
 EntityMap &map=self->map;
 map.data=0;map.size=0;map.cap=-1;EntityMap *m=&map;fn_82CEAB00(m,&hkMemoryRouter::getInstance().heap(),0);fn_82CEA480(m);fn_82CEAB00(m,&hkMemoryRouter::getInstance().heap(),n);
 if(n>0){--p;do{int v=*++p;fn_82CEA160(m,&hkMemoryRouter::getInstance().heap(),v,1);}while(--n);}
 return self;
}
