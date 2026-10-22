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
extern unsigned int *auStack_20;
extern int fn_822315A0();
extern int fn_82279C58();
extern int fn_82672C20();
extern unsigned int iStack_1c;
extern float lbl_821CC160;


void fn_8227B5E0(int param_1)

{
  undefined4 *puVar1;
  struct { int value; void *owner; } local;
  
  if ((*(int *)(param_1 + 0xa48) != 5) && (*(int *)(param_1 + 0xa60) != 0)) {
    puVar1 = (undefined4 *)fn_82279C58(&local,param_1);
    fn_82672C20(*puVar1,"_root.mainCtrl.hide",0,0);
    if (local.owner != 0) {
      fn_822315A0(local.owner);
    }
    *(undefined4 *)(param_1 + 0xa48) = 5;
    *(float *)(param_1 + 0xa4c) = lbl_821CC160;
  }
  return;
}

