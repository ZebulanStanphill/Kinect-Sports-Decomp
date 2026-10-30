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
extern unsigned fn_829B5140(unsigned);

void fn_829AB308(char *param_1)
{
  int ok = 1;
  if ((*(unsigned char *)(param_1 + 0x60c) & 0x20) != 0) {
    if ((*(unsigned *)(param_1 + 0x55c) & 0x300) == 0x300) {
      ok = 0;
    }
  } else if ((*(unsigned *)(param_1 + 0x55c) & 0x800) != 0) {
    ok = 0;
  }
  if (ok) *(unsigned *)(param_1 + 0x600) = fn_829B5140(*(unsigned *)(param_1 + 0x600));
}
