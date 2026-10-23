#include "havok/hkBase.h"
extern "C" { void fn_82CEDB38(void *,const char *); void fn_82CE63B0(hkMemoryAllocator *,void *,int); void fn_82CE75A8(void *,void *,void *); void fn_82CE7240(void *); }
class Allocator { public:
 virtual void f0(); virtual void f1(); virtual void f2(); virtual void f3(); virtual void f4();
 virtual void f5(); virtual void f6(); virtual void f7(); virtual void f8(); virtual void f9();
 virtual void f10(); virtual void f11(); virtual void f12(); virtual void f13(); virtual void f14();
 virtual void f15(); virtual void f16(); virtual void f17(); virtual void f18(); virtual void f19(); virtual int allocated();
};
struct hkContainerDebugAllocator {
    static HK_FORCE_INLINE hkMemoryAllocator &get(const void *) { return hkMemoryRouter::getInstance().debug(); }
};
template <typename T>
static HK_FORCE_INLINE void constructWithCopy(T *p, int n, const T &tcopy)
{
    for (int i = 0; i < n; ++i) {
        p[i] = tcopy;
    }
}
template <typename T, typename A = hkContainerDebugAllocator>
class Arr : public hkArrayBase<T> {
public:
    HK_FORCE_INLINE void pushBackUnchecked(const T &e)
    {
        constructWithCopy(this->m_data + this->m_size, 1, e);
        this->m_size++;
    }
    HK_FORCE_INLINE void _pushBack(hkMemoryAllocator &alloc, const T &e)
    {
        if (this->m_size == this->getCapacity()) {
            fn_82CE63B0(&alloc, this, sizeof(T));
        }
        pushBackUnchecked(e);
    }
    HK_FORCE_INLINE void pushBack(const T &e) { _pushBack(A::get(this), e); }
};
struct Entry { char pad0[0x130 - 0x12c - 8 + 0x12c]; };
struct Overview { int total; Arr<void *> allocators; Arr<int> sizes; int used, allocated; Overview():total(0),used(0),allocated(0) {} };
extern "C" void fn_82CE70C0(char *self,void *out) {
 fn_82CEDB38(out,"hkFreeListMemorySystem memory overview:\n");
 fn_82CEDB38(out,"=======================================\n\n");
 Overview info;
 info.allocated=((Allocator *)(self+0x1c))->allocated();
 info.total=*(int *)(self+0x974);
 int *p=(int *)(self+0xc08); int n=32;
 do {
  if(*(unsigned char *)(p-2)) {
   info.allocators.pushBack(p-0x4b);
   info.sizes.pushBack(*p);
  }
  p+=0x4c;
 } while(--n);
 fn_82CE75A8(self,out,&info); fn_82CE7240(&info);
}
