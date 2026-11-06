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
extern unsigned int *auStack_38;
extern void fn_822315A0(unsigned int);
extern unsigned int *fn_822EFBF0(unsigned char *, unsigned int);
extern void fn_823A72A8(unsigned int *, unsigned int, unsigned int, unsigned int);
extern int fn_822F20C0(int, unsigned int, float, unsigned int);

typedef struct {
  unsigned int a;
  unsigned int b;
  unsigned char buf[4];
  unsigned int c;
} Stk_822F1550;

int fn_822F1550(int param_1)
{
  Stk_822F1550 s;
  unsigned int *puVar3;
  unsigned int uVar1;
  unsigned int uVar2;
  int uVar4;
  unsigned int t;

  uVar4 = 0;
  t = *(unsigned int *)(*(unsigned int *)(param_1 + 0x10) + 0x84);
  if (t != 0) {
    uVar1 = *(unsigned int *)(*(unsigned int *)(param_1 + 0xc) + 0x2c);
    uVar2 = *(unsigned int *)(*(unsigned int *)(param_1 + 0xc) + 0x28);
    puVar3 = fn_822EFBF0(s.buf, t);
    fn_823A72A8(&s.a, *puVar3, uVar2, uVar1);
    if (s.c != 0) {
      fn_822315A0(s.c);
    }
    if (s.a != 0) {
      uVar4 = fn_822F20C0(param_1, *(unsigned int *)(*(unsigned int *)(param_1 + 0x10) + 0x1e4),
                          *(float *)(s.a + 0xc), *(unsigned int *)(s.a + 0x10));
    }
    if (s.b != 0) {
      fn_822315A0(s.b);
    }
  }
  return uVar4;
}
