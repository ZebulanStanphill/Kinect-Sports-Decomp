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
extern void fn_823B4970(int, int, int, int);
extern int fn_828E9D90(int);
extern int fn_828E9DA8(int);
extern int fn_828E9FF8(int, int);

static __forceinline int ReadBits(int w, int n)
{
  int v;
  if (fn_828E9DA8(w) - fn_828E9D90(w) >= n) {
    v = fn_828E9FF8(w, n);
  } else {
    v = 0;
  }
  return v;
}

void fn_828CD6A0(int param_1, int param_2)
{
  *(int *)(param_1 + 0x84) = ReadBits(param_2, 8);
  *(int *)(param_1 + 0x88) = ReadBits(param_2, 5);
  *(char *)(param_1 + 0x8c) = ReadBits(param_2, 1) != 0;
  fn_823B4970(param_1 + 0x98, param_2, ReadBits(param_2, 0xd), 0);
}
