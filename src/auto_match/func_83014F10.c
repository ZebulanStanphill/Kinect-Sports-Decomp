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
extern int _blkmov();


void fn_83014F10(uint *param_1,unsigned int param_2)
{
  unsigned int p, e;
  p = (param_2 * 3) * 4 + (unsigned int)*param_1;
  e = param_1[1] - 0xc;
  if (p < e) {
    _blkmov(p, p + 0xc, ((e - p - 1) / 0xc + 1) * 0xc);
  }
  param_1[1] = param_1[1] - 0xc;
}
