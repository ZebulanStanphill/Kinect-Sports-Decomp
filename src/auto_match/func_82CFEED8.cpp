#include "havok/hkArrayUtil.h"

extern "C" int fn_82CE5410();
extern "C" void fn_82CFC050(void *, const void *, int);
typedef struct Str_82CFEED8 { char *data; int size; unsigned int capf; } Str_82CFEED8;
typedef struct Ctx_82CFEED8 { char pad[0x10]; void *alloc; } Ctx_82CFEED8;
typedef struct Buf_82CFEED8 { int pad[2]; Str_82CFEED8 *str; int pos; } Buf_82CFEED8;

extern "C" int fn_82CFEED8(Buf_82CFEED8 *b, void *src, int n)
{
  Str_82CFEED8 *s = b->str;
  int size = s->size;
  int len = size - b->pos;
  int newsize;
  int need;
  int cap;
  void *alloc;

  if (n > len) {
    newsize = (size - len) + n;
    need = newsize + 1;
    alloc = ((Ctx_82CFEED8 *)fn_82CE5410())->alloc;
    cap = (int)(s->capf & 0x3fffffff);
    if (cap < need) {
      cap = cap << 1;
      hkArrayUtil::_reserve(*reinterpret_cast<hkMemoryAllocator *>(alloc), s, need < cap ? cap : need, 1);
    }
    b->str->size = newsize;
    b->str->data[newsize] = 0;
  }
  else if ((int)(s->capf & 0x3fffffff) > size) {
    s->data[size] = 0;
  }
  fn_82CFC050(b->str->data + b->pos, src, n);
  b->pos += n;
  return n;
}
