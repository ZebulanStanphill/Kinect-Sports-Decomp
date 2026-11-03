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
extern unsigned fn_82EEB288(int);
extern void fn_82EEB480(int, int, unsigned *);
extern void fn_82EEB4D8(int);

int fn_82EEB540(int param_1, unsigned param_2, unsigned param_3, unsigned param_4, int param_5)
{
  unsigned uVar1;
  unsigned p;

  if (param_2 < 1 || param_3 < 1 || param_4 < 1) {
    return 0x80070057;
  }
  if (*(unsigned *)(param_1 + 0x24) != 0) {
    fn_82EEB4D8(param_1);
  }
  *(int *)(param_1 + 0x20) = param_5;
  if (param_5 != 0 && param_4 > 1) {
    param_4 = 1;
  }
  *(unsigned *)(param_1 + 0x10) = param_3;
  uVar1 = (param_2 + 0x27) & 0xffffffe0;
  *(unsigned *)(param_1 + 0x18) = uVar1;
  *(int *)(param_1 + 0x28) = 0x18;
  *(unsigned *)(param_1 + 0x14) = (param_2 + 7) & 0xfffffff8;
  *(int *)(param_1 + 0x2c) = 8;
  *(int *)(param_1 + 0x1c) = 0;
  *(unsigned *)(param_1 + 0xc) = uVar1 * param_3 + 0x30;
  *(int *)(param_1 + 0x24) = 1;
  while (param_4 != 0) {
    param_4--;
    p = fn_82EEB288(param_1);
    if (p == 0) {
      fn_82EEB4D8(param_1);
      break;
    }
    fn_82EEB480(param_1, param_1, &p);
  }
  return *(int *)(param_1 + 0x24) == 0 ? 0x8007000e : 0;
}
