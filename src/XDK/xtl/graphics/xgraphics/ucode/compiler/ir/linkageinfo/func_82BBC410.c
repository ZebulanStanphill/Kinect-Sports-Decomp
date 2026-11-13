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
extern int fn_82AB15D0();



typedef struct { int a; } Z;
unsigned char fn_82BBC410(char *p, int idx)
{
  char *e;
  int r;
  if (p[0x750] == 0) {
    fn_82AB15D0(0,"Assertion failed: %s (%s:%u)","has_required_assignments","e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\compiler\\ir\\LinkageInfo.hpp",0x6b);
  }
  if (*(int *)(p + (idx + 8) * 16) != 0 || (e = p + idx * 16, *(int *)(e + 0x84) != 0) || *(int *)(e + 0x88) != 0 || *(int *)(e + 0x8c) != 0)
    r = 1;
  else
    r = 0;
  return r;
}
