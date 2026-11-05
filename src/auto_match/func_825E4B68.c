static __forceinline void flags_825E4B68(unsigned __int64 *p,unsigned __int64 f){*p|=f;}
typedef struct Flags_825E4B68 {unsigned __int64 bits;} Flags_825E4B68;
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
extern int fn_825313D8();
extern int fn_82544918();
extern int fn_82544F40();
extern int fn_82545098();
extern int fn_82637B30();
extern int lbl_832700EC;
extern float lbl_821954B0[];
extern unsigned int lbl_8320A898;


void fn_825E4B68(void)

{
  float uVar1; unsigned *global=&lbl_8320A898;
  int iVar2;
  ulonglong uVar3;
  
  lbl_832700EC = lbl_832700EC + 1;
  if (lbl_832700EC == 1) {
    fn_825313D8(lbl_8320A898);
    fn_82544F40();
    iVar2 = *global;
    uVar1 = lbl_821954B0[0x1b8];
    *(uint *)(lbl_8320A898 + 0x293c) = *(uint *)(lbl_8320A898 + 0x293c) | 8;
    uVar3 = *(ulonglong *)(iVar2 + 0x10);
    flags_825E4B68((ulonglong *)(iVar2+0x10),0x200);
    *(ulonglong *)(iVar2+0x10) |= 0x40000;
    iVar2 = *global;
    *(float *)(lbl_8320A898 + 0x2904) = uVar1;
    ((Flags_825E4B68 *)(iVar2+16))->bits |= 0x8000000;
    fn_82637B30(lbl_8320A898,1);
    fn_82544918(2,lbl_8320A898);
    fn_82545098();
  }
  return;
}

