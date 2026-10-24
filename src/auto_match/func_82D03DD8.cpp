#include "havok/hkBase.h"
class hkMemoryBlockServer;
class hkFreeListAllocatorServer { public: virtual ~hkFreeListAllocatorServer() {} };
class hkLargeBlockAllocator : public hkFreeListAllocatorServer { public:
 HK_DECLARE_PLACEMENT_ALLOCATOR();
 HK_FORCE_INLINE hkLargeBlockAllocator(hkMemoryBlockServer *server);
 virtual void *blockAlloc(int); virtual void blockFree(void*,int);
 int m_a,m_b,m_c; void *m_top; int m_e; void *m_bins[32]; hkMemoryBlockServer *m_server; int m_g; int m_h; void *m_next,*m_prev; int m_other[4]; int m_last,m_end;
};
hkLargeBlockAllocator::hkLargeBlockAllocator(hkMemoryBlockServer *server) : m_server(server) {
 m_a=0; m_end=0; m_last=0; m_b=0; m_c=0;
 for(int i=0;i<32;++i) m_bins[i]=0;
 m_g=0; m_prev=&m_next; m_top=&m_g; m_h=3; m_e=0; m_next=&m_next;
}

extern "C" hkLargeBlockAllocator *fn_82D03DD8(hkLargeBlockAllocator *self,hkMemoryBlockServer *server) {self->hkLargeBlockAllocator::hkLargeBlockAllocator(server);return self;}
