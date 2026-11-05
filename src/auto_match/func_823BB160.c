typedef unsigned char undefined1;
typedef unsigned char byte;
typedef unsigned char undefined;
typedef unsigned char bool;
#define true 1
#define false 0
typedef unsigned short undefined2;
typedef unsigned short ushort;
typedef unsigned short word;
typedef unsigned int undefined4;
typedef unsigned int uint;
typedef unsigned int dword;
typedef unsigned int ulong;
typedef unsigned __int64 undefined8;
typedef unsigned __int64 ulonglong;
typedef unsigned __int64 qword;
typedef __int64 longlong;
typedef int (*code)();
typedef unsigned char U8;
typedef unsigned short U16;
typedef unsigned int U32;
typedef unsigned __int64 U64;
typedef signed char S8;
typedef signed short S16;
typedef signed int S32;
typedef __int64 S64;
typedef struct { U64 lo, hi; } V16;
extern void fn_8227CB30(void *, void *);
extern void fn_82359C18(void *);

typedef struct Fn_823BB160 Fn_823BB160;
typedef struct Impl_823BB160 Impl_823BB160;
struct Impl_823BB160 {
  struct IVT_823BB160 {
    Impl_823BB160 *(*clone)(Impl_823BB160 *, Fn_823BB160 *);
    void *f4, *f8;
    void (*del)(Impl_823BB160 *, int);
  } *vt;
};
struct Fn_823BB160 {
  int buf[4];
  Impl_823BB160 *impl;
};
typedef struct Host_823BB160 Host_823BB160;
struct Host_823BB160 {
  struct HVT_823BB160 {
    int pad[0x44 / 4];
    Host_823BB160 *(*get)(Host_823BB160 *);
  } *vt;
  int pad[0x21];
  Fn_823BB160 fn88;
};

static __forceinline void Assign_823BB160(Fn_823BB160 *dst, Fn_823BB160 *src)
{
  if (dst != src) {
    if (dst->impl != 0) {
      dst->impl->vt->del(dst->impl, (void *)dst->impl != (void *)dst);
      dst->impl = 0;
    }
    if (src->impl == 0) {
      dst->impl = 0;
    } else {
      if ((void *)src->impl == (void *)src) {
        dst->impl = src->impl->vt->clone(src->impl, dst);
      } else {
        dst->impl = src->impl->vt->clone(src->impl, 0);
      }
    }
  }
}

void fn_823BB160(Host_823BB160 *h, Fn_823BB160 *a, void *b, Fn_823BB160 *c)
{
  Host_823BB160 *o = h->vt->get(h);
  Assign_823BB160((Fn_823BB160 *)((char *)o + 0x80), a);
  o = h->vt->get(h);
  {
    char *m = (char *)o + 0xa8;
    fn_8227CB30(m + 0x50, b);
  }
  Assign_823BB160(&h->fn88, c);
  fn_82359C18(a);
  fn_82359C18(b);
  fn_82359C18(c);
}
