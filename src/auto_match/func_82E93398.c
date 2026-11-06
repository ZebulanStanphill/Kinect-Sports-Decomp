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
int fn_82E93398(char *self, int flag, long long off)
{
  int ret = 0;
  long long t;
  if (flag != 0) {
    t = *(long long *)(self + 0x1e20) - *(long long *)(self + 0x1e38) + off;
  } else {
    t = *(long long *)(self + 0x1e28) + *(long long *)(self + 0x1e20);
  }
  if (!(*(int *)(self + 0x1e10) != 0 && t < *(long long *)(self + 0x1e18) && *(int *)(self + 0x4c08) == 0))
    ret = 1;
  return ret;
}
