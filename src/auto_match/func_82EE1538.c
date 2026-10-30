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
typedef struct Obj_82EE1538 Obj_82EE1538;
typedef struct { void *f0[12]; __int64 (*f30)(Obj_82EE1538 *, unsigned); } Vt_82EE1538;
struct Obj_82EE1538 {
  Vt_82EE1538 *vt;
  int f4, f8;
  unsigned fc;
  int f10[4];
  __int64 f20;
  char pad28[0x48 - 0x28];
  char sub[0x254 - 0x48];
  unsigned count;
};
extern int fn_82EE1048(void *sub, unsigned i, unsigned *out);

int fn_82EE1538(Obj_82EE1538 *o, __int64 *out1, __int64 *out2)
{
  unsigned i;
  unsigned v;
  __int64 total;

  if (o->fc == 0) {
    return 0xc00d36b6;
  }
  total = 0x1a;
  for (i = 0; i < o->count; i++) {
    int hr = fn_82EE1048(o->sub, i, &v);
    total += o->vt->f30(o, hr >= 0 ? v : 0);
  }
  if (out1 != 0) {
    *out1 = total;
  }
  if (out2 != 0) {
    *out2 = total;
  }
  o->f20 = total;
  return 0;
}
