extern int fn_82AB15D0();
extern int fn_82B9CE48();
extern int fn_82BA8F38();
extern int fn_82BD09F0();
extern unsigned int lbl_82002C5C;
extern unsigned int lbl_8200533C;
extern unsigned int lbl_820E2FB8;
extern unsigned int lbl_821AAD20;
extern unsigned int uStack_6c;
extern unsigned int uStack_70;


void fn_82BAB5C0(int param_1,int param_2,unsigned int *param_3,int param_4)

{
  unsigned short uVar1;
  unsigned short *puVar2;
  int iVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  unsigned int uVar8;
  unsigned int uVar9;
  unsigned int uVar10;
  unsigned int uVar11;
  unsigned int uVar12;
  int *piVar13;
  unsigned int uVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  unsigned int uStack_70;
  unsigned int uStack_6c;
  
  puVar2 = *(unsigned short **)(param_1 + 0xb8);
  piVar13 = (int *)((((int)param_3 - *(int *)(param_2 + 4)) / 0xc) * 8 + *(int *)(param_2 + 0x34));
  if (*piVar13 == 0) {
    *piVar13 = param_1;
  }
  else {
    piVar13[1] = param_1;
  }
  fn_82B9CE48(*(unsigned int *)(param_4 + 0x600),*(unsigned int *)(param_1 + 0xb0),&uStack_70,
                    0xffffffff82b7c800,param_4);
  *param_3 = *param_3 & 0xffffffe0 | *(unsigned int *)(&lbl_820E2FB8 + *(int *)(param_1 + 0x18) * 4) & 0x1f;
  uVar11 = fn_82BD09F0(*(unsigned int *)(param_4 + 0xab0),*(unsigned int *)(param_1 + 0xec));
  uVar12 = *param_3;
  uVar11 = (uVar11 & 0x3f) << 5;
  *param_3 = uVar11 | uVar12 & 0xfffff81f;
  *param_3 = (*(unsigned int *)(param_1 + 0x6c) & 1) << 0xb | uVar11 | uVar12 & 0xfffff01f;
  uVar11 = fn_82BD09F0(*(unsigned int *)(param_4 + 0xab0),param_1);
  uVar12 = *param_3;
  uVar11 = (uVar11 & 0x3f) << 0xc;
  *param_3 = uVar11 | uVar12 & 0xfffc0fff;
  uVar4 = ((uStack_70 & 1) << 1 | *(unsigned int *)(param_1 + 0x68) & 1) << 0x12;
  *param_3 = uVar4 | uVar11 | uVar12 & 0xfff00fff;
  uVar5 = (*(unsigned int *)(param_1 + 0xac) & 0x1f) << 0x14;
  uVar14 = uVar5 | uVar4 | uVar11 | uVar12 & 0xfe000fff;
  *param_3 = uVar14;
  if (*(int *)(param_1 + 0xb4) == 0) {
    uVar14 = uVar5 | uVar4 | uVar11 | uVar12 & 0xfc000fff;
  }
  else if (*(int *)(param_1 + 0xb4) == 1) {
    uVar14 = uVar14 | 0x2000000;
  }
  else {
    uVar14 = (uStack_6c & 1) << 0x19 | uVar5 | uVar4 | uVar11 | uVar12 & 0xfc000fff;
  }
  *param_3 = uVar14;
  uVar12 = *param_3;
  uVar11 = (*(unsigned char *)(param_1 + 0x84) & 3) << 0x1a;
  *param_3 = uVar11 | uVar12 & 0xf3ffffff;
  uVar4 = (*(unsigned char *)(param_1 + 0x85) & 3) << 0x1c;
  *param_3 = uVar4 | uVar11 | uVar12 & 0xc3ffffff;
  *param_3 = (unsigned int)*(unsigned char *)(param_1 + 0x86) << 0x1e | uVar4 | uVar11 | uVar12 & 0x3ffffff;
  iVar3 = *(int *)(param_1 + 0x18);
  if ((((iVar3 == 0x71) || (iVar3 == 0x72)) || (iVar3 == 0x73)) || (iVar3 == 0x74)) {
    uVar12 = param_3[1] | 0xfff;
  }
  else {
    uVar12 = fn_82BA8F38(0,*(unsigned char *)(param_1 + 0x80));
    param_3[1] = uVar12 & 7 | param_3[1] & 0xfffffff8;
    uVar12 = fn_82BA8F38(1,*(unsigned char *)(param_1 + 0x81));
    param_3[1] = (uVar12 & 7) << 3 | param_3[1] & 0xffffffc7;
    uVar12 = fn_82BA8F38(2,*(unsigned char *)(param_1 + 0x82));
    param_3[1] = (uVar12 & 7) << 6 | param_3[1] & 0xfffffe3f;
    uVar12 = fn_82BA8F38(3,*(unsigned char *)(param_1 + 0x83));
    uVar12 = (uVar12 & 7) << 9 | param_3[1] & 0xfffff1ff;
  }
  param_3[1] = uVar12;
  uVar12 = param_3[2];
  dVar16 = (double)lbl_8200533C;
  dVar18 = (double)lbl_821AAD20;
  dVar17 = (double)lbl_82002C5C;
  uVar11 = param_3[1];
  uVar4 = (*puVar2 & 3) << 0xc;
  param_3[1] = uVar4 | uVar11 & 0xffffcfff;
  uVar5 = (puVar2[1] & 3) << 0xe;
  param_3[1] = uVar5 | uVar4 | uVar11 & 0xffff0fff;
  uVar14 = (puVar2[2] & 3) << 0x10;
  param_3[1] = uVar14 | uVar5 | uVar4 | uVar11 & 0xfffc0fff;
  uVar6 = (puVar2[3] & 7) << 0x12;
  param_3[1] = uVar6 | uVar14 | uVar5 | uVar4 | uVar11 & 0xffe00fff;
  uVar7 = (puVar2[4] & 7) << 0x15;
  param_3[1] = uVar7 | uVar6 | uVar14 | uVar5 | uVar4 | uVar11 & 0xff000fff;
  uVar8 = (puVar2[5] & 3) << 0x18;
  param_3[1] = uVar8 | uVar7 | uVar6 | uVar14 | uVar5 | uVar4 | uVar11 & 0xfc000fff;
  uVar9 = (puVar2[6] & 3) << 0x1a;
  param_3[1] = uVar9 | uVar8 | uVar7 | uVar6 | uVar14 | uVar5 | uVar4 | uVar11 & 0xf0000fff;
  uVar10 = (puVar2[7] & 1) << 0x1c;
  param_3[1] = uVar10 | uVar9 | uVar8 | uVar7 | uVar6 | uVar14 | uVar5 | uVar4 | uVar11 & 0xe0000fff
  ;
  param_3[1] = (puVar2[8] & 3) << 0x1d |
               uVar10 | uVar9 | uVar8 | uVar7 | uVar6 | uVar14 | uVar5 | uVar4 | uVar11 & 0x80000fff
  ;
  uVar1 = puVar2[10];
  param_3[2] = uVar12 & 0xfffffffe | uVar1 & 1;
  param_3[2] = (puVar2[9] & 1) << 1 | uVar12 & 0xffff0000 | uVar1 & 1;
  dVar15 = (double)puVar2[0xc];
  if (((dVar15 != dVar18) && (dVar15 != dVar17)) && (dVar15 != dVar16)) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820df638,0xffffffff820df268,0xbf1);
  }
  dVar15 = (double)puVar2[0xd];
  if (((dVar15 != dVar18) && (dVar15 != dVar17)) && (dVar15 != dVar16)) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820df5e0,0xffffffff820df268,0xbf3);
  }
  dVar15 = (double)puVar2[0xe];
  if (((dVar15 != dVar18) && (dVar15 != dVar17)) && (dVar15 != dVar16)) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820df588,0xffffffff820df268,0xbf5);
  }
  dVar15 = (double)puVar2[0xc];
  if (dVar15 == dVar18) {
    uVar12 = param_3[2] & 0xffe0ffff;
LAB_82bab9cc:
    param_3[2] = uVar12;
  }
  else {
    if (dVar15 == dVar17) {
      uVar12 = param_3[2] & 0xffe0ffff | 0x10000;
      goto LAB_82bab9cc;
    }
    if (dVar15 == dVar16) {
      uVar12 = param_3[2] & 0xffe0ffff | 0x110000;
      goto LAB_82bab9cc;
    }
  }
  dVar15 = (double)puVar2[0xd];
  if (dVar15 == dVar18) {
    uVar12 = param_3[2] & 0xfc1fffff;
LAB_82baba20:
    param_3[2] = uVar12;
  }
  else {
    if (dVar15 == dVar17) {
      uVar12 = param_3[2] & 0xfc1fffff | 0x200000;
      goto LAB_82baba20;
    }
    if (dVar15 == dVar16) {
      uVar12 = param_3[2] & 0xfc1fffff | 0x2200000;
      goto LAB_82baba20;
    }
  }
  dVar15 = (double)puVar2[0xe];
  if (dVar15 == dVar18) {
    uVar12 = param_3[2] & 0x83ffffff;
LAB_82baba60:
    param_3[2] = uVar12;
  }
  else {
    if (dVar15 == dVar17) {
      uVar12 = param_3[2] & 0x83ffffff | 0x4000000;
      goto LAB_82baba60;
    }
    if (dVar15 == dVar16) {
      param_3[2] = param_3[2] & 0x83ffffff | 0x44000000;
    }
  }
  iVar3 = *(int *)(param_1 + 0x34);
  if (iVar3 == 0) {
    uVar12 = param_3[1] & 0x7fffffff;
  }
  else {
    if (iVar3 != 2) {
      if (iVar3 != 3) {
        fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff82196f10,0xffffffff820df268,0xc1b);
        return;
      }
      uVar12 = param_3[1] | 0x80000000;
      uVar11 = param_3[2] | 0x80000000;
      goto LAB_82babae8;
    }
    uVar12 = param_3[1] | 0x80000000;
  }
  uVar11 = param_3[2] & 0x7fffffff;
LAB_82babae8:
  param_3[1] = uVar12;
  param_3[2] = uVar11;
  return;
}

