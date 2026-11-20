#include "havok/hkArrayUtil.h"

typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;
typedef struct { __vector4 *data; int size; unsigned int cap; } Vec_82D40130;
extern "C" int fn_82CF6B28(__vector4 *, __vector4 *, int);

extern "C" void fn_82D40130(Vec_82D40130 *v, int ctx, int pos, int rem, __vector4 *src, int n)
{
  int size = v->size;
  int cap = v->cap & 0x3fffffff;
  int newsize = size - rem + n;
  int cnt = size - pos - rem;
  __vector4 *d;
  if (cap < newsize) { hkArrayUtil::_reserve(*reinterpret_cast<hkMemoryAllocator *>(ctx), v, (newsize < cap * 2) ? cap * 2 : newsize, 0x10); }
  fn_82CF6B28(v->data + pos + n, v->data + pos + rem, cnt * 0x10);
  d = v->data + pos;
  if (n > 0) {
    int k = n;
    int off = (char *)src - (char *)d;
    do { *d = *(__vector4 *)((char *)d + off); d++; k--; } while (k != 0);
  }
  v->size = newsize;
}
