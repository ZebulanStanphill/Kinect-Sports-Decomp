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
extern void *fn_82E50BE8(unsigned, int, int, int, int);
typedef unsigned __int64 u64;
typedef struct O O;
typedef struct {
  char pad[0x10]; int (*f10)(O *, u64 *);
  char pad2[0x54 - 0x14]; int (*f54)(O *);
  char pad3[0x60 - 0x58]; int (*f60)(O *, u64, void *, unsigned, unsigned *);
} VT;
struct O {
  VT *vt; int pad4; void *f8; int padc; u64 f10; int pad18[4]; unsigned f28; int pad2c; u64 f30; void *f38; int f3c;
};
int fn_82E6E790(O *o, u64 off)
{
  u64 size; unsigned n; unsigned got; int hr;
  if (o->f8 != 0) {
    if (o->f38 == 0) {
      o->f38 = fn_82E50BE8(o->f28, 0, 0, 0, 0);
      if (o->f38 == 0) return 0x8007000e;
    }
    if (o->f3c == 0 && (hr = o->vt->f54(o)) < 0) return hr;
    size = 0;
    hr = o->vt->f10(o, &size);
    if (hr < 0) return hr;
    n = o->f28;
    if (n + off > size) n = (unsigned)size - (unsigned)off;
    got = 0;
    hr = o->vt->f60(o, o->f10 + off, o->f38, n, &got);
    if (hr < 0) return hr;
    o->f30 = off;
    if (got == n) return hr;
  }
  return 0xc00d36bb;
}
