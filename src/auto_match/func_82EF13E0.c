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
typedef struct { int v; int w; } It_82EF13E0;
extern int fn_82EF1198(int, int *, It_82EF13E0 *, It_82EF13E0 *);
extern void fn_82EF1220(int, void *, void *);

int fn_82EF13E0(int param_1, unsigned param_2, int *param_3)
{
  int iVar2;
  int *piVar3;
  It_82EF13E0 it;
  It_82EF13E0 it2;

  if (param_2 == 0 || param_3 == 0) {
    return 0x80070057;
  }
  piVar3 = (int *)(param_1 + 4);
  while (1) {
    iVar2 = fn_82EF1198(param_1 + 8, piVar3, &it, &it2);
    if (iVar2 == 0) break;
    *piVar3 = *piVar3 + 1;
  }
  iVar2 = *piVar3;
  it.v = iVar2;
  fn_82EF1220(param_1 + 8, &it, &param_2);
  fn_82EF1220(param_1 + 0x94, &param_2, &it);
  *param_3 = iVar2;
  return 0;
}
