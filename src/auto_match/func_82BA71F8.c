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
extern unsigned int *fn_82B7BD28(unsigned int, int);
typedef struct N { int a; int b; int c; int d; int e; int f; } N;
N *fn_82BA71F8(int param_1, int param_2)
{
  unsigned int uVar1;
  unsigned int *puVar2;
  N *n;
  N *r;
  int uVar4;
  uVar4 = 4;
  if (*(char *)(param_1 + 5) == 0) uVar4 = 2;
  uVar1 = *(unsigned int *)(param_2 + 0x5a8);
  puVar2 = fn_82B7BD28(uVar1, 0x1c);
  n = (N *)(puVar2 + 1);
  *puVar2 = uVar1;
  if (n != 0) {
    n->a = param_2;
    n->b = uVar4;
    n->c = 1;
    n->f = 0;
    r = n;
  } else {
    r = 0;
  }
  r->d = param_1;
  r->c = 1;
  r->e = 0;
  return r;
}
