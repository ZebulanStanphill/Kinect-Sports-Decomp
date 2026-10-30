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
typedef struct { char pad[0xe]; unsigned short f0e; unsigned f10; } Hdr_82CD5A90;
typedef struct {
  void *a;
  void *b;
  char pad[0x3884 - 8];
  int f3884;
  char pad2[0x38d8 - 0x3888];
  int f38d8;
  char pad3[0x38f4 - 0x38dc];
  int f38f4;
  char pad4[0x391c - 0x38f8];
  int f391c;
} Ctx_82CD5A90;
extern void *fn_82C53960(int, int);
extern void fn_82C53970(void *);
extern void fn_82A1DDC0(void *, Hdr_82CD5A90 *, int);
extern void *memcpy(void *, const void *, unsigned);
extern int fn_82CD4988(Ctx_82CD5A90 *);
extern int fn_82CD4888(Ctx_82CD5A90 *);
extern int fn_82CD58C0(Ctx_82CD5A90 *);
extern void fn_82CD4788(Ctx_82CD5A90 *);

static void CopyHdr_82CD5A90(void *dst, Hdr_82CD5A90 *src)
{
  if (src->f10 == 0 && src->f0e == 8) {
    fn_82A1DDC0(dst, src, 0x428);
  } else if (src->f10 == 3) {
    memcpy(dst, src, 0x34);
  } else {
    memcpy(dst, src, 0x28);
  }
}

void fn_82CD5A90(int *err, Hdr_82CD5A90 *h1, Hdr_82CD5A90 *h2, Ctx_82CD5A90 *c, int arg)
{
  if (err != 0) {
    if (c == 0 || h1 == 0 || h2 == 0) {
      *err = 1;
    } else {
      c->a = 0;
      c->a = fn_82C53960(0x428, 0);
      if (c->a == 0) {
        *err = 2;
      } else {
        CopyHdr_82CD5A90(c->a, h1);
        c->b = 0;
        c->b = fn_82C53960(0x428, 0);
        if (c->b == 0) {
          *err = 2;
          if (c->a != 0) {
            fn_82C53970(c->a);
            c->a = 0;
          }
        } else {
          CopyHdr_82CD5A90(c->b, h2);
          c->f391c = arg;
          c->f38d8 = 0;
          *err = 0;
          c->f38f4 = 0;
          c->f3884 = 0;
          *err = fn_82CD4988(c);
          if (*err == 0) {
            *err = fn_82CD4888(c);
            if (*err == 0) {
              *err = fn_82CD58C0(c);
              if (*err == 0) fn_82CD4788(c);
            }
          }
        }
      }
    }
  }
}
