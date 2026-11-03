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
extern unsigned char fn_82ABE190(unsigned int *);
int fn_82AC8A78(int param_1, unsigned int param_2)
{
  unsigned int *p;
  if ((*(unsigned int *)(param_1 + 8) >> 1 & param_2 & 0xf) != 0) {
    p = *(unsigned int **)(param_1 + 4);
    for (;;) {
      int ok;
      if (p != 0) ok = 1; else ok = 0;
      if (!ok) break;
      if (p[4] != 0 && fn_82ABE190(p) != 0 &&
          (((*p >> 0xd & 0xff0) ^ param_2) & 0xfffffff0) == 0) {
        return 1;
      }
      p = (unsigned int *)p[2];
    }
  }
  return 0;
}
