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
extern int fn_82BE5340();
extern int fn_82BE5350(iVar2);
extern int fn_82BE5378();
extern int fn_82BE5398();


int fn_82BEB838(int param_1,undefined4 *param_2)
{
  undefined4 *item;
  int list = param_1 + 0x14;
  fn_82BE5340(list);
  for (item = (undefined4 *)fn_82BE5378(list); item != 0; item = (undefined4 *)fn_82BE5378(list)) {
    if (item == param_2) {
      fn_82BE5398(list, *(undefined4 *)(param_1+0x1c), 1);
      if (item != 0) (*(code *)*item)(item,1);
      return 0;
    }
    fn_82BE5350(list);
  }
  return 0x3e9;
}
