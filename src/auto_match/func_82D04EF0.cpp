#include "havok/hkArrayUtil.h"

extern "C" int fn_82CE5410();
extern "C" void fn_82CF68D0(void *, int, int);

typedef struct { char *data; int len; unsigned int cap; } Str;

extern "C" void fn_82D04EF0(Str *s, int src, int n)
{
  int need = n + 1;
  int heap = *(int *)(fn_82CE5410() + 0xc);
  int cap = s->cap & 0x3fffffff;
  if (cap < need) {
    int nc = cap * 2;
    hkArrayUtil::_reserve(*reinterpret_cast<hkMemoryAllocator *>(heap), s, need < nc ? nc : need, 1);
  }
  s->len = need;
  s->data[n] = 0;
  fn_82CF68D0(s->data, src, n);
}
