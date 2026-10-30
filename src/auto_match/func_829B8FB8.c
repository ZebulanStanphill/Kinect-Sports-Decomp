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
extern int fn_829B0F38();


typedef struct Obj_829B8FB8 {
  char pad[0x55c];
  unsigned f55c;
  char pad2[0x600 - 0x560];
  unsigned f600;
  char pad3[0x60c - 0x604];
  unsigned char f60c;
} Obj_829B8FB8;

unsigned int fn_829B8FB8(Obj_829B8FB8 *o)
{
  int on;
  unsigned char b[4];

  on = 1;
  if ((o->f60c & 0x20) != 0) {
    if ((o->f55c & 0x300) == 0x300) {
      on = 0;
    }
  } else {
    on = (o->f55c & 0x800) ? 0 : on;
  }
  fn_829B0F38(o, b, 4);
  if (on) {
    on = (((b[0] * 0x100 + b[1]) * 0x100 + b[2]) * 0x100 + b[3]) != o->f600;
  } else {
    on = 0;
  }
  return on;
}
