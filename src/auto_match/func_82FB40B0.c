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
typedef struct Obj_82FB40B0 {
  void *vt;
  char pad4[0x2c];
  unsigned f30;
  char pad34[0xc];
  int f40;
  unsigned char f44;
  char pad45[3];
  int f48;
  int f4c;
  unsigned char f50;
} Obj_82FB40B0;

extern void fn_82FAA6E0(Obj_82FB40B0 *, int, int, void *);
extern unsigned int lbl_8216D7E4;

Obj_82FB40B0 * fn_82FB40B0(Obj_82FB40B0 *self, int x, int y, void *ref, unsigned char flag)
{
  fn_82FAA6E0(self, x, y, ref);
  self->f50 = flag;
  self->f48 = 0;
  self->vt = &lbl_8216D7E4;
  self->f4c = 1;
  self->f40 = 0;
  self->f44 = 0;
  self->f30 = self->f30 & 0x7fffffff;
  return self;
}
