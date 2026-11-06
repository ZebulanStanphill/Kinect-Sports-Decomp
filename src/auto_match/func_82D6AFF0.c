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
extern unsigned int *auStack_80;
extern int fn_82CE6768();


void fn_82D6AFF0(int *param_1,int *param_2,int *param_3,unsigned param_4,unsigned param_5)

{
  int iVar1;
  struct {int data[2]; undefined1 *buffer; int *object;} context;
  undefined1 auStack_80 [64];
  
  iVar1 = *param_1;
  fn_82CE6768(auStack_80,param_1[2],iVar1 + 0x30);
  context.object = param_1;
  context.buffer = auStack_80;
  context.data[0] = *(int *)(iVar1 + 0x14);
  context.data[1] = 0;
  (*(code *)((uint)*(byte *)((*(int *)(context.data[0] + 0xc) + 0xd) * 0x20 +
                               *(int *)(*param_2 + 0xc) + *param_3) * 0x14 + *param_3 + 0x9ac))
            (&context,param_2,param_3,param_4,param_5);
  return;
}

