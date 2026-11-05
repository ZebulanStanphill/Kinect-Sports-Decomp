extern char lbl_83160558[];
extern char lbl_83160538[];
extern char lbl_83160548[];
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
extern int fn_82A29A38();
extern int fn_82AB0600();


void fn_82AB0978(uint param_1,int param_2,int *param_3)

{
  int iVar1;
  uint *puVar2;
  unsigned int uVar3;
  uint uVar5;
  unsigned int uVar4;
  
  iVar1 = *(int *)(param_2 + 0x10);
  if (param_1 >= 0xffff0200) {
    fn_82A29A38();
  }
  uVar5 = 0;
  if (*(unsigned *)(param_2 + 8) > 0) {
    do {
      if ((*(uint *)(param_2 + 0xc) >> uVar5 & 1) != 0) {
        puVar2 = (uint *)*param_3;
        if (uVar5 >= 0x10) {
          fn_82A29A38();
        }
        *puVar2 = (uVar5 & 0xff) << 0x10 | 0x8000019;
        *param_3 = (int)(puVar2 + 1);
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < *(uint *)(param_2 + 8));
  }
  uVar4 = 0;
  if (*(unsigned *)(param_2 + 4) > 0) {
    do {
      if ((*(uint *)(iVar1 + 0xc4) >> uVar4 & 1) != 0) {
        fn_82AB0600(uVar4 + 2,5,uVar4,0,(unsigned)lbl_83160558,0xf0000,param_2,param_3);
      }
      uVar4 = uVar4 + 1;
    } while ((uVar4 & 0xffffffff) < (unsigned int)*(uint *)(param_2 + 4));
  }
  uVar5 = 0;
  do {
    if (*(unsigned *)((uVar5 + 4) * 8 + iVar1) != 0) {
      if(uVar5==0) uVar3=(unsigned)lbl_83160538; else uVar3=(unsigned)lbl_83160548;
      fn_82AB0600(uVar5,10,uVar5,1,uVar3,0xf0000,param_2,param_3);
    }
    uVar5 = uVar5 + 1;
  } while (uVar5 < 2);
  return;
}

