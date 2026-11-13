extern int fn_82A87148();
extern int fn_82A88F60();


void fn_82A89508(unsigned __int64 param_1,int param_2,unsigned __int64 param_3,__int64 param_4,
                  __int64 param_5)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  
  uVar1 = *(unsigned int *)(param_2 + 0x30);
  uVar2 = *(unsigned int *)(param_2 + 0x2c);
  uVar3 = *(unsigned int *)(param_2 + 0x28);
  uVar4 = *(unsigned int *)(param_2 + 0x34);
  uVar5 = *(unsigned int *)(param_2 + 0x40);
  uVar6 = *(unsigned int *)(param_2 + 0x4c);
  uVar7 = *(unsigned int *)(param_2 + 0x58);
  fn_82A88F60();
  param_4 = (unsigned __int64)uVar6 + (unsigned __int64)uVar5 + (unsigned __int64)uVar4 +
            (unsigned __int64)uVar1 + (unsigned __int64)uVar2 + (unsigned __int64)uVar3 + (unsigned __int64)uVar7 + param_4;
  fn_82A87148(param_3,param_4 + 0x80,0x10,param_5 + 0x2c);
  fn_82A87148(param_3,param_4 + 0x90,0x10,param_5 + 0x2e);
  return;
}

