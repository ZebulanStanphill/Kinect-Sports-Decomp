extern unsigned int *auStack_70;
extern unsigned int *auStack_7c;
extern int fn_82230110();
extern int fn_82230300();
extern int fn_82250A18();
extern int fn_8225F160();
extern int fn_8225F670();
extern int fn_8225FD88();
extern int fn_8225FDE0();
extern int fn_82260CD0();
extern int fn_82432C48();
extern int fn_8243BA70();
extern int fn_8251F720();
extern int fn_8251FA58();
extern int fn_8251FBA8();
extern int fn_82536690();
extern int fn_8258E3A8();
extern int fn_8265CA60();
extern int fn_8265CAA0();
extern int fn_82A1DD38();
extern int fn_82E1CAD0();
extern int fn_82E1CB08();
extern int fn_82E1CB88();
extern int fn_82E1CCA8();
extern int fn_82E1CD08();
extern unsigned int iStack_80;
extern unsigned int lbl_832660F8;
extern unsigned int lbl_832660FC;
extern unsigned int lbl_832760AA;
extern unsigned int lbl_832760AB;
extern unsigned int lbl_832760B8;
extern unsigned int lbl_832760BC;
extern unsigned int lbl_83276580;
extern unsigned int lbl_832975B0;


void fn_82439AD0(int param_1,unsigned int *param_2,unsigned int param_3)

