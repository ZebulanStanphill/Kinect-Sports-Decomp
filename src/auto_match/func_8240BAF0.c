extern unsigned int *auStack_50;
extern int fn_8225F160();
extern int fn_82264520();
extern int fn_8229ACA0();
extern int fn_8229AD30();
extern int fn_822B67F8();
extern int fn_822B98A8();
extern int fn_82359698();
extern int fn_8254EDB0();
extern unsigned int lbl_821CA460;
extern unsigned int ltcg_pool_0_0f;
extern unsigned int lbl_83276584;
extern unsigned int uStack_54;


void fn_8240BAF0(int param_1)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  int iVar4;
  unsigned __int64 uVar5;
  int iVar6;
  int iVar7;
  unsigned int *puVar8;
  unsigned int *puVar9;
  int *piVar10;
  __int64 lVar11;
  unsigned int uStack_54;
  unsigned int auStack_50 [20];
  
  fn_82359698(*(unsigned int *)(param_1 + 4),4);
  auStack_50[4] = 4;
  piVar10 = (int *)(param_1 + 0x44);
  *(unsigned int *)(param_1 + 0xe0) = 0;
  auStack_50[2] = ltcg_pool_0_0f;
  lVar11 = 5;
  auStack_50[0] = 0;
  auStack_50[1] = 0;
  auStack_50[3] = 0;
  puVar8 = (unsigned int *)(param_1 + 0x48);
  puVar9 = &uStack_54;
  do {
    puVar9 = puVar9 + 1;
    puVar8 = puVar8 + 1;
    *puVar8 = *puVar9;
    lVar11 = lVar11 + -1;
  } while (lVar11 != 0);
  auStack_50[0] = 0;
  auStack_50[1] = 0;
  auStack_50[3] = 0;
  auStack_50[4] = 4;
  puVar9 = &uStack_54;
  lVar11 = 5;
  puVar8 = (unsigned int *)(param_1 + 0x60);
  do {
    puVar9 = puVar9 + 1;
    puVar8 = puVar8 + 1;
    *puVar8 = *puVar9;
    lVar11 = lVar11 + -1;
  } while (lVar11 != 0);
  uVar3 = *(unsigned int *)(*(int *)(param_1 + 4) + 0xd4);
  (**(int (***)())(*piVar10 + 4))(piVar10);
  fn_822B67F8();
  uVar5 = fn_822B98A8();
  fn_8229AD30(uVar3,0,uVar5);
  uVar3 = *(unsigned int *)(*(int *)(param_1 + 4) + 0xd4);
  (**(int (***)())(*piVar10 + 8))(piVar10);
  fn_822B67F8();
  uVar5 = fn_822B98A8();
  fn_8229AD30(uVar3,1,uVar5);
  iVar4 = *(int *)(param_1 + 0x2c);
  fn_8254EDB0((double)*(float *)(iVar4 + 0x68),(double)*(float *)(iVar4 + 0x6c),
                    *(unsigned int *)(iVar4 + 0x7c),*(unsigned int *)(iVar4 + 0x24));
  iVar6 = *(int *)(iVar4 + 0x7c);
  uVar3 = *(unsigned int *)(iVar4 + 0x6c);
  uVar1 = *(unsigned int *)(iVar4 + 0x5c);
  uVar2 = *(unsigned int *)(iVar4 + 0x58);
  if (*(int *)(iVar6 + 4) != 0) {
    *(unsigned int *)(iVar6 + 0x1cc) = *(unsigned int *)(iVar4 + 0x54);
    *(unsigned int *)(iVar6 + 0x1dc) = uVar3;
    *(unsigned int *)(iVar6 + 0x1d4) = 1;
    *(unsigned int *)(iVar6 + 0x1d0) = uVar2;
    *(unsigned int *)(iVar6 + 0x1d8) = uVar1;
    *(unsigned int *)(iVar6 + 0x1e0) = lbl_821CA460;
  }
  iVar6 = fn_8225F160();
  iVar4 = *(int *)(param_1 + 0x108);
  uVar3 = *(unsigned int *)(iVar6 + 0x14);
  iVar6 = (**(int (***)())(*piVar10 + 8))(piVar10);
  iVar7 = (**(int (***)())(*piVar10 + 4))(piVar10);
  uVar1 = *(unsigned int *)(param_1 + 0xec);
  *(unsigned int *)(iVar4 + 0x58) = 1;
  lbl_83276584 = lbl_83276584 + 1;
  fn_82264520(uVar1,uVar3,*(int *)(iVar7 + 0x24) != 0,*(int *)(iVar6 + 0x24) != 0);
  *(unsigned int *)(iVar4 + 0x5c) = 1;
  fn_8229ACA0(*(unsigned int *)(*(int *)(param_1 + 4) + 0xd4),
                    *(unsigned int *)(*(int *)(param_1 + 4) + 0xd0));
  return;
}

