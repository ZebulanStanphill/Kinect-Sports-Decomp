extern unsigned int *auStack_40;
extern unsigned int *auStack_50;
extern int fn_82695750();
extern int fn_826961B0();
extern int fn_82696330();
extern int fn_826BF7B0();


void fn_826C0608(int param_1,unsigned __int64 param_2,unsigned int *param_3,unsigned __int64 param_4)

{
  int iVar1;
  unsigned int uVar2;
  int iVar3;
  unsigned __int64 uVar4;
  unsigned char auStack_50 [16];
  unsigned char auStack_40 [64];
  
  fn_82695750(auStack_40,param_4);
  fn_826BF7B0(param_1,param_2,param_3,auStack_40);
  fn_82696330(auStack_40);
  iVar1 = *(int *)(param_1 + 4);
  auStack_50[0] = 3;
  uVar2 = *param_3;
  iVar3 = *(int *)(iVar1 + 0x10);
  uVar4 = fn_826961B0(auStack_40,param_2);
  (**(int (***)())(iVar3 + 0x28))(iVar1 + 0x10,param_3,(unsigned __int64)uVar2 + 0x130,uVar4,auStack_50);
  fn_82696330(auStack_40);
  return;
}

