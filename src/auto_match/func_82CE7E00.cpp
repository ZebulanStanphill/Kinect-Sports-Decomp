#include "havok/hkArrayUtil.h"

typedef struct { char pad[0xc]; void *alloc; } Ctx;
typedef struct { char *data; int len; unsigned int flags : 2; unsigned int cap : 30; } Str;
extern "C" Ctx *fn_82CE5410(void);

extern "C" void fn_82CE7E00(Str *s, int len)
{
  int n = len + 1;
  void *a = fn_82CE5410()->alloc;
  if ((int)s->cap < n) {
    int c = s->cap * 2;
    hkArrayUtil::_reserve(*reinterpret_cast<hkMemoryAllocator *>(a), s, n < c ? c : n, 1);
  }
  s->len = n;
  s->data[len] = 0;
}
