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
extern unsigned int *auStack_220;
extern unsigned int *auStack_230;
void __debugbreak(void);
extern char lbl_821C24F0[];
extern int fn_82CED958();
extern int fn_82CEDB38();
extern int fn_82CEDCF0();
extern int fn_82CEE578();
extern unsigned int *lbl_8323B464;


unsigned int fn_82D0B378(int param_1,unsigned int param_2)

{
  undefined4 uVar1;
  undefined8 in_r0;
  unsigned int uVar2;
  int iVar3;
  undefined1 auStack_230 [16];
  undefined1 auStack_220 [512];
  
  iVar3 = *(int *)(param_1 + 8);
  if (*(char *)(iVar3 + 0x1b5) == '\0') {
    fn_82CEE578(auStack_230,auStack_220,0x200);
    uVar1 = *(undefined4 *)(iVar3 + 0x1b0);
    uVar2 = fn_82CEDB38(auStack_230,"No index available (");
    uVar2 = fn_82CEDCF0(uVar2,uVar1);
    fn_82CEDB38(uVar2,lbl_821C24F0);
    iVar3 = (*(code *)(*lbl_8323B464 + 0xc))
                      (lbl_8323B464,3,0x79f9d886,auStack_220,".\\GeometryProcessing\\ConvexHull\\hkgpConvexHull.cpp",0x146);
    if (iVar3 != 0) {
      __debugbreak();
    }
                    /* WARNING: Subroutine does not return */
    fn_82CED958(auStack_230);
  }
  return *(uint *)(*(int *)(param_1 + 8) + 0x54) + param_2 * 0x10;
}

