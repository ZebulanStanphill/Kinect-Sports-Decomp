extern char lbl_82196F10[];
extern char lbl_82196F18[];
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
extern unsigned int *auStack_70;
extern int fn_828F6FA8();
extern int fn_82A9D530();


void fn_82A9D590(int param_1,int param_2,int param_3,int param_4,
                  int param_5,int param_6,int param_7,int param_8, int in_stack_00000054, int in_stack_0000005c)

{
  const char *uVar1;
  const char *uVar2;
  undefined1 auStack_70 [16];
  
  uVar2 = lbl_82196F18;
  uVar1 = (param_2 & 1) ? uVar2 : lbl_82196F10;
  fn_82A9D530(param_1,"/Zi",uVar1);
  uVar1 = (param_2 & 2) ? uVar2 : lbl_82196F10;
  fn_82A9D530(param_1,"/Vd",uVar1);
  uVar1 = (param_2 & 0x100000) ? uVar2 : lbl_82196F10;
  fn_82A9D530(param_1,"/Xu0_deprecated",uVar1);
  uVar1 = (param_2 & 0x20000) ? uVar2 : lbl_82196F10;
  fn_82A9D530(param_1,"/Odu_deprecated",uVar1);
  uVar1 = (param_3 & 0x10) ? uVar2 : lbl_82196F10;
  fn_82A9D530(param_1,"/XOd_",uVar1);
  uVar1 = (param_3 & 4) ? uVar2 : lbl_82196F10;
  fn_82A9D530(param_1,"/XOu",uVar1);
  fn_828F6FA8(auStack_70,0x10,"%d",param_4);
  fn_82A9D530(param_1,"/Xmaxtempreg",auStack_70);
  fn_828F6FA8(auStack_70,0x10,"%d",param_5);
  fn_82A9D530(param_1,"PsSampBase",auStack_70);
  fn_828F6FA8(auStack_70,0x10,"%d",param_6);
  fn_82A9D530(param_1,"PsSampCount",auStack_70);
  fn_828F6FA8(auStack_70,0x10,"%d",param_7);
  fn_82A9D530(param_1,"VsSampBase",auStack_70);
  fn_828F6FA8(auStack_70,0x10,"%d",param_8);
  fn_82A9D530(param_1,"VsSampCount",auStack_70);
  fn_828F6FA8(auStack_70,0x10,"%d",in_stack_00000054);
  fn_82A9D530(param_1,"VsInstCount",auStack_70);
  fn_828F6FA8(auStack_70,0x10,"%d",in_stack_0000005c);
  fn_82A9D530(param_1,"PsInstCount",auStack_70);
  return;
}

