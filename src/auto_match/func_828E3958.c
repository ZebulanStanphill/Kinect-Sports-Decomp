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
extern int fn_8289EE00();
extern int fn_828DF768();


undefined4 * fn_828E3958(undefined4 *param_1,int param_2,undefined4 *param_3,uint param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  struct {unsigned node; unsigned char ok;} result;
  
  uVar1 = *param_3;
  iVar2 = fn_8289EE00(param_2);
  if ((undefined4 *)(iVar2 + 0xc) != (undefined4 *)0x0) {
    unsigned *value=(unsigned *)(iVar2+0xc); value[0]=uVar1; value[1]=param_4;
  }
  fn_828DF768(&result.node,param_2,iVar2,0);
  *(char *)(param_1 + 1) = result.ok;
  puVar3 = (undefined4 *)(result.ok ? 0 : param_4);
  *param_1 = result.node;
  if (puVar3 != (undefined4 *)0x0) {
    (*(code *)*puVar3)(puVar3,1);
  }
  return param_1;
}

