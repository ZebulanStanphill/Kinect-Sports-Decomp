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
extern int fn_82E50F00();
extern int fn_82E51028();


int fn_82E52208(int param_1, int *param_2)
{
  int hr;
  unsigned int i;
  int off;
  int a;

  fn_82E50F00(param_1 + 4, 1);
  hr = (*(code *)(*param_2 + 0x50))(param_2);
  if (hr >= 0 && (i = 0, *(unsigned int *)(param_1 + 0x48) > 0)) {
    off = 0;
    do {
      a = *(int *)(param_1 + 0x40) + off;
      hr = (*(code *)(*param_2 + 0x48))(param_2, a, a + 0x10);
      if (hr < 0) break;
      i++;
      off += 0x20;
    } while (i < *(unsigned int *)(param_1 + 0x48));
  }
  fn_82E51028(param_1 + 4, 1);
  return hr;
}
