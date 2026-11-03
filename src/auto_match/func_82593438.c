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
typedef struct { unsigned __int64 q[8]; } S64B_82593438;
typedef struct { int a, b, c; } R12_82593438;
extern void fn_82574438(void *, unsigned int, int, S64B_82593438 *);
extern R12_82593438 fn_8255AA78(S64B_82593438);

static __forceinline int Get_82593438(unsigned int p)
{
  unsigned int a = *(unsigned int *)(p + 0x4c);
  unsigned int b;
  if (a == 0) return 0;
  b = *(unsigned int *)(p + 0x8c0);
  if (b == 0) return 0;
  return *(int *)((*(int *)(a + 0x44) + 0x20) * 4 + b);
}

void fn_82593438(unsigned int param_1, void *param_2, R12_82593438 *param_3)
{
  S64B_82593438 s;

  fn_82574438(param_2, param_1 + 0xf0, Get_82593438(param_1), &s);
  { R12_82593438 t = fn_8255AA78(s); *param_3 = t; }
}
