extern int fn_823BF078();
extern int fn_82F4DA20();
extern int fn_82F4ECF8();
extern int fn_82F50D98();


void fn_824E1718(int param_1,unsigned __int64 param_2)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  
  uVar3 = fn_82F4DA20(2);
  fn_82F50D98(*(unsigned int *)(param_1 + -0xd0));
  uVar4 = fn_82F4ECF8();
  fn_823BF078(param_2,uVar3,uVar4);
  puVar1 = (unsigned int *)(*(int *)(param_1 + 0xc) + 0x90U & 0xfffffff0);
  uVar5 = puVar1[1];
  uVar6 = puVar1[2];
  uVar7 = puVar1[3];
  puVar2 = (unsigned int *)((int)param_2 + 0x180U & 0xfffffff0);
  *puVar2 = *puVar1;
  puVar2[1] = uVar5;
  puVar2[2] = uVar6;
  puVar2[3] = uVar7;
  puVar1 = (unsigned int *)(*(int *)(param_1 + 0xc) + 0xa0U & 0xfffffff0);
  uVar5 = puVar1[1];
  uVar6 = puVar1[2];
  uVar7 = puVar1[3];
  puVar2 = (unsigned int *)((int)param_2 + 0x1a0U & 0xfffffff0);
  *puVar2 = *puVar1;
  puVar2[1] = uVar5;
  puVar2[2] = uVar6;
  puVar2[3] = uVar7;
  return;
}

