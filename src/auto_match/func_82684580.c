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
extern int fn_8267B890();
extern int fn_8267C4F0();
extern int fn_82685F70();
extern int fn_82687C88();
extern int fn_826E66E8();
extern unsigned int lbl_82005A34;
extern unsigned int lbl_831E7E64;


void fn_82684580(int *param_1,uint *param_2)

{
  uint uVar1;
  unsigned uVar2;
  unsigned iVar3;
  undefined4 *puVar4;
  unsigned allocated;
  
  uVar1 = *param_2;
  param_1[3] = uVar1;
  uVar1 = uVar1 >> 0x1c & 1;
  uVar2 = fn_8267B890(lbl_831E7E64,0x14,0);
  if (uVar2 != 0) {
    iVar3 = fn_82687C88(uVar2,uVar1);
  }
  else { iVar3 = 0; }
  param_1[2] = iVar3;
  uVar2 = fn_8267B890(lbl_831E7E64,0x44,0);
  if (uVar2 != 0) {
    iVar3 = fn_826E66E8(uVar2,param_1[2],uVar1);
  }
  else { iVar3 = 0; }
  param_1[1] = iVar3;
  if (iVar3 != 0) {
    (*(code *)(*param_1 + 8))(param_1,10,param_2[1]);
    allocated = fn_8267B890(lbl_831E7E64,0x10,0);
    if (allocated != 0) {
      unsigned *memory=(unsigned *)allocated;
      memory[1] = 1;
      memory[2] = 0xd;
      *memory = (unsigned)&lbl_82005A34;
      memory[3] = 0;
      puVar4=memory;
    } else {puVar4=0;}
    (*(code *)(*param_1 + 8))(param_1,0xd,puVar4);
    if (puVar4 != (undefined4 *)0x0) {
      fn_8267C4F0(puVar4);
    }
    (*(code *)(*param_1 + 8))(param_1,0x1e,param_2[2]);
    (*(code *)(*param_1 + 8))(param_1,0x1d,param_2[3]);
    uVar2 = fn_8267B890(lbl_831E7E64,0x18,0);
    if (uVar2 != 0) { uVar2 = fn_82685F70(uVar2,uVar1); } else { uVar2=0; }
    (*(code *)(*param_1 + 8))(param_1,0x10,uVar2);
    if ((uVar2 & 0xffffffff) != 0) {
      fn_8267C4F0(uVar2);
    }
  }
  return;
}

