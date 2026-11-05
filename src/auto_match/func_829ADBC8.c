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
extern int fn_829AD570();


int fn_829ADBC8(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1[0x69];
  *(undefined4 *)(*param_1 + 0x14) = 0x79;
  *(int *)(*param_1 + 0x18) = iVar1;
  *(int *)(*param_1 + 0x1c) = param_2;
  (*(code *)(*param_1 + 4))(param_1,0xffffffff);
  do {
    if(iVar1<0xc0) iVar2=2;
    else {
      if(iVar1<0xd0 || iVar1>0xd7 || iVar1==((param_2+1)&7)+0xd0 || iVar1==((param_2+2)&7)+0xd0) iVar2=3;
      else if(iVar1==((param_2-1)&7)+0xd0 || iVar1==((param_2-2)&7)+0xd0) iVar2=2;
      else iVar2=1;
    }
    *(undefined4 *)(*param_1 + 0x14) = 0x61;
    *(int *)(*param_1 + 0x18) = iVar1;
    *(int *)(*param_1 + 0x1c) = iVar2;
    (*(code *)(*param_1 + 4))(param_1,4);
    switch(iVar2) {
    case 1:param_1[0x69]=0;return 1;
    case 2: if(fn_829AD570(param_1)==0) return 0; iVar1=param_1[0x69];break;
    case 3:return 1;
    }
  } while(1);
}
