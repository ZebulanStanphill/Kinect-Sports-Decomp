typedef unsigned char bool;
#define true 1
#define false 0
extern unsigned int *auStack_60;
extern int fn_82275128();
extern int fn_82381BC0();
extern int fn_8249ABC0();
extern int fn_8249B9D0();
extern int fn_8249BC10();
extern int fn_8249BDC0();
extern int fn_8249BF48();
extern int fn_8249C0A0();
extern int fn_8249C1A8();
extern int fn_8249C418();
extern int fn_8249C5E8();
extern int fn_8249C720();
extern int fn_8249CB58();
extern int fn_8249D600();
extern int fn_8249D748();
extern int fn_8249D878();
extern int fn_8249DC50();
extern int fn_8249DDE8();
extern int fn_8249DF58();
extern int fn_8249E860();
extern int fn_8249EA90();
extern int fn_82512A48();
extern int fn_82672C20();
extern int fn_829C79C8();
extern int fn_82A1E928();
extern int fn_82F4DC10();
extern int fn_82F4DE10();
extern unsigned int lbl_821BF094;
extern unsigned int ltcg_pool_0_0f;
extern unsigned int lbl_83265A58;
extern unsigned int lbl_83265A5C;
extern unsigned int lbl_8326B4C8;
extern unsigned int lbl_8326B4D8;
extern unsigned int lbl_832766F6;
extern int (*lbl_83276794)();


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void fn_8249AC58(int param_1)

