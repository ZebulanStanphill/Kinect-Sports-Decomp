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
extern int fn_82EEF590();
extern char lbl_82154B28[];
extern char lbl_8214C120[];

int fn_82E7C6C0(int param_1, int *param_2)
{
  int iVar1;
  int hr;
  int *piStack_30;
  unsigned int iStack_2c;
  int auStack_28;

  piStack_30 = (int *)0;
  hr = 0;
  auStack_28 = 0;
  iStack_2c = 0;
  if (param_2 == (int *)0) {
    hr = 0x80004003;
  }
  else {
    iVar1 = (*(code *)(**(int **)(param_1 + 4) + 0x10))(*(int **)(param_1 + 4), lbl_82154B28, 0, &piStack_30);
    if (iVar1 >= 0 && (hr = fn_82EEF590(piStack_30, &iStack_2c, &auStack_28), hr >= 0) && iStack_2c != 0) {
      hr = (*(code *)(*param_2 + 0x68))(param_2, lbl_8214C120, auStack_28, iStack_2c);
    }
    if (piStack_30 != (int *)0) {
      (*(code *)(*piStack_30 + 8))(piStack_30);
    }
  }
  return hr;
}
