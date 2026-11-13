extern unsigned int *auStack_40;
extern unsigned int *auStack_50;
extern int fn_826961B0();
extern int fn_82696330();


void fn_826C2D98(int param_1,unsigned int *param_2,unsigned __int64 param_3)

{
  unsigned int uVar1;
  int iVar2;
  unsigned __int64 uVar3;
  unsigned char auStack_50 [16];
  unsigned char auStack_40 [16];
  
  uVar1 = *param_2;
  iVar2 = *(int *)(param_1 + 0x10);
  auStack_50[0] = 0;
  uVar3 = fn_826961B0(auStack_40,param_3);
  (**(int (***)())(iVar2 + 0x28))(param_1 + 0x10,param_2,(unsigned __int64)uVar1 + 0x130,uVar3,auStack_50);
  fn_82696330(auStack_40);
  return;
}

