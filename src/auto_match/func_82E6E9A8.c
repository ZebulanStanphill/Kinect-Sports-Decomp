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
typedef struct Obj_82E6E9A8 {
  int *vt;
  int pad1[5];
  unsigned __int64 cur;
  int pad2[4];
  unsigned __int64 base;
  unsigned end;
} Obj_82E6E9A8;
extern void *memcpy(void *, const void *, unsigned);

int fn_82E6E9A8(Obj_82E6E9A8 *self, void *dst, unsigned n, unsigned *out)
{
  if (out == 0) {
    return 0x80004003;
  }
  *out = 0;
  if (dst != 0 && n != 0) {
    if ((*(int (**)(Obj_82E6E9A8 *, unsigned __int64, unsigned))((char *)self->vt + 0x64))(self, self->cur, n) != 0) {
      memcpy(dst, (const void *)((unsigned)self->end - (unsigned)self->base + (unsigned)self->cur), n);
      *out = n;
      return 0;
    }
    return 0xc00d36bf;
  }
  return 0;
}
