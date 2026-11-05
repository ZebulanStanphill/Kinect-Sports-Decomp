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
extern void fn_83078C68(char *, int, double);

void fn_83079040(char *param_2, int param_1, double param_3)
{
  char *lVar1;
  unsigned uVar2;
  char *p;

  uVar2 = 0;
  p = param_2 + 0x10;
  do {
    if (((int)uVar2 < 0) || (uVar2 >= 0x48)) {
      lVar1 = 0;
    } else lVar1 = p;
    fn_83078C68(lVar1, param_1, param_3);
    uVar2 = uVar2 + 1;
    p = p + 400;
  } while (uVar2 < 0x48);
}
