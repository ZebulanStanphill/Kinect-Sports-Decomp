extern char lbl_820E975C[];
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
extern unsigned int *auStack_40;
extern unsigned int *auStack_60;
extern unsigned int *auStack_70;
extern int fn_822315A0();
extern int fn_822402F8();
extern int fn_82297428();
extern int fn_82516FD8();
extern int fn_825174B8();
extern int fn_8260D428();
extern int fn_8265CA20();
extern int fn_8287C960();
extern int fn_828BB7B8();
extern unsigned int iStack_64;
extern unsigned int iStack_6c;
extern unsigned int lbl_83159F0C[];


extern unsigned int uStack_2c;
extern unsigned int uStack_30;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;


void fn_828BA038(unsigned int param_1,int *param_2,undefined4 *param_3)

{
  unsigned int uVar1;
  int iVar2;
  unsigned int uVar3;
  struct Pair_828BA038 {unsigned a,b,c,d;} pair;
  struct String_828BA038 {unsigned v[4],size,cap,alloc;} wide,narrow;
#define auStack_70 (&pair)
#define iStack_6c pair.b
#define iStack_64 pair.d
#define auStack_60 wide.v
#define uStack_50 wide.size
#define uStack_4c wide.cap
#define auStack_40 narrow.v
#define uStack_30 narrow.size
#define uStack_2c narrow.cap
  
  uVar1 = fn_825174B8(auStack_70,param_2,param_3);
  fn_82516FD8(param_1 + 0x18,uVar1);
  if ((unsigned)iStack_64 != 0) {
    fn_822315A0(iStack_64);
  }
  if ((unsigned)iStack_6c != 0) {
    fn_822315A0(iStack_6c);
  }
  { unsigned *key=(unsigned *)(*param_2+0xc); const void *data;
  if(lbl_83159F0C[5] >= 16) data=(void *)lbl_83159F0C[0]; else data=lbl_83159F0C;
  iVar2=fn_8260D428(key,0,key[4],data,lbl_83159F0C[4]); }
  if (iVar2 == 0) {
    fn_82297428(auStack_60,(unsigned)lbl_820E975C);
    fn_828BB7B8(*param_3,auStack_60);
    uVar1 = fn_8287C960(auStack_40,auStack_60);
    fn_822402F8(param_1 + 0x74,uVar1);
    if (16 <= uStack_2c) {
      fn_8265CA20(auStack_40[0]);
    }
    uStack_30 = 0;
    uStack_2c = 0xf;
    *(char *)auStack_40 = 0;
    if (8 <= uStack_4c) {
      fn_8265CA20(auStack_60[0]);
    }
    uStack_50 = 0;
    *(unsigned short *)auStack_60 = 0;
    uStack_4c = 7;
  }
  if ((unsigned)param_2[1] != 0) {
    fn_822315A0(param_2[1]);
  }
  if (param_3[1] != 0) {
    fn_822315A0(param_3[1]);
  }
  return;
}

