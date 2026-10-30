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
typedef struct Obj_82A29AC0 { unsigned status; int val; int f8; int fc; unsigned f10; } Obj_82A29AC0;
extern unsigned fn_82A1E650(unsigned, int);
extern void fn_82A2A370(int);
extern void fn_82A2B760(unsigned);

int fn_82A29AC0(unsigned a, Obj_82A29AC0 *o, int *out, int flag)
{
  unsigned r;
  if (o->status == 0x103) {
    if (flag != 0) {
      if (o->f10 != 0) a = o->f10;
      r = fn_82A1E650(a, -1);
    } else {
      r = 0x102;
    }
    if (r == 0x102) {
      fn_82A2A370(0x3e4);
      return 0;
    }
    if (r != 0) return 0;
  }
  *out = o->val;
  r = o->status;
  if ((int)r >= 0) {
    return 1;
  }
  fn_82A2B760(r);
  return 0;
}
