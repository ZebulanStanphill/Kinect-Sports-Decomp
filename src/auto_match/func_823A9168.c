extern unsigned int *auStack_80;
extern unsigned int *auStack_90;
extern unsigned int *auStack_9c;
extern int fn_8223C478();
extern int fn_823B3BA8();
extern int fn_8253FEF8();
extern int fn_828E9DB8();
extern int fn_82F622E0();
extern int fn_82F6A548();
extern int fn_82F6A594();
extern unsigned int lbl_8218E8E8;
extern unsigned int lbl_821CA460;
extern unsigned int ltcg_pool_0_0f;
extern unsigned int uStack_a0;


void fn_823A9168(unsigned __int64 param_1,unsigned __int64 param_2,__int64 param_3)

{
  int *piVar1;
  int iVar2;
  int (**pcVar3)();
  int iVar4;
  unsigned int *puVar5;
  unsigned int *puVar6;
  unsigned __int64 in_r0;
  int iVar7;
  int iVar8;
  int *piVar9;
  unsigned __int64 uVar10;
  int *piVar11;
  unsigned int uVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  unsigned int uVar19;
  unsigned int uVar20;
  unsigned int uVar21;
  unsigned int uStack_a0;
  unsigned int auStack_9c [3];
  unsigned char auStack_90 [16];
  unsigned char auStack_80 [128];
  
  iVar7 = fn_82F6A548();
  (**(int (***)())(*(int *)(iVar7 + 0x28) + 0x10))(iVar7 + 0x28);
  (**(int (***)())(*(int *)(iVar7 + 8) + 0x10))(iVar7 + 8,param_2,param_3 + 4);
  piVar9 = (int *)(iVar7 + 0x40);
  (**(int (***)())(*(int *)(iVar7 + 0x40) + 0x10))(piVar9,param_2,param_3 + 0x10);
  piVar11 = (int *)(iVar7 + 0xa8);
  (**(int (***)())(*(int *)(iVar7 + 0xa8) + 0x10))(piVar11,param_2,param_3 + 0x24);
  dVar18 = (double)ltcg_pool_0_0f;
  iVar4 = (int)param_3;
  if (*(int *)(iVar4 + 0x28) == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = 1;
    if (dVar18 <= (double)*(float *)(iVar4 + 0x28)) {
      uVar10 = 2;
    }
  }
  fn_8223C478(param_2,2,0);
  fn_828E9DB8(param_2,uVar10,2);
  if (*(int *)(iVar4 + 0x2c) == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = 1;
    if (dVar18 <= (double)*(float *)(iVar4 + 0x2c)) {
      uVar10 = 2;
    }
  }
  fn_8223C478(param_2,2,0);
  fn_828E9DB8(param_2,uVar10,2);
  if (*(int *)(iVar4 + 0x30) == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = 1;
    if (dVar18 <= (double)*(float *)(iVar4 + 0x30)) {
      uVar10 = 2;
    }
  }
  fn_8223C478(param_2,2,0);
  fn_828E9DB8(param_2,uVar10,2);
  (**(int (***)())(*piVar11 + 0x10))(piVar11,param_2,param_3 + 0x34);
  (**(int (***)())(*piVar11 + 0x10))(piVar11,param_2,param_3 + 0x38);
  iVar8 = *(int *)(iVar4 + 0x3c);
  fn_8223C478(param_2,1,0);
  fn_828E9DB8(param_2,iVar8 != 0,1);
  iVar8 = *(int *)(iVar4 + 0x40);
  fn_8223C478(param_2,1,0);
  fn_828E9DB8(param_2,iVar8 != 0,1);
  piVar11 = *(int **)(*(int *)(iVar4 + 0x44) + 8);
  uStack_a0 = (piVar11[1] - *piVar11) / 0xc;
  (**(int (***)())(*(int *)(iVar7 + 0x60) + 0x10))(iVar7 + 0x60,param_2,&uStack_a0);
  uVar12 = 0;
  if (uStack_a0 != 0) {
    dVar17 = (double)lbl_8218E8E8;
    dVar16 = (double)lbl_821CA460;
    do {
      piVar11 = *(int **)(*(int *)(iVar4 + 0x44) + 8);
      iVar8 = *piVar11;
      if ((unsigned int)((piVar11[1] - iVar8) / 0xc) <= uVar12) {
                    /* WARNING: Subroutine does not return */
        fn_82F622E0(0xffffffff821ae698);
      }
      auStack_9c[0] = *(unsigned int *)(uVar12 * 0xc + iVar8);
      iVar8 = uVar12 * 0xc + iVar8;
      (**(int (***)())(*(int *)(iVar7 + 0x78) + 0x10))(iVar7 + 0x78,param_2,auStack_9c);
      auStack_9c[0] = *(unsigned int *)(iVar8 + 4);
      piVar11 = (int *)(iVar7 + 0x98);
      (**(int (***)())(*(int *)(iVar7 + 0x98) + 0x10))(piVar11,param_2,auStack_9c);
      dVar14 = dVar18;
      if (uVar12 != 0) {
        piVar1 = *(int **)(*(int *)(iVar4 + 0x44) + 8);
        iVar2 = *piVar1;
        if ((unsigned int)((piVar1[1] - iVar2) / 0xc) <= uVar12 - 1) {
                    /* WARNING: Subroutine does not return */
          fn_82F622E0(0xffffffff821ae698);
        }
        dVar14 = (double)*(float *)((uVar12 - 1) * 0xc + iVar2 + 4);
      }
      dVar15 = (double)*(float *)(iVar8 + 4);
      dVar13 = (double)fn_8253FEF8(dVar17,dVar18,dVar16);
      iVar8 = fn_823B3BA8((double)(float)((double)(float)(dVar15 - dVar14) * dVar13 + dVar14),
                           *(unsigned int *)(iVar4 + 0x44));
      puVar5 = (unsigned int *)((int)in_r0 + iVar8 & 0xfffffff0);
      uVar19 = puVar5[1];
      uVar20 = puVar5[2];
      uVar21 = puVar5[3];
      pcVar3 = *(int (***)())(*piVar9 + 0x10);
      puVar6 = (unsigned int *)((unsigned int)(auStack_90 + (int)in_r0) & 0xfffffff0);
      *puVar6 = *puVar5;
      puVar6[1] = uVar19;
      puVar6[2] = uVar20;
      puVar6[3] = uVar21;
      (*pcVar3)(piVar9,param_2,auStack_90);
      auStack_9c[0] = *(unsigned int *)(iVar8 + 0x10);
      (**(int (***)())(*piVar11 + 0x10))(piVar11,param_2,auStack_9c);
      iVar8 = fn_823B3BA8(dVar15,*(unsigned int *)(iVar4 + 0x44));
      puVar5 = (unsigned int *)((int)in_r0 + iVar8 & 0xfffffff0);
      uVar19 = puVar5[1];
      uVar20 = puVar5[2];
      uVar21 = puVar5[3];
      pcVar3 = *(int (***)())(*piVar9 + 0x10);
      puVar6 = (unsigned int *)((unsigned int)(auStack_80 + (int)in_r0) & 0xfffffff0);
      *puVar6 = *puVar5;
      puVar6[1] = uVar19;
      puVar6[2] = uVar20;
      puVar6[3] = uVar21;
      (*pcVar3)(piVar9,param_2,auStack_80);
      uVar12 = uVar12 + 1;
    } while (uVar12 < uStack_a0);
  }
  fn_82F6A594();
  return;
}

