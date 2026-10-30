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
typedef struct Dst_82774840 { char pad0[0x1c]; int f1c; int f20; char pad1[0x40 - 0x24]; char sub[1]; char pad2[0x9c0 - 0x41]; int f9c0; char pad3[4]; float f9c8; } Dst_82774840;
extern void fn_82773EC0(void *, float);
extern void fn_827B8068(void *, int, int, int, int, int, int, int);
extern void *memcpy(void *, const void *, unsigned);

typedef struct O_82774840 {
  char pad0[0xc];
  char blk[0x1c];
  int f28;
  int f2c_unused;
  int f30_unused;
  int f34;
  float f38;
  float f3c;
  int f40;
  Dst_82774840 *f44;
} O_82774840;

void fn_82774840(O_82774840 *o, int *src)
{
  memcpy(o->blk, (unsigned char *)src, 0x1c);
  fn_827B8068(o->f44->sub, src[0], src[1], src[2], src[3], src[4], src[5], src[6]);
  o->f44->f9c0 = o->f34;
  fn_82773EC0(o->f44, o->f38);
  o->f44->f9c8 = o->f3c;
  {
    int v = o->f40;
    Dst_82774840 *d = o->f44;
    d->f20 = v;
    d->f1c = v;
  }
}
