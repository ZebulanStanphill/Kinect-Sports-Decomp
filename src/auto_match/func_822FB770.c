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
typedef struct { union { char buf[16]; char *ptr; } u; unsigned int size; unsigned int cap; } Str_822D89D0;
extern int fn_822B83D0(int, unsigned int);
extern unsigned int fn_82560010(int, const char *);

void fn_822FB770(int param_1)
{
  Str_822D89D0 *s = (Str_822D89D0 *)(param_1 + 0x5c);
  unsigned int r;
  int *q;

  q = *(int **)(param_1 + 0x58);
  r = fn_82560010(*q, s->cap >= 0x10 ? s->u.ptr : s->u.buf);
  fn_822B83D0(*(int *)(param_1 + 0x54), r);
}
