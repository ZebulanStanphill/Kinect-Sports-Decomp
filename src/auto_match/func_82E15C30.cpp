#include "havok/hkBase.h"
#include "havok/hkMemoryResourceContainer.h"
class ContainerLookup { public: virtual void v0();virtual void v1();virtual void v2();virtual void v3();virtual void v4();virtual void v5();virtual void v6();virtual void v7();virtual void v8();virtual void v9();virtual void v10();virtual void v11();virtual void v12();virtual hkMemoryResourceContainer *find(const char*,int);
};
extern "C" hkMemoryResourceContainer *fn_82E15C30(hkMemoryResourceContainer *self,const char *name) {
 hkMemoryResourceContainer *r=((ContainerLookup*)self)->find(name,0);
 if(!r) {
  r=new hkMemoryResourceContainer(name);if(r)r->addReference();
  hkArray<hkRefPtr<hkMemoryResourceContainer> > *a=&self->m_children;
  hkMemoryAllocator &al=hkMemoryRouter::getInstance().heap();if(a->m_size==a->getCapacity())hkArrayUtil::_reserveMore(al,a,4);
  hkRefPtr<hkMemoryResourceContainer> *p=a->m_data+a->m_size;if(p){if(r)r->addReference();p->m_pntr=r;}++a->m_size;
  if(r)r->removeReference();r->m_parent=self;r->removeReference();
 }
 return r;
}
