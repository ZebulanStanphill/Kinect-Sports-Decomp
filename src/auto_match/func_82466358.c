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
extern int fn_8225F160();
extern int fn_8251CDF8(int, int, int, void *);

void fn_82466358(int param_1)
{
  struct { int a, b, c; } L;

  switch (*(unsigned *)(param_1 + 8)) {
  case 1:
    *(int *)(fn_8225F160() + 8) = 1;
    *(int *)(fn_8225F160() + 0x40) = 1;
    *(int *)(fn_8225F160() + 0x64) = 2;
    *(int *)(fn_8225F160() + 0x5c) = 1;
    break;
  case 0:
    *(int *)(fn_8225F160() + 8) = 2;
    *(int *)(fn_8225F160() + 0x40) = 2;
    *(int *)(fn_8225F160() + 0x64) = 1;
    *(int *)(fn_8225F160() + 0x5c) = 2;
    break;
  }
  if (*(int *)(param_1 + 0x1c) == 5) {
    *(int *)(fn_8225F160() + 0x30) = 1;
  } else {
    *(int *)(fn_8225F160() + 0x30) = 0;
  }
  L.a = 0;
  L.b = 0;
  L.c = 0;
  fn_8251CDF8(0, param_1, 0, &L);
}
