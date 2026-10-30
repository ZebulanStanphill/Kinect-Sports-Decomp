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
typedef struct SP_823B0C20 { void *ptr; void *rc; } SP_823B0C20;
typedef struct Obj_823B0C20 {
  char p0[0xa8]; int fa8;
  char p1[0xd0 - 0xac]; int fd0, fd4, fd8, fdc, fe0, fe4;
  char p2[0xf8 - 0xe8]; int ff8, ffc, f100, f104, f108, f10c, f110;
  char p3[0x154 - 0x114]; int f154;
  char p4[0x18c - 0x158]; int f18c;
  char p5[0x1e4 - 0x190]; SP_823B0C20 s1e4;
  char p6[0x240 - 0x1ec]; int f240;
  char p7[0x2b0 - 0x244]; int f2b0; SP_823B0C20 s2b4; int f2bc;
} Obj_823B0C20;
extern void fn_822315A0(void *);

static void reset_(SP_823B0C20 *s)
{
  void *rc = s->rc;
  s->rc = 0;
  s->ptr = 0;
  if (rc != 0) fn_822315A0(rc);
}

void fn_823B0C20(Obj_823B0C20 *o, int flag)
{
  if (flag != 0) {
    o->f240 = 0;
    o->f18c = 0;
  }
  o->fa8 = 0;
  o->fd0 = 0;
  o->fd4 = 0;
  o->fd8 = 0;
  o->fdc = 0;
  o->fe0 = 0;
  o->fe4 = 0;
  o->ff8 = 0;
  o->ffc = 0;
  o->f100 = 0;
  o->f104 = 0;
  o->f108 = 0;
  o->f10c = 0;
  o->f110 = 0;
  reset_(&o->s1e4);
  reset_(&o->s2b4);
  o->f2bc = 0;
  o->f2b0 = 0;
  o->f154 = 1;
}
