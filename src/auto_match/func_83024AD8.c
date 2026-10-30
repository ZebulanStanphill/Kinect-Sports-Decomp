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
extern void *fn_82A1EFC0(void *, int, unsigned);

typedef struct Obj_83024AD8 {
  char pad0[0x74];
  int f74;
  char pad78[0x100 - 0x78];
  void *f100;
  char pad104[4];
  int f108;
  char pad10c[2];
  short f10e;
  char pad110[0x168 - 0x110];
  unsigned f168;
} Obj_83024AD8;

void fn_83024AD8(Obj_83024AD8 *o)
{
  if (o->f100 != 0) {
    if (o->f108 == 0x11) o->f74 = 4; else o->f74 = 1;
    o->f108 = 0x11;
    o->f10e = 0;
  }
  fn_82A1EFC0(o->f100, 0, o->f168);
}
