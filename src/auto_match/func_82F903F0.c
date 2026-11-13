extern int fn_8265D598();
extern int fn_82F90110();
extern int fn_82F904C8();
extern unsigned int stack0x00000014;
extern unsigned int stack0x0000001c;
extern unsigned int stack0x00000024;
extern unsigned int uStack00000014;
extern unsigned int uStack0000001c;
extern unsigned int uStack00000024;
extern unsigned int uStack0000002c;
extern unsigned int uStack_38;
extern unsigned int uStack_3f;
extern unsigned int uStack_40;


void fn_82F903F0(unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned char uVar5;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  unsigned int uStack00000014;
  unsigned int uStack0000001c;
  unsigned int uStack00000024;
  unsigned int uStack0000002c;
  unsigned char uStack_40;
  unsigned char uStack_3f;
  unsigned char *puStack_3c;
  unsigned char uStack_38;
  
  puStack_3c = &uStack_40;
  uStack00000014 = param_1;
  uStack0000001c = param_2;
  uStack00000024 = param_3;
  uStack0000002c = param_4;
  uVar5 = fn_8265D598(&stack0x00000014,&stack0x00000024);
  uVar2 = uStack0000002c;
  uVar1 = uStack00000024;
  uStack_38 = uStack_40;
  uStack_3f = uVar5;
  uVar3 = fn_82F90110(&stack0x0000001c);
  uVar4 = fn_82F90110(&stack0x00000014);
  fn_82F904C8(uVar4,uVar3,uVar1,uVar2,uVar5,uStack_38);
  return;
}

