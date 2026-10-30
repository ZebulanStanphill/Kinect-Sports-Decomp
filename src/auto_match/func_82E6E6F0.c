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
int fn_82E6E6F0(int param_1, int *param_2, ulonglong param_3)
{
  int hr;
  ulonglong size;

  if (param_2 == (int *)0) {
    return 0x80004003;
  }
  else {
    size = 0;
    hr = (*(code *)(*param_2 + 0x10))(param_2, &size);
    if (hr >= 0) {
      if (param_3 > size) {
        hr = 0xc00d36bb;
      }
      else {
        *(int **)(param_1 + 8) = param_2;
        (*(code *)(*param_2 + 4))(param_2);
        *(ulonglong *)(param_1 + 0x10) = param_3;
        *(ulonglong *)(param_1 + 0x20) = size - param_3;
      }
    }
  }
  return hr;
}
