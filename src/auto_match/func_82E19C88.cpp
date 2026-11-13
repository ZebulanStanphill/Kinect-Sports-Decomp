#include "havok/hkBase.h"
extern "C" void fn_82CE63B0(hkMemoryAllocator *,void *,int);
template <typename T> static HK_FORCE_INLINE void constructWithCopy(T *t, int n, const T &tcopy) { for (int i = 0; i < n; ++i) t[i] = tcopy; }
struct Quad_82E19C88 { int a; int b; int c; int d; };
class Output : public hkArrayBase<Quad_82E19C88> { public: HK_FORCE_INLINE void push(const Quad_82E19C88 &v) {
 hkMemoryAllocator &alloc=hkMemoryRouter::getInstance().heap();
 if (m_size == getCapacity()) fn_82CE63B0(&alloc,this,sizeof(Quad_82E19C88));
 constructWithCopy(m_data + m_size, 1, v);
 m_size++;
} };
struct Obj_82E19C88 { char pad[0xc]; Output arr; };
extern "C" void fn_82E19C88(Obj_82E19C88 *self, int a, int b, int c, int d) {
 Quad_82E19C88 v = { a, b, c, d };
 self->arr.push(v);
}
