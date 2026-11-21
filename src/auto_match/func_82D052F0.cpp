#include "havok/hkString.h"
#include "havok/hkArrayUtil.h"

struct ctx {
  int pad[3];
  void *alloc;
};

struct str {
  char *data;
  int len;
  unsigned int cap;
  char buf[0x20];
};

extern "C" struct ctx *fn_82CE5410(void);

extern "C" struct str *fn_82D052F0(struct str *s, const char *src, int n)
{
  int len;
  void *alloc;
  int cap;
  int newcap;

  s->data = s->buf;
  s->cap = 0x80000020;
  s->len = 0;
  len = n + 1;
  alloc = fn_82CE5410()->alloc;
  cap = s->cap & 0x3fffffff;
  if (cap < len) {
    newcap = cap * 2;
    hkArrayUtil::_reserve(*reinterpret_cast<hkMemoryAllocator *>(alloc), s, len < newcap ? newcap : len, 1);
  }
  s->len = len;
  s->data[n] = 0;
  hkString::memCpy(s->data, src, n);
  return s;
}
