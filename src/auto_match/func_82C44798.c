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
extern void fn_82C2B590(unsigned int);

void fn_82C44798(unsigned int *p)
{
  int i;
  if (p[0] != 0) {
    fn_82C2B590(p[0]);
    p[0] = 0;
  }
  if (p[3] != 0) {
    fn_82C2B590(p[3]);
    p[3] = 0;
  }
  if (p[5] != 0) {
    fn_82C2B590(p[5]);
    p[5] = 0;
  }
  for (i = 0; i < 6; i++) p[i] = 0;
}
