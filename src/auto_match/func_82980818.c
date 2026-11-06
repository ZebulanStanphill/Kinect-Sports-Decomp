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
extern unsigned fn_82930318(unsigned);
extern unsigned fn_829304E0(unsigned,unsigned,unsigned,const char *);
extern unsigned fn_82932B38(unsigned);
extern unsigned fn_82933088(unsigned,unsigned,unsigned,unsigned,unsigned,unsigned,unsigned);


unsigned int fn_82980818(int param_1)

{
  unsigned iVar2;
  unsigned int uVar1;
  unsigned iVar3;
  
  if (*(unsigned *)(param_1 + 0x20) != 0) {
    iVar2 = fn_82930318(0x34);
    iVar2 = iVar2 ? fn_82932B38(iVar2) : 0;
    if (iVar2 != 0) {
      *(undefined4 *)(iVar2 + 0x10) = 6;
      *(undefined4 *)(iVar2 + 0x30) = *(undefined4 *)(param_1 + 0x70);
      *(int *)(param_1 + 0x70) = *(int *)(param_1 + 0x70) + 1;
      uVar1 = fn_82930318(0x50);
      iVar3 = uVar1 ? fn_82933088(uVar1,0,0,0,0,1,param_1 + 0x28) : 0;
      if (iVar3 != 0) {
        *(int *)(iVar2 + 0x18) = iVar3;
        uVar1 = fn_82930318(0x14);
        uVar1 = uVar1 ? fn_829304E0(uVar1,iVar2,0,"Stmts") : 0;
        if ((uVar1) != 0) {
          return uVar1;
        }
      }
    }
  }
  return 0;
}

