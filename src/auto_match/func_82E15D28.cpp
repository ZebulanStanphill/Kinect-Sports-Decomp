#include "havok/hkBase.h"

extern "C" {void fn_82D00388(void*,hkContainerHeapAllocator); void fn_82E14BC8(void*,void*);void fn_82CE7EE0(void*); void fn_82D000A0(void*,const char*,void*);}
struct String:hkArrayBase<char> {char buffer[32];String():hkArrayBase<char>(hkFinishLoadedObjectFlag()){fn_82CE7EE0(this);}~String(){this->_clearAndDeallocate(hkMemoryRouter::getInstance().temp());}};
class Resource {public:virtual void a();virtual void b();virtual void c();virtual void d();virtual const char* name(void*);};
extern "C" void fn_82D00388(void*,hkContainerHeapAllocator);
struct Map {char data[12]; Map(){fn_82D00388(this,hkContainerHeapAllocator());}};
class hkContainerResourceMap {public: virtual ~hkContainerResourceMap(); hkContainerResourceMap(void*); Map map;};
hkContainerResourceMap::hkContainerResourceMap(void* resource) :map() {

 hkArray<Resource*> items; fn_82E14BC8(resource,&items);
 for(int i=0;i<items.m_size;++i) { Resource* r=items[i]; String name; const char* n=r->name(&name);fn_82D000A0(&map,n,r); }
}
