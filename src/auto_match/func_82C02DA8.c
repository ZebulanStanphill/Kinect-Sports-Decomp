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
extern unsigned fn_8265C940(int, int);

int fn_82C02DA8(unsigned *param_1, unsigned *param_2)
{
  int hr;
  unsigned iVar2;

  hr = (*(int (**)(unsigned *))(*param_1 + 0x3c))(param_1);
  if (hr >= 0) {
    param_1[0x1c] = param_2[2];
    param_1[0x1d] = param_2[3];
    param_1[0x1e] = param_2[5];
    if (param_2[6] != 0) {
      param_1[0xa5] = param_2[6];
    }
    iVar2 = fn_8265C940(0x10000, 0x208c8017);
    param_1[0xb] = iVar2;
    if (iVar2 == 0) {
      hr = 0x8007000e;
    } else {
      if (param_2[0] != 0) {
        hr = (*(int (**)(unsigned *, unsigned))(*param_1 + 0x44))(param_1, param_2[0]);
      }
      if (hr >= 0) {
        if (param_2[1] != 0) {
          hr = (*(int (**)(unsigned *, unsigned))(*param_1 + 0x48))(param_1, param_2[1]);
        }
        if (hr >= 0) {
          return hr;
        }
      }
    }
  }
  (*(int (**)(unsigned *))(*param_1 + 0x3c))(param_1);
  return hr;
}
