extern int fn_823BF078();
extern int fn_82F4DA20();
extern int fn_82F4ECF8();
extern int fn_82F50D98();


void fn_824D2A80(int param_1,int param_2)

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
  puVar1 = (unsigned int *)(param_1 + 0x50U & 0xfffffff0);
  uVar5 = puVar1[1];
  uVar6 = puVar1[2];
  uVar7 = puVar1[3];
  puVar2 = (unsigned int *)(param_2 + 0x180U & 0xfffffff0);
  *puVar2 = *puVar1;
  puVar2[1] = uVar5;
  puVar2[2] = uVar6;
  puVar2[3] = uVar7;
  *(unsigned int *)(param_2 + 400) = *(unsigned int *)(param_1 + 100);
  return;
}

