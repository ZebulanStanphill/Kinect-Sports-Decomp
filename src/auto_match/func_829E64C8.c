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
extern int fn_829E7EA0(int *,unsigned,unsigned,unsigned);
extern unsigned fn_829E82F0(unsigned,unsigned,unsigned);
extern unsigned fn_829E8330(unsigned,unsigned,unsigned);
extern int fn_829E8390(unsigned,int *,unsigned,unsigned,unsigned);


void fn_829E64C8(int param_1,unsigned int param_2,unsigned param_3,unsigned int param_4,
                  unsigned param_5,unsigned int param_6,undefined4 *param_7,unsigned int param_8)

{
  int iVar3; int *sub=(int *)(param_1+4);
  unsigned uVar1;
  unsigned uVar2;
  undefined4 uVar4;
  
  iVar3 = fn_829E7EA0(sub,param_2,param_3,param_4);
  if (iVar3 >= 0) {
    uVar1=fn_829E8330(*(undefined4 *)(param_1+0x18),param_3,param_4);
    
    fn_829E8390(*(undefined4 *)(param_1+0x18),sub,param_8,fn_829E82F0(*(undefined4 *)(param_1+0x18),param_5,param_6),uVar1);
    *param_7=*(undefined4 *)(param_1+0x10);
  } else {*param_7=0;}

  return;
}

