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
extern void fn_822315A0(unsigned);
extern int fn_8236D498(unsigned);
extern void fn_828BB690(void *, int, int);
extern int fn_828EDC90(int, int, int);

typedef struct { unsigned first; unsigned second; } Pair_828B6778;

unsigned fn_828B6778(int param_1, int param_2, unsigned *param_3)
{
  unsigned r;
  int v;
  unsigned char ok;
  Pair_828B6778 pr;

  ok = *(char *)(param_1 + 0x4c) == 0 && *(int *)(param_1 + 0x20) == 0;
  r = ok;
  if (r) {
    fn_828BB690(&pr, *(int *)(param_1 + 0x14), param_2);
    v = *(int *)(pr.first + 8);
    r = fn_8236D498(*param_3);
    r = fn_828EDC90(*(int *)(param_1 + 0x50), v, r);
    if (pr.second != 0) {
      fn_822315A0(pr.second);
    }
  }
  if (param_3[1] != 0) {
    fn_822315A0(param_3[1]);
  }
  return r;
}
