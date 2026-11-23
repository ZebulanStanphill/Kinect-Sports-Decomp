#include "havok/hkBase.h"

extern "C" {void fn_82E14BC8(void*,void*);void fn_82CE7EE0(void*); }
struct String:hkArrayBase<char> {char buffer[32];String():hkArrayBase<char>(hkFinishLoadedObjectFlag()){fn_82CE7EE0(this);}~String(){this->_clearAndDeallocate(hkMemoryRouter::getInstance().temp());}};
class Resource {public:virtual void a();virtual void b();virtual void c();virtual void d();virtual const char* name(void*);};
class hkContainerResourceMap {public: virtual ~hkContainerResourceMap(); hkContainerResourceMap(void*); hkStringMap<Resource *> map;};
hkContainerResourceMap::hkContainerResourceMap(void* resource) :map() {

 hkArray<Resource*> items; fn_82E14BC8(resource,&items);
 for(int i=0;i<items.m_size;++i) { Resource* r=items[i]; String name; const char* n=r->name(&name);map.insert(n, r); }
}
