extern int fn_82E8D828();
extern int fn_82F02A98();
extern int fn_82F03248();
extern unsigned int iStack_3c;
extern unsigned int uStack_40;
extern unsigned int uStack_42;
extern unsigned int uStack_44;
extern unsigned int uStack_54;


void fn_82F03C10(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  unsigned int uVar3;
  unsigned __int64 uVar4;
  unsigned int *puVar5;
  unsigned int *puVar6;
  __int64 lVar7;
  unsigned int uStack_54;
  int aiStack_50 [3];
  unsigned short uStack_44;
  unsigned short uStack_42;
  unsigned int uStack_40;
  int iStack_3c;
  
  lVar7 = 10;
  aiStack_50[1] = *(int *)(param_2 + 4);
  aiStack_50[2] = *(int *)(param_2 + 8);
  uVar3 = *(int *)(param_2 + 8) * *(int *)(param_2 + 4) * 3;
  uStack_44 = 1;
  uStack_40 = 0x30323449;
  iStack_3c = ((int)uVar3 >> 1) + (unsigned int)((int)uVar3 < 0 && (uVar3 & 1) != 0);
  aiStack_50[0] = 0x28;
  puVar6 = (unsigned int *)(param_2 + -4);
  uStack_42 = 0xc;
  puVar5 = (unsigned int *)(param_1 + 0x1c40);
  do {
    puVar6 = puVar6 + 1;
    puVar5 = puVar5 + 1;
    *puVar5 = *puVar6;
    lVar7 = lVar7 + -1;
  } while (lVar7 != 0);
  puVar6 = &uStack_54;
  puVar5 = (unsigned int *)(param_1 + 0x1c68);
  lVar7 = 10;
  do {
    puVar6 = puVar6 + 1;
    puVar5 = puVar5 + 1;
    *puVar5 = *puVar6;
    lVar7 = lVar7 + -1;
  } while (lVar7 != 0);
  puVar6 = &uStack_54;
  puVar5 = (unsigned int *)(param_1 + 0x1c90);
  lVar7 = 10;
  do {
    puVar6 = puVar6 + 1;
    puVar5 = puVar5 + 1;
    *puVar5 = *puVar6;
    lVar7 = lVar7 + -1;
  } while (lVar7 != 0);
  puVar6 = &uStack_54;
  puVar5 = (unsigned int *)(param_1 + 0x1cb8);
  lVar7 = 10;
  do {
    puVar6 = puVar6 + 1;
    puVar5 = puVar5 + 1;
    *puVar5 = *puVar6;
    lVar7 = lVar7 + -1;
  } while (lVar7 != 0);
  iVar1 = *(int *)(param_2 + 4) >> 1;
  *(int *)(param_1 + 0x1c70) = iVar1;
  uVar3 = *(int *)(param_2 + 8) * iVar1 * 3;
  *(unsigned int *)(param_1 + 0x1c80) = ((int)uVar3 >> 1) + (unsigned int)((int)uVar3 < 0 && (uVar3 & 1) != 0);
  iVar1 = *(int *)(param_2 + 8) >> 1;
  *(int *)(param_1 + 0x1c9c) = iVar1;
  uVar3 = iVar1 * *(int *)(param_2 + 4) * 3;
  *(unsigned int *)(param_1 + 0x1ca8) = ((int)uVar3 >> 1) + (unsigned int)((int)uVar3 < 0 && (uVar3 & 1) != 0);
  iVar1 = *(int *)(param_2 + 4) >> 1;
  *(int *)(param_1 + 0x1cc0) = iVar1;
  iVar2 = *(int *)(param_2 + 8) >> 1;
  *(int *)(param_1 + 0x1cc4) = iVar2;
  uVar3 = iVar2 * iVar1 * 3;
  *(unsigned int *)(param_1 + 0x1cd0) = ((int)uVar3 >> 1) + (unsigned int)((int)uVar3 < 0 && (uVar3 & 1) != 0);
  fn_82E8D828(param_1,param_1 + 0x1ce4,param_1 + 0x1c44,0);
  fn_82F02A98(param_1,1);
  uVar4 = fn_82F03248();
  fn_82E8D828(uVar4,param_1 + 0x1cf0,param_1 + 0x1c6c,0);
  fn_82F02A98(param_1,2);
  uVar4 = fn_82F03248();
  fn_82E8D828(uVar4,param_1 + 0x1cfc,param_1 + 0x1c94,0);
  fn_82F02A98(param_1,3);
  uVar4 = fn_82F03248();
  fn_82E8D828(uVar4,param_1 + 0x1d08,param_1 + 0x1cbc,0);
  fn_82F02A98(param_1,0);
  fn_82F03248();
  return;
}