{
  unsigned int uVar1;
  int *piVar2;
  int *piVar3;
  unsigned int *puVar4;
  bool bVar5;
  char cVar6;
  int in_r0;
  int iVar7;
  unsigned int uVar8;
  int iVar9;
  int iVar10;
  unsigned int *puVar11;
  unsigned __int64 uVar12;
  int *piVar13;
  unsigned int *puVar14;
  unsigned int *puVar15;
  unsigned char bVar16;
  unsigned int uVar17;
  bool bVar18;
  unsigned int *puVar19;
  __int64 lVar20;
  unsigned int in_register_000104d0;
  unsigned int in_register_000104d4;
  unsigned int in_register_000104d8;
  unsigned int in_vr77;
  unsigned char auStack_60 [96];
  
  puVar11 = *(unsigned int **)(param_1 + 0x1c);
  piVar13 = (int *)(param_1 + 0x14);
  uVar8 = *(unsigned int *)(param_1 + 0x18);
  uVar1 = *(unsigned int *)(param_1 + 0x14);
  puVar11[5] = *(unsigned int *)(param_1 + 0x70);
  puVar11[2] = uVar8;
  puVar11[1] = uVar1;
  iVar7 = fn_82F4DC10();
  if (iVar7 == 0) {
    fn_8249EA90(*puVar11);
  }
  fn_8249DC50(puVar11);
  iVar7 = fn_8249ABC0();
  iVar7 = *(int *)(iVar7 + 0x20);
  if (iVar7 == 1) {
    uVar8 = puVar11[2];
  }
  else {
    uVar8 = puVar11[1];
  }
  puVar11[3] = uVar8;
  if (iVar7 == 1) {
    uVar8 = puVar11[1];
  }
  else {
    uVar8 = puVar11[2];
  }
  puVar11[4] = uVar8;
  fn_8249DDE8(puVar11);
  fn_8249DF58(puVar11);
  fn_8249E860(puVar11);
  puVar11[1] = 0;
  puVar14 = puVar11 + 0x2d;
  puVar11[2] = 0;
  puVar15 = puVar11 + 0x1c;
  lVar20 = 2;
  puVar11[3] = 0;
  puVar11[4] = 0;
  puVar11[5] = 0;
  puVar11[8] = 0;
  uVar8 = ltcg_pool_0_0f;
  puVar11[9] = 0;
  puVar11[10] = 0;
  puVar11[0x34] = 0xffffffff;
  do {
    puVar4 = (unsigned int *)(in_r0 + (int)puVar15 & 0xfffffff0);
    *puVar4 = in_register_000104d0;
    puVar4[1] = in_register_000104d4;
    puVar4[2] = in_register_000104d8;
    puVar4[3] = in_vr77;
    puVar15 = puVar15 + 4;
    puVar14[-1] = uVar8;
    puVar14 = puVar14 + 1;
    *puVar14 = uVar8;
    lVar20 = lVar20 + -1;
  } while (lVar20 != 0);
  puVar11[0x31] = 0;
  puVar11[0x32] = 0;
  puVar11[0x33] = 0xffffffff;
  puVar11[0x39] = 0;
  fn_8249BF48(param_1);
  lVar20 = 2;
  *(unsigned int *)(param_1 + 0x54) = *(unsigned int *)(param_1 + 0x50);
  do {
    piVar2 = *(int **)(param_1 + 0x38);
    uVar17 = 0;
    iVar7 = *piVar13;
    piVar3 = (int *)*piVar2;
    while (piVar3 != piVar2) {
      iVar9 = (*(int (**)())**(unsigned int **)piVar3[4])((unsigned int *)piVar3[4],iVar7);
      if (iVar9 == 0) {
        uVar17 = piVar3[3] | uVar17;
      }
      fn_82381BC0(auStack_60);
      piVar2 = *(int **)(param_1 + 0x38);
    }
    *(unsigned int *)(iVar7 + 0x24) = uVar17;
    fn_8249C0A0(param_1,iVar7);
    lVar20 = lVar20 + -1;
    piVar13 = piVar13 + 1;
  } while (lVar20 != 0);
  uVar8 = fn_8249C1A8(param_1);
  *(unsigned int *)(param_1 + 0x50) = uVar8;
  if (*(int *)(param_1 + 0x80) != 0) {
    if (*(int *)(param_1 + 0x7c) != 0) {
      if (lbl_83276794 == (int (**)())0x0) {
        iVar7 = 0;
      }
      else {
        iVar7 = (*lbl_83276794)();
      }
      if (iVar7 == 0) goto LAB_8249ae58;
      *(unsigned int *)(param_1 + 0x7c) = 0;
    }
    if (*(int *)(param_1 + 0x98) != 0) {
      fn_82512A48();
      *(unsigned int *)(param_1 + 0x98) = 0;
    }
    *(unsigned int *)(param_1 + 0x80) = 0;
  }
LAB_8249ae58:
  uVar17 = *(unsigned int *)(param_1 + 8);
  if (uVar17 == 0) {
    iVar7 = fn_8249D600(*(unsigned int *)(param_1 + 0x110),*(unsigned int *)(param_1 + 4));
    if (iVar7 != 0) {
      if ((*(unsigned int *)(param_1 + 0x5c) & *(unsigned int *)(param_1 + 0x50)) == 0) {
        if (*(int *)(param_1 + 0x88) == 0) {
          iVar7 = *(int *)(*(int *)(param_1 + 0x110) + 0x2c);
          if (*(int *)(param_1 + 8) == 0) {
            iVar9 = fn_8249D600(*(int *)(param_1 + 0x110),*(unsigned int *)(param_1 + 4));
            bVar16 = 0;
            if (iVar9 != 0) goto LAB_8249af30;
          }
          else {
LAB_8249af30:
            bVar16 = 1;
          }
          if ((bool)(iVar7 == 0 & bVar16)) {
            *(unsigned int *)(param_1 + 0x8c) = 1;
          }
        }
      }
      else {
        uVar12 = 1;
LAB_8249aee8:
        fn_8249B9D0(param_1,uVar12);
      }
    }
  }
  else if (uVar17 == 1) {
    fn_8249BC10(param_1);
  }
  else if (uVar17 < 3) {
    if (*(int *)(param_1 + 0x88) == 0) {
      uVar17 = *(unsigned int *)(param_1 + 0x60);
    }
    else {
      uVar17 = *(unsigned int *)(param_1 + 100);
    }
    if ((*(unsigned int *)(param_1 + 0x50) & uVar17) == 0) {
      uVar12 = 3;
      goto LAB_8249aee8;
    }
  }
  else if (uVar17 == 3) {
    fn_8249BDC0(param_1,0);
  }
  iVar7 = *(int *)(param_1 + 8);
  if ((iVar7 == 0) || (bVar16 = 0, iVar7 == 2)) {
    bVar16 = 1;
  }
  iVar9 = *(int *)(param_1 + 0xb4);
  if ((lbl_83265A58 == 1) || (bVar5 = false, lbl_83265A5C != 0)) {
    bVar5 = true;
  }
  puVar19 = &lbl_821BF094;
  bVar18 = iVar7 == 3;
  lVar20 = 5;
  do {
    iVar7 = fn_8249C418(param_1,*puVar19,bVar18,iVar9 == 0 & bVar16 & !bVar5,
                              (*(unsigned int *)(param_1 + 0x6c) & *puVar19) == 0);
    if (iVar7 == 0) {
      bVar18 = true;
    }
    lVar20 = lVar20 + -1;
    puVar19 = puVar19 + 1;
  } while (lVar20 != 0);
  if (*(int *)(param_1 + 0xe8) != 0) {
    if (((*(int *)(param_1 + 8) != 2) || (*(int *)(param_1 + 0x88) != 0)) ||
       (uVar8 = 0, *(int *)(param_1 + 0xb4) != 0)) {
      uVar8 = 1;
    }
    iVar7 = fn_82275128();
    *(unsigned int *)(iVar7 + 0x1c) = uVar8;
    iVar7 = fn_82275128();
    *(unsigned int *)(iVar7 + 0x20) = uVar8;
  }
  cVar6 = lbl_832766F6;
  iVar7 = fn_82F4DE10();
  if (((iVar7 == 0) || (cVar6 == '\0')) || (*(int *)(param_1 + 0xac) != 0)) {
    iVar7 = fn_82F4DE10();
    if (((iVar7 == 0) || (cVar6 == '\0')) && (*(int *)(param_1 + 0xac) != 0)) {
      fn_82672C20(*(unsigned int *)(param_1 + 0xa0),0xffffffff821bf074,0,0);
      *(unsigned int *)(param_1 + 0xac) = 0;
    }
  }
  else {
    fn_82672C20(*(unsigned int *)(param_1 + 0xa0),0xffffffff821bf064,0,0);
    *(unsigned int *)(param_1 + 0xac) = 1;
  }
  if ((*(int *)(param_1 + 8) == 2) || (*(int *)(param_1 + 8) == 1)) {
    iVar7 = fn_8249D748(*(unsigned int *)(param_1 + 0x110));
    if (iVar7 == 0) {
      fn_8249B9D0(param_1,3);
    }
    *(unsigned int *)(param_1 + 0x118) = 0;
  }
  if ((*(unsigned int *)(param_1 + 0x50) & 8) != 0) {
    iVar7 = *(int *)(param_1 + 0x110);
    iVar10 = fn_8249D878(0);
    iVar9 = *(int *)(iVar7 + 0x14);
    if (*(int *)(iVar7 + 0x10) != iVar9) {
      iVar10 = *(int *)(iVar9 + -8);
    }
    if ((iVar10 == 0) && (*(int *)(param_1 + 0xb0) != 0)) {
      puVar11 = (unsigned int *)fn_8249CB58(param_1 + 0x34,auStack_60);
      (**(int (***)())(*(int *)*puVar11 + 0xc))((int *)*puVar11,*(unsigned int *)(param_1 + 0xb0));
    }
  }
  uVar17 = 0;
  if (lbl_8326B4D8 == 0) {
    piVar13 = &lbl_8326B4C8;
    lVar20 = 4;
    do {
      iVar7 = *piVar13;
      if (iVar7 != 0) {
        uVar17 = *(unsigned int *)(*(int *)(iVar7 + 0x34) * 0x28 + iVar7 + 0x38) & 0x8000 | uVar17;
      }
      piVar13 = piVar13 + 1;
      lVar20 = lVar20 + -1;
    } while (lVar20 != 0);
    if (uVar17 != 0) {
      fn_829C79C8();
      goto LAB_8249b1f4;
    }
  }
  fn_82A1E928(0xff,0xc,auStack_60);
LAB_8249b1f4:
  fn_8249C5E8(param_1);
  fn_8249C720(param_1);
  return;
}

