extern unsigned int *auStack_70;
extern unsigned int *auStack_90;
extern unsigned int *auStack_a0;
extern unsigned int *auStack_b0;
extern unsigned int *auStack_c0;
extern int fn_822315A0();
extern int fn_8223C610();
extern int fn_823116D8();
extern int fn_823A9A98();
extern int fn_823F2E20();
extern int fn_82512E18();
extern unsigned int iStack_bc;
extern unsigned int lbl_82192734;
extern unsigned int lbl_821CA460;
extern unsigned int ltcg_pool_0_0f;
extern unsigned int uStack_60;
extern unsigned int uStack_80;
extern unsigned int uStack_c8;
extern unsigned int uStack_cc;
extern unsigned int uStack_d0;
extern unsigned int uStack_d4;
extern unsigned int uStack_d8;
extern unsigned int uStack_dc;
extern unsigned int uStack_e0;


void fn_823A8BD0(int param_1,unsigned __int64 param_2,int param_3)

{
  unsigned int uVar1;
  unsigned int *puVar2;
  unsigned int *puVar3;
  unsigned __int64 in_r0;
  int iVar7;
  int iVar8;
  int iVar9;
  __int64 lVar4;
  __int64 lVar5;
  unsigned __int64 uVar6;
  int iVar10;
  int *piVar11;
  unsigned int uVar12;
  int *piVar13;
  unsigned int uVar14;
  unsigned int uVar15;
  unsigned int uVar16;
  struct { unsigned int first; unsigned int second; } stack_pair_e0;

  unsigned int uStack_d8;
  unsigned int uStack_d4;
  unsigned int uStack_d0;
  unsigned int uStack_cc;
  unsigned int uStack_c8;
  unsigned char auStack_c0 [4];
  int iStack_bc;
  unsigned char auStack_b0 [16];
  unsigned char auStack_a0 [16];
  unsigned char auStack_90 [16];
  unsigned int uStack_80;
  unsigned char auStack_70 [16];
  unsigned int uStack_60;
  
  (**(int (***)())(*(int *)(param_1 + 0x28) + 0x14))(param_1 + 0x28);
  iVar7 = param_3 + 4;
  if (param_3 == 0) {
    iVar7 = 0;
  }
  (**(int (***)())(*(int *)(param_1 + 8) + 0x14))(param_1 + 8,param_2,iVar7);
  iVar7 = param_3 + 0x10;
  if (param_3 == 0) {
    iVar7 = 0;
  }
  piVar11 = (int *)(param_1 + 0x40);
  (**(int (***)())(*(int *)(param_1 + 0x40) + 0x14))(piVar11,param_2,iVar7);
  iVar7 = param_3 + 0x24;
  if (param_3 == 0) {
    iVar7 = 0;
  }
  piVar13 = (int *)(param_1 + 0xa8);
  (**(int (***)())(*(int *)(param_1 + 0xa8) + 0x14))(piVar13,param_2,iVar7);
  iVar7 = fn_8223C610(param_2,2,0,0);
  iVar8 = fn_8223C610(param_2,2,0,0);
  iVar9 = fn_8223C610(param_2,2,0,0);
  iVar10 = param_3 + 0x34;
  if (param_3 == 0) {
    iVar10 = 0;
  }
  (**(int (***)())(*piVar13 + 0x14))(piVar13,param_2,iVar10);
  iVar10 = param_3 + 0x38;
  if (param_3 == 0) {
    iVar10 = 0;
  }
  (**(int (***)())(*piVar13 + 0x14))(piVar13,param_2,iVar10);
  lVar4 = fn_8223C610(param_2,1,0,0);
  lVar5 = fn_8223C610(param_2,1,0,0);
  if (param_3 != 0) {
    *(unsigned int *)(param_3 + 0x20) = 0;
    uVar14 = ltcg_pool_0_0f;
    uVar16 = lbl_821CA460;
    uVar15 = lbl_82192734;
    uVar1 = ltcg_pool_0_0f;
    if ((iVar7 != 0) && (uVar1 = lbl_821CA460, iVar7 == 1)) {
      uVar1 = lbl_82192734;
    }
    *(unsigned int *)(param_3 + 0x28) = uVar1;
    uVar1 = uVar14;
    if ((iVar8 != 0) && (uVar1 = uVar16, iVar8 == 1)) {
      uVar1 = uVar15;
    }
    *(unsigned int *)(param_3 + 0x2c) = uVar1;
    if ((iVar9 != 0) && (uVar14 = uVar16, iVar9 == 1)) {
      uVar14 = uVar15;
    }
    *(unsigned int *)(param_3 + 0x30) = uVar14;
    *(unsigned int *)(param_3 + 0x3c) = (unsigned int)(lVar4 != 0);
    *(unsigned int *)(param_3 + 0x40) = (unsigned int)(lVar5 != 0);
    uVar6 = fn_823A9A98(auStack_c0);
    fn_823F2E20(param_3 + 0x44,uVar6);
    if (iStack_bc != 0) {
      fn_822315A0();
    }
  }
  (**(int (***)())(*(int *)(param_1 + 0x60) + 0x14))(param_1 + 0x60,param_2,&stack_pair_e0.second);
  uVar12 = 0;
  if (stack_pair_e0.second != 0) {
    piVar13 = (int *)(param_1 + 0x98);
    do {
      (**(int (***)())(*(int *)(param_1 + 0x78) + 0x14))((int *)(param_1 + 0x78),param_2,&uStack_d8);
      (**(int (***)())(*piVar13 + 0x14))(piVar13,param_2,&stack_pair_e0.first);
      if ((param_3 != 0) && (*(int *)(param_3 + 0x44) != 0)) {
        uStack_cc = stack_pair_e0.first;
        uStack_c8 = 0;
        uStack_d0 = uStack_d8;
        fn_82512E18(*(unsigned int *)(*(int *)(param_3 + 0x44) + 8),&uStack_d0);
      }
      (**(int (***)())(*piVar11 + 0x14))(piVar11,param_2,auStack_a0);
      (**(int (***)())(*piVar13 + 0x14))(piVar13,param_2,&uStack_d4);
      if ((param_3 != 0) && (*(unsigned int **)(param_3 + 0x44) != (unsigned int *)0x0)) {
        uVar1 = **(unsigned int **)(param_3 + 0x44);
        puVar2 = (unsigned int *)((unsigned int)(auStack_a0 + (int)in_r0) & 0xfffffff0);
        uVar14 = puVar2[1];
        uVar15 = puVar2[2];
        uVar16 = puVar2[3];
        puVar3 = (unsigned int *)((unsigned int)(auStack_90 + (int)in_r0) & 0xfffffff0);
        *puVar3 = *puVar2;
        puVar3[1] = uVar14;
        puVar3[2] = uVar15;
        puVar3[3] = uVar16;
        uStack_80 = uStack_d4;
        fn_823116D8(uVar1,auStack_90);
      }
      (**(int (***)())(*piVar11 + 0x14))(piVar11,param_2,auStack_b0);
      if ((param_3 != 0) && (*(unsigned int **)(param_3 + 0x44) != (unsigned int *)0x0)) {
        uVar1 = **(unsigned int **)(param_3 + 0x44);
        puVar2 = (unsigned int *)((unsigned int)(auStack_b0 + (int)in_r0) & 0xfffffff0);
        uVar14 = puVar2[1];
        uVar15 = puVar2[2];
        uVar16 = puVar2[3];
        puVar3 = (unsigned int *)((unsigned int)(auStack_70 + (int)in_r0) & 0xfffffff0);
        *puVar3 = *puVar2;
        puVar3[1] = uVar14;
        puVar3[2] = uVar15;
        puVar3[3] = uVar16;
        uStack_60 = stack_pair_e0.first;
        fn_823116D8(uVar1,auStack_70);
      }
      uVar12 = uVar12 + 1;
    } while (uVar12 < stack_pair_e0.second);
  }
  return;
}

