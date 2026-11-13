#define NAN(x) ((x) != (x))
extern int fn_822B7480();
extern int fn_822B8030();
extern int fn_822C67A0();
extern int fn_822C8D28();
extern int fn_8234B238();
extern int fn_8234B338();
extern int fn_8234B968();
extern int fn_8234D950();
extern int fn_8234EDA8();
extern int fn_82535F50();
extern int fn_825529B0();
extern int fn_8255F788();
extern int fn_8255FA88();
extern int fn_827EF828();
extern int fn_827F4968();
extern int fn_827F5730();
extern int fn_827F58E8();
extern int fn_8288B760();
extern int fn_82F63108();
extern unsigned int lbl_821954D8;
extern unsigned int ltcg_pool_0_0f;


void fn_822B6198(double param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  unsigned int *puVar3;
  unsigned __int64 in_r0;
  char cVar6;
  int iVar4;
  unsigned int uVar5;
  int iVar7;
  int iVar8;
  int iVar9;
  unsigned int uVar10;
  unsigned int *puVar11;
  int iVar12;
  double dVar13;
  double dVar14;
  unsigned int uVar15;
  unsigned int uVar16;
  unsigned int uVar17;
  unsigned int uVar18;
  unsigned int in_register_000104d0;
  unsigned int in_register_000104d4;
  unsigned int in_register_000104d8;
  unsigned int in_vr77;
  
  iVar1 = *(int *)(param_2 + 0x24);
  if (iVar1 != 0) {
    if ((*(int *)(iVar1 + 0x14) == 0) || (cVar6 = fn_8288B760(), cVar6 != '\0')) {
      uVar5 = *(unsigned int *)(iVar1 + 0xd4);
    }
    else {
      iVar4 = (**(int (***)())(**(int **)(iVar1 + 0x14) + 4))();
      uVar5 = (**(int (***)())(*(int *)(iVar4 + 0x7d4) + 0x3c))();
      uVar5 = uVar5 & 0xff;
    }
    if (uVar5 != 0) {
      uVar10 = *(unsigned int *)(iVar1 + 0x20);
      goto LAB_822b6220;
    }
  }
  uVar10 = 0;
LAB_822b6220:
  (**(int (***)())(**(int **)(param_2 + 0x110) + 4))(param_1);
  iVar1 = *(int *)(param_2 + 0x114);
  fn_822C8D28(iVar1);
  iVar12 = iVar1 + 0x50;
  piVar2 = *(int **)(iVar1 + 0x20);
  (**(int (***)())(*piVar2 + 0xc))(param_1,piVar2,iVar12);
  iVar4 = piVar2[9];
  iVar9 = iVar4 + 0x30;
  iVar7 = iVar4 + 0x20;
  puVar11 = (unsigned int *)((int)in_r0 + iVar7 & 0xfffffff0);
  uVar15 = *puVar11;
  uVar16 = puVar11[1];
  uVar17 = puVar11[2];
  uVar18 = puVar11[3];
  fn_822C67A0((double)*(float *)(iVar4 + 0x4c),param_1);
  puVar11 = (unsigned int *)((int)in_r0 + iVar7 & 0xfffffff0);
  *puVar11 = uVar15;
  puVar11[1] = uVar16;
  puVar11[2] = uVar17;
  puVar11[3] = uVar18;
  iVar8 = iVar4 + 0x10;
  puVar11 = (unsigned int *)((int)in_r0 + iVar4 & 0xfffffff0);
  uVar15 = *puVar11;
  uVar16 = puVar11[1];
  uVar17 = puVar11[2];
  uVar18 = puVar11[3];
  fn_822C67A0((double)*(float *)(iVar4 + 0x44));
  iVar7 = (int)in_r0;
  puVar11 = (unsigned int *)(iVar7 + iVar9 & 0xfffffff0);
  *puVar11 = in_register_000104d0;
  puVar11[1] = in_register_000104d4;
  puVar11[2] = in_register_000104d8;
  puVar11[3] = in_vr77;
  puVar11 = (unsigned int *)(iVar7 + iVar4 & 0xfffffff0);
  *puVar11 = uVar15;
  puVar11[1] = uVar16;
  puVar11[2] = uVar17;
  puVar11[3] = uVar18;
  puVar11 = (unsigned int *)(iVar7 + iVar8 & 0xfffffff0);
  *puVar11 = in_register_000104d0;
  puVar11[1] = in_register_000104d4;
  puVar11[2] = in_register_000104d8;
  puVar11[3] = in_vr77;
  (**(int (***)())(*piVar2 + 0x10))(param_1,piVar2);
  iVar4 = (int)in_r0;
  puVar3 = (unsigned int *)piVar2[0xd];
  for (puVar11 = (unsigned int *)piVar2[0xc]; puVar11 != puVar3; puVar11 = puVar11 + 2) {
    (**(int (***)())(*(int *)*puVar11 + 4))(param_1,(int *)*puVar11,piVar2,iVar12);
    iVar4 = (int)in_r0;
  }
  puVar11 = (unsigned int *)(iVar4 + iVar12 & 0xfffffff0);
  *puVar11 = in_register_000104d0;
  puVar11[1] = in_register_000104d4;
  puVar11[2] = in_register_000104d8;
  puVar11[3] = in_vr77;
  *(unsigned int *)(iVar1 + 0x7c) = 0;
  puVar11 = (unsigned int *)(iVar1 + 0x60U & 0xfffffff0);
  *puVar11 = in_register_000104d0;
  puVar11[1] = in_register_000104d4;
  puVar11[2] = in_register_000104d8;
  puVar11[3] = in_vr77;
  iVar1 = *(int *)(param_2 + 0x118);
  fn_8234EDA8(iVar1 + 0x28,uVar10);
  fn_8234D950(param_1,iVar1 + 0x70);
  fn_8234B968(iVar1 + 0x150);
  if (*(int *)(iVar1 + 0x2e0) != 0) {
    fn_8234B238(param_1,iVar1 + 0x2c0);
    fn_8234B338();
  }
  dVar14 = (double)ltcg_pool_0_0f;
  if ((*(int *)(*(int *)(iVar1 + 0x32c) + 0x114) != 0) && (iVar4 = fn_8255FA88(), iVar4 != 0))
  {
    dVar13 = (double)fn_827F4968(*(unsigned int *)(iVar1 + 0x334));
    if (dVar13 == dVar14) {
      cVar6 = fn_827F58E8();
      if (cVar6 != '\0') {
        fn_8255F788(dVar14,*(unsigned int *)(iVar1 + 0x32c));
      }
    }
    else {
      fn_827F5730(dVar14,(double)*(float *)(iVar1 + 0x33c),*(unsigned int *)(iVar1 + 0x334));
    }
  }
  fn_827EF828(param_1,*(unsigned int *)(iVar1 + 4));
  fn_822B8030(iVar1);
  (**(int (***)())(**(int **)(param_2 + 0x110) + 8))(param_1);
  if (*(int *)(param_2 + 0x150) != 0) {
    if (*(int *)(param_2 + 0x150) == 0) {
                    /* WARNING: Subroutine does not return */
      fn_82F63108();
    }
    (**(int (***)())(**(int **)(param_2 + 0x150) + 4))(param_1);
  }
  fn_822B7480(param_2);
  iVar1 = *(int *)(param_2 + 0x18);
  dVar13 = (double)(float)((double)*(float *)(iVar1 + 0xc) - param_1);
  if (*(float *)(&lbl_821954D8 +
                ((unsigned int)(unsigned char)((dVar13 < dVar14) << 2) | (unsigned int)(NAN(dVar13) || NAN(dVar14)) << 2)) <
      0.0) {
    dVar13 = dVar14;
  }
  *(float *)(iVar1 + 0xc) = (float)dVar13;
  iVar4 = fn_825529B0((unsigned int *)(iVar1 + 0x10));
  if (iVar4 != 0) {
    fn_82535F50(*(unsigned int *)(iVar1 + 0x10),*(unsigned int *)(iVar1 + 0x34));
  }
  return;
}

