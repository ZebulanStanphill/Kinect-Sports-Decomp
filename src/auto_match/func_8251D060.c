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
extern int fn_82596850();
extern unsigned int lbl_8327F644[];
extern unsigned int lbl_832960A0[];



void fn_8251D060(void)

{
  unsigned iVar1;
  
  if (!(lbl_832960A0[59] == 0)) {
    iVar1 = *(int *)(lbl_832960A0[59] + 4);
  } else {
    iVar1 = 0;
  }
  if (iVar1 != 0) {
    if (lbl_8327F644[13] != iVar1) {
      lbl_8327F644[13] = iVar1;
    }
    fn_82596850(iVar1);
    if ((*(code *)(lbl_832960A0+71)) != (code *)0x0) {
      (*(*(code *)(lbl_832960A0+71)))(iVar1);
    }
  }
  return;
}

