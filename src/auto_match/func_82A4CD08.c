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
extern int fn_82A4F4E0(void *);
extern int fn_82A5DDA0();
extern void *memset(void *, int, unsigned);

typedef struct Obj_82A4CD08 {
  char pad0[0x28];
  char f28[8];
  void *f30;
  char pad1[0x50 - 0x34];
  int f50, f54;
  float f58, f5c, f60, f64;
} Obj_82A4CD08;

void fn_82A4CD08(Obj_82A4CD08 *o)
{
  fn_82A5DDA0();
  o->f50 = 0;
  o->f54 = 0;
  o->f58 = 0.0f;
  if (o->f64 < o->f5c) {
    o->f64 = o->f5c;
  }
  if (o->f64 > o->f60) {
    o->f64 = o->f60;
  }
  if (o->f30 != 0) {
    fn_82A4F4E0(o->f30);
    o->f30 = 0;
  }
  memset((char *)o + 0x28, 0, 0x28);
}
