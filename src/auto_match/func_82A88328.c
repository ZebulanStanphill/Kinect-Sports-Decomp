extern int fn_82A88020();
extern int fn_82A88178();


void fn_82A88328(__int64 param_1,int param_2,unsigned __int64 param_3,__int64 param_4,
                  unsigned __int64 param_5)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  
  uVar1 = *(unsigned int *)(param_2 + 0x30);
  uVar2 = *(unsigned int *)(param_2 + 0x2c);
  uVar3 = *(unsigned int *)(param_2 + 0x28);
  uVar4 = *(unsigned int *)(param_2 + 0x34);
  uVar5 = *(unsigned int *)(param_2 + 0x40);
  uVar6 = *(unsigned int *)(param_2 + 0x4c);
  fn_82A88178();
  fn_82A88020(param_1 + 0xc,param_2 + 0x58,param_3,
                (unsigned __int64)uVar6 + (unsigned __int64)uVar5 + (unsigned __int64)uVar4 +
                (unsigned __int64)uVar1 + (unsigned __int64)uVar2 + (unsigned __int64)uVar3 + param_4,param_5);
  return;
}

