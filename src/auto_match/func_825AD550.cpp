#include "stdext/xmemory.h"
extern "C" {
void *memmove(void *, const void *, unsigned int);
void fn_8265CA20(void *);
__declspec(noreturn) void fn_82F622A8(const char *);
}
typedef void *Elt;
struct Deque { void *proxy; Elt *map; unsigned int mapsize, off, size; };
static Elt *copy(Elt *first, Elt *last, Elt *dest) {
 unsigned int n = last - first;
 return (Elt *)memmove(dest, first, n * sizeof(Elt)) + n;
}
static void fill(Elt *first, unsigned int n) {
 if (n != 0) { for (; 0 < n; --n, ++first) *first = 0; }
}
static __forceinline Elt *allocate(unsigned int count) {
 void *ptr=0;
 if (count<=0) count=0;
 else if (0x3fffffffU<count || (ptr=fn_8265C9E0(count*4))==0) stdext::bad_alloc(0)._Raise();
 return (Elt *)ptr;
}
extern "C" void fn_825AD550(Deque *self) {
 Deque &d = *self; unsigned int n = 1;
 unsigned int old = d.mapsize;
 if (0x2aaaaaaU - old < n) fn_82F622A8("deque<T> too long");
 unsigned int grow = old / 2;
 if (grow < 8) grow = 8;
 if (n < grow && old <= 0x2aaaaaaU - grow) n = grow;
 unsigned int off = self->off;
 unsigned int total=old+n;
 Elt *p=allocate(total);
 Elt *out = copy(self->map + off, self->map + self->mapsize, p + off);
 if (off <= n) {
  out = copy(self->map, self->map + off, out);
  fill(out, n - off);
  fill(p, off);
 } else {
  copy(self->map, self->map + n, out);
  out = copy(self->map + n, self->map + off, p);
  fill(out, n);
 }
 if (self->map != 0) fn_8265CA20(self->map);
 self->map = p;
 d.mapsize += n;
}