{
  unsigned char uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  int *piVar4;
  unsigned int uVar5;
  unsigned int *puVar8;
  unsigned __int64 uVar6;
  int iVar9;
  int iVar10;
  int iVar11;
  char *pcVar12;
  char cVar13;
  unsigned __int64 uVar7;
  unsigned __int64 uVar14;
  unsigned int *puVar15;
  int iVar16;
  int iStack_80;
  unsigned int auStack_7c [3];
  unsigned char auStack_70 [112];
  
  *(unsigned int *)(*(int *)(param_1 + 0x40) + 0x20c) = param_3;
  if ((param_2 != (unsigned int *)0x0) &&
     (uVar14 = (unsigned __int64)*param_2, uVar14 != (uVar14 - 1) + (unsigned __int64)(uVar14 == 0))) {
    puVar8 = (unsigned int *)fn_8251F720(param_2,0);
    iVar11 = 0;
    for (puVar15 = puVar8; (puVar15 != (unsigned int *)0x0 && (*puVar15 != 0));
        puVar15 = (unsigned int *)(-(unsigned int)(puVar15[1] != 0) & (unsigned int)(puVar15 + 1))) {
      iVar11 = iVar11 + 1;
    }
    iVar16 = 0;
    puVar15 = puVar8;
    if (0 < iVar11) {
      do {
        if (puVar15 == (unsigned int *)0x0) break;
        uVar14 = (unsigned __int64)*puVar15;
        if (uVar14 != (uVar14 - 1) + (unsigned __int64)(uVar14 == 0)) {
          iVar9 = 0;
          uVar14 = fn_8251F720(puVar15,0);
          if (uVar14 != 0) {
            uVar6 = fn_8251FBA8(uVar14);
            iVar9 = fn_8265CA60();
            fn_82A1DD38(iVar9,uVar14,uVar6);
          }
          *(unsigned int *)(iVar9 + 300) = *(unsigned int *)(*(int *)(param_1 + 0x40) + 0x1d8);
          *(int *)(iVar9 + 0x130) = param_1;
          iVar10 = fn_82432C48();
          uVar6 = fn_82230110(auStack_70,iVar9);
          fn_8258E3A8(&iStack_80,iVar10 + 8,uVar6);
          fn_82230300(auStack_70,1,0);
          if ((iStack_80 == *(int *)(iVar10 + 0xc)) ||
             (*(int *)(iStack_80 + 0x2c) != *(int *)(iVar9 + 0x20))) {
            auStack_7c[0] = 0;
          }
          else {
            auStack_7c[0] = (**(int (***)())(iStack_80 + 0x28))(iVar9);
          }
          fn_82536690((unsigned __int64)*(unsigned int *)(param_1 + 0x40) + 0x1c4,auStack_7c);
          fn_8265CAA0(iVar9);
          if ((uVar14 & 0xffffffff) != 0) {
            fn_8251FA58(uVar14);
          }
        }
        iVar16 = iVar16 + 1;
        puVar15 = puVar15 + 1;
      } while (iVar16 < iVar11);
    }
    if (puVar8 != (unsigned int *)0x0) {
      fn_8251FA58(puVar8);
    }
  }
  iVar11 = *(int *)(param_1 + 0x40);
  if ((1 < (unsigned int)(*(int *)(iVar11 + 0x1c8) - *(int *)(iVar11 + 0x1c4) >> 2)) &&
     (*(int *)(*(int *)(*(int *)(iVar11 + 0x1d8) + 0x174) + 0xc4) != 0)) {
    fn_8243BA70(param_1);
  }
  iVar11 = *(int *)(param_1 + 0x40);
  if ((unsigned int)(*(int *)(iVar11 + 0x1c8) - *(int *)(iVar11 + 0x1c4) >> 2) < 2) {
    piVar4 = *(int **)(iVar11 + 0x1c4);
    if ((*(int *)(iVar11 + 0x1c8) - (int)piVar4 & 0xfffffffcU) == 4) {
      uVar6 = 0;
      iVar11 = *(int *)(*(int *)(*piVar4 + 0x40) + 0x114);
      if (iVar11 == 1) {
        uVar6 = 0;
      }
      else if (iVar11 == 2) {
        uVar6 = 1;
      }
      else if (iVar11 == 3) {
        uVar6 = 4;
      }
      else if (iVar11 == 4) {
        uVar6 = 3;
      }
      else if (iVar11 == 5) {
        uVar6 = 2;
      }
      iVar11 = lbl_832975B0;
      if (lbl_832975B0 == 0) {
        iVar11 = fn_82250A18();
      }
      iVar16 = *(int *)(*(int *)(*(int *)(param_1 + 0x40) + 0x1d8) + 0xa0);
      if ((iVar16 == 0) || (uVar7 = 1, *(int *)(iVar16 + 0x40) != 1)) {
        uVar7 = 0;
      }
      fn_82260CD0(uVar6,lbl_83276580,*(unsigned int *)(*(int *)(param_1 + 0x40) + 0x20c),uVar7,
                        *(unsigned char *)(iVar11 + 4));
    }
  }
  else {
    iVar11 = lbl_832975B0;
    if (lbl_832975B0 == 0) {
      iVar11 = fn_82250A18();
    }
    uVar1 = *(unsigned char *)(iVar11 + 4);
    iVar11 = *(int *)(*(int *)(*(int *)(param_1 + 0x40) + 0x1d8) + 0xa0);
    if ((iVar11 == 0) || (uVar6 = 1, *(int *)(iVar11 + 0x40) != 1)) {
      uVar6 = 0;
    }
    iVar11 = fn_8225F160();
    uVar5 = lbl_83276580;
    uVar2 = *(unsigned int *)(iVar11 + 0x14);
    uVar3 = *(unsigned int *)(*(int *)(param_1 + 0x40) + 0x20c);
    pcVar12 = (char *)fn_8225F670();
    if (((*pcVar12 != '\0') && (iVar11 = fn_8225FDE0(0x21,1), iVar11 == 0)) &&
       (cVar13 = fn_82E1CAD0(0x21), cVar13 != '\0')) {
      fn_82E1CD08();
      fn_82E1CB88(0xffffffff821a6b7c,uVar5);
      uVar7 = fn_8225FD88(uVar2);
      fn_82E1CB08(0xffffffff821a6874,uVar7,0);
      fn_82E1CB88(0xffffffff821a6b8c,uVar3);
      fn_82E1CB88(0xffffffff821a685c,uVar6);
      fn_82E1CB88(0xffffffff821a6868,uVar1);
      fn_82E1CCA8();
    }
    lbl_832760AA = 1;
    lbl_832760AB = 0;
    lbl_832760B8 = lbl_832660F8;
    lbl_832760BC = lbl_832660FC;
  }
  return;
}

