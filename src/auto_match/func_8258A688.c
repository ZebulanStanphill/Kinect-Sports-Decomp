extern int fn_82522DF8();
extern int fn_8259A230();
extern int fn_825E7EE8();
extern int fn_825E8140();
extern int fn_825E8288();
extern int fn_82A1BB18();
extern int fn_82BFE128();
extern unsigned int lbl_8218ED2C;
extern unsigned int lbl_83296E18;


void fn_8258A688(int param_1)

{
  int iVar1;
  unsigned int *puVar2;
  unsigned int uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  unsigned __int64 uVar8;
  int *piVar9;
  
  if (*(int *)(param_1 + 0x28) == 0) {
    fn_825E7EE8(*(unsigned int *)(param_1 + 0xbab8));
  }
  fn_825E8288(*(unsigned int *)(param_1 + 0x2c),*(unsigned int *)(param_1 + 0x24),param_1 + 0xb9ec
                   );
  iVar7 = *(int *)(param_1 + 0x30);
  iVar4 = 0;
  *(unsigned int *)(iVar7 + 4) = 0;
  iVar5 = 0xc;
  *(unsigned int *)(iVar7 + 8) = 0;
  do {
    if (*(int *)(param_1 + 0x10) <= iVar4) break;
    if (*(int *)(param_1 + 0xbaa4 + iVar5) != 0) {
      iVar4 = iVar4 + 1;
      iVar7 = *(int *)((*(int *)(*(int *)(param_1 + 0x24) + 0x40) + 0x22c) * 4 +
                      *(int *)(param_1 + 0x24));
      uVar8 = (unsigned __int64)*(unsigned int *)(iVar7 + 0x1a0000);
      if (0 < (int)*(unsigned int *)(iVar7 + 0x1a0000)) {
        iVar6 = iVar5 + -8;
        do {
          iVar1 = *(int *)(param_1 + 0x30);
          uVar8 = uVar8 - 1;
          piVar9 = (int *)(*(int *)(iVar5 + iVar1) + *(int *)(iVar6 + iVar1) * 0x18);
          *piVar9 = iVar7;
          iVar7 = iVar7 + 0x90;
          *(unsigned short *)(piVar9 + 1) = 0;
          piVar9[2] = 0;
          piVar9[3] = 0;
          piVar9[4] = 0;
          piVar9[5] = 0;
          *(int *)(iVar6 + iVar1) = *(int *)(iVar6 + iVar1) + 1;
        } while (uVar8 != 0);
      }
    }
    iVar5 = iVar5 + 4;
  } while (iVar5 < 0x14);
  sync(0);
  if (*(int *)(param_1 + 0x28) == 0) {
    fn_825E8140(*(unsigned int *)(param_1 + 0xbab8));
  }
  piVar9 = &lbl_8218ED2C;
  do {
    iVar7 = *piVar9;
    puVar2 = (unsigned int *)fn_82522DF8(0x40);
    *puVar2 = 9;
    fn_82A1BB18();
    uVar3 = fn_8259A230();
    puVar2[1] = uVar3;
    puVar2[2] = iVar7;
    puVar2[3] = *(unsigned int *)(param_1 + 0xbab8);
    sync(1);
    fn_82BFE128((&lbl_83296E18)[iVar7],puVar2);
    piVar9 = piVar9 + 1;
  } while ((int)piVar9 < -0x7de712cc);
  return;
}

