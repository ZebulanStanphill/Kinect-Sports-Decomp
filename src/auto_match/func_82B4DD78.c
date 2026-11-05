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
extern int fn_82AA6648();


uint * fn_82B4DD78(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  int iVar4;
  int uVar5;
  
  if (param_2[1] & 1) { puVar3 = 0; } else { puVar3=(uint *)((*param_2 & ~1u)-4); }
  iVar4 = puVar3[2] + 1;
  uVar5 = puVar3[2] - 1;
  {int off=iVar4*8;uVar2=*(uint *)(off+(uint)puVar3);uVar1=*(uint *)(off+(uint)puVar3+4);}
  puVar3[2] = uVar5;
  *param_1 = uVar2;
  param_1[1] = uVar1;
  if (uVar5 == 0) {
    uint *p=(uint *)((uint)puVar3 & ~1u);
    *(uint *)(p[1] & ~1u)=*p;
    *(uint *)(*p & ~1u)=p[1];
    fn_82AA6648(param_2,puVar3,(puVar3[3]+2)*8);
  }
  return param_1;
}

