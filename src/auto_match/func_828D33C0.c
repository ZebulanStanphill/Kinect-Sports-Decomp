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
typedef struct Obj_828D33C0 {
  void *vt;
  char pad4[0x4c];
  void *f50;
  char pad54[0x2c];
  int f80;
  int f84;
  float f88;
} Obj_828D33C0;

extern int fn_828BDDA0();
extern unsigned int lbl_82025988;
extern unsigned int lbl_82025990;

Obj_828D33C0 * fn_828D33C0(Obj_828D33C0 *self, float x, int a)
{
  fn_828BDDA0(self);
  self->f88 = x;
  self->f84 = a;
  self->vt = &lbl_82025990;
  self->f50 = &lbl_82025988;
  self->f80 = 1;
  return self;
}
