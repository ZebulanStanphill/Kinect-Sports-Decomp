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
void fn_82886F60(uint **param_1,int param_2,uint v)
{
  uint *p = param_1[param_2];
  uint lo = p[0];
  uint cur = p[1];
  if (lo > cur) {
    if (v <= cur) return;
    if (v >= lo) return;
  } else {
    if (v <= cur && v >= lo) return;
  }
  p[1] = v;
}
