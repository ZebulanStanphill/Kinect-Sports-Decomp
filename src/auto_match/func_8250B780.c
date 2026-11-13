#define true 1
extern unsigned int *auStack_110;
extern unsigned int *auStack_130;
extern unsigned int *auStack_70;
extern unsigned int *auStack_90;
extern unsigned int *auStack_b0;
extern unsigned int *auStack_d0;
extern unsigned int *auStack_f0;
extern int fn_8250A688();
extern int fn_8250BFE0();
extern unsigned int uStack_114;
extern unsigned int uStack_134;
extern unsigned int uStack_74;
extern unsigned int uStack_94;
extern unsigned int uStack_b4;
extern unsigned int uStack_d4;
extern unsigned int uStack_f4;


unsigned int * fn_8250B780(unsigned int *param_1,unsigned int param_2,unsigned int param_3,unsigned __int64 param_4)

{
  unsigned int uVar1;
  char cVar2;
  unsigned int *puVar3;
  unsigned int *puVar4;
  unsigned int uVar5;
  int iVar6;
  int iVar7;
  unsigned int uVar8;
  int iVar9;
  unsigned int uVar10;
  unsigned int uVar11;
  unsigned int uVar12;
  unsigned int uVar13;
  __int64 lVar14;
  unsigned int uStack_134;
  unsigned int auStack_130 [7];
  unsigned int uStack_114;
  unsigned int auStack_110 [7];
  unsigned int uStack_f4;
  unsigned int auStack_f0 [7];
  unsigned int uStack_d4;
  unsigned int auStack_d0 [7];
  unsigned int uStack_b4;
  unsigned int auStack_b0 [7];
  unsigned int uStack_94;
  unsigned int auStack_90 [7];
  unsigned int uStack_74;
  unsigned int auStack_70 [28];
  
  iVar9 = param_3 - 0x14;
  uVar12 = (int)(param_3 - param_2) / 0x14;
  iVar6 = (int)(iVar9 - param_2) / 0x14;
  uVar12 = (((int)uVar12 >> 1) + (unsigned int)((int)uVar12 < 0 && (uVar12 & 1) != 0)) * 0x14 + param_2;
  uVar5 = param_2;
  if (0x28 < iVar6) {
    uVar5 = iVar6 + 1;
    iVar6 = ((int)uVar5 >> 3) + (unsigned int)((int)uVar5 < 0 && (uVar5 & 7) != 0);
    uVar5 = iVar6 * 0x14 + param_2;
    fn_8250BFE0(param_2,uVar5,iVar6 * 0x28 + param_2);
    fn_8250BFE0(uVar12 + iVar6 * -0x14,uVar12,iVar6 * 0x14 + uVar12,param_4);
    iVar7 = iVar9 + iVar6 * -0x14;
    fn_8250BFE0(iVar9 + iVar6 * -0x28,iVar7,iVar9,param_4);
    iVar9 = iVar7;
  }
  fn_8250BFE0(uVar5,uVar12,iVar9,param_4);
  uVar5 = uVar12 + 0x14;
  while (uVar11 = uVar12, param_2 < uVar11) {
    uVar12 = uVar11 - 0x14;
    cVar2 = fn_8250A688(uVar12,uVar11);
    if ((cVar2 != '\0') || (cVar2 = fn_8250A688(uVar11,uVar12), cVar2 != '\0')) break;
  }
  while ((uVar8 = uVar5, uVar12 = uVar11, uVar5 < param_3 &&
         ((cVar2 = fn_8250A688(uVar5,uVar11), cVar2 == '\0' &&
          (cVar2 = fn_8250A688(uVar11,uVar5), cVar2 == '\0'))))) {
    uVar5 = uVar5 + 0x14;
  }
LAB_8250b94c:
  do {
    for (; uVar10 = uVar12, uVar1 = uVar11, uVar8 < param_3; uVar8 = uVar8 + 0x14) {
      cVar2 = fn_8250A688(uVar11,uVar8);
      if (cVar2 == '\0') {
        cVar2 = fn_8250A688(uVar8,uVar11);
        if (cVar2 != '\0') break;
        puVar3 = &uStack_114;
        uVar10 = uVar5 + 0x14;
        puVar4 = (unsigned int *)(uVar5 - 4);
        lVar14 = 5;
        do {
          puVar4 = puVar4 + 1;
          puVar3 = puVar3 + 1;
          *puVar3 = *puVar4;
          lVar14 = lVar14 + -1;
        } while (lVar14 != 0);
        puVar4 = (unsigned int *)(uVar8 - 4);
        puVar3 = (unsigned int *)(uVar5 - 4);
        lVar14 = 5;
        do {
          puVar4 = puVar4 + 1;
          puVar3 = puVar3 + 1;
          *puVar3 = *puVar4;
          lVar14 = lVar14 + -1;
        } while (lVar14 != 0);
        puVar4 = &uStack_114;
        puVar3 = (unsigned int *)(uVar8 - 4);
        lVar14 = 5;
        do {
          puVar4 = puVar4 + 1;
          puVar3 = puVar3 + 1;
          *puVar3 = *puVar4;
          lVar14 = lVar14 + -1;
          uVar5 = uVar10;
        } while (lVar14 != 0);
      }
LAB_8250b948:;}
    for (; param_2 < uVar10; uVar10 = uVar10 - 0x14) {
      uVar13 = uVar12 - 0x14;
      cVar2 = fn_8250A688(uVar13,uVar1);
      uVar11 = uVar1;
      if (cVar2 == '\0') {
        cVar2 = fn_8250A688(uVar1,uVar13);
        if (cVar2 != '\0') break;
        uVar11 = uVar1 - 0x14;
        puVar3 = &uStack_94;
        puVar4 = (unsigned int *)(uVar1 - 0x18);
        lVar14 = 5;
        do {
          puVar4 = puVar4 + 1;
          puVar3 = puVar3 + 1;
          *puVar3 = *puVar4;
          lVar14 = lVar14 + -1;
        } while (lVar14 != 0);
        puVar4 = (unsigned int *)(uVar12 - 0x18);
        puVar3 = (unsigned int *)(uVar1 - 0x18);
        lVar14 = 5;
        do {
          puVar4 = puVar4 + 1;
          puVar3 = puVar3 + 1;
          *puVar3 = *puVar4;
          lVar14 = lVar14 + -1;
        } while (lVar14 != 0);
        puVar4 = &uStack_94;
        puVar3 = (unsigned int *)(uVar12 - 0x18);
        lVar14 = 5;
        do {
          puVar4 = puVar4 + 1;
          puVar3 = puVar3 + 1;
          *puVar3 = *puVar4;
          lVar14 = lVar14 + -1;
        } while (lVar14 != 0);
      }
      uVar12 = uVar13;
      uVar1 = uVar11;
    }
    if (uVar10 != param_2) {
      if (uVar8 != param_3) {
        puVar3 = &uStack_74;
        uVar12 = uVar10 - 0x14;
        puVar4 = (unsigned int *)(uVar8 - 4);
        lVar14 = 5;
        do {
          puVar4 = puVar4 + 1;
          puVar3 = puVar3 + 1;
          *puVar3 = *puVar4;
          lVar14 = lVar14 + -1;
        } while (lVar14 != 0);
        puVar4 = (unsigned int *)(uVar10 - 0x18);
        puVar3 = (unsigned int *)(uVar8 - 4);
        lVar14 = 5;
        do {
          puVar4 = puVar4 + 1;
          puVar3 = puVar3 + 1;
          *puVar3 = *puVar4;
          lVar14 = lVar14 + -1;
        } while (lVar14 != 0);
        puVar4 = &uStack_74;
        puVar3 = (unsigned int *)(uVar10 - 0x18);
        lVar14 = 5;
        do {
          puVar4 = puVar4 + 1;
          puVar3 = puVar3 + 1;
          *puVar3 = *puVar4;
          lVar14 = lVar14 + -1;
          uVar11 = uVar1;
        } while (lVar14 != 0);
        goto LAB_8250b948;
      }
      uVar12 = uVar10 - 0x14;
      uVar11 = uVar1 - 0x14;
      if (uVar12 != uVar11) {
        puVar3 = &uStack_f4;
        puVar4 = (unsigned int *)(uVar10 - 0x18);
        lVar14 = 5;
        do {
          puVar4 = puVar4 + 1;
          puVar3 = puVar3 + 1;
          *puVar3 = *puVar4;
          lVar14 = lVar14 + -1;
        } while (lVar14 != 0);
        puVar4 = (unsigned int *)(uVar1 - 0x18);
        puVar3 = (unsigned int *)(uVar10 - 0x18);
        lVar14 = 5;
        do {
          puVar4 = puVar4 + 1;
          puVar3 = puVar3 + 1;
          *puVar3 = *puVar4;
          lVar14 = lVar14 + -1;
        } while (lVar14 != 0);
        puVar4 = &uStack_f4;
        puVar3 = (unsigned int *)(uVar1 - 0x18);
        lVar14 = 5;
        do {
          puVar4 = puVar4 + 1;
          puVar3 = puVar3 + 1;
          *puVar3 = *puVar4;
          lVar14 = lVar14 + -1;
        } while (lVar14 != 0);
      }
      uVar10 = uVar5 - 0x14;
      puVar3 = &uStack_b4;
      puVar4 = (unsigned int *)(uVar1 - 0x18);
      lVar14 = 5;
      do {
        puVar4 = puVar4 + 1;
        puVar3 = puVar3 + 1;
        *puVar3 = *puVar4;
        lVar14 = lVar14 + -1;
      } while (lVar14 != 0);
      puVar4 = (unsigned int *)(uVar5 - 0x18);
      puVar3 = (unsigned int *)(uVar1 - 0x18);
      lVar14 = 5;
      do {
        puVar4 = puVar4 + 1;
        puVar3 = puVar3 + 1;
        *puVar3 = *puVar4;
        lVar14 = lVar14 + -1;
      } while (lVar14 != 0);
      puVar4 = &uStack_b4;
      puVar3 = (unsigned int *)(uVar5 - 0x18);
      lVar14 = 5;
      do {
        puVar4 = puVar4 + 1;
        puVar3 = puVar3 + 1;
        *puVar3 = *puVar4;
        lVar14 = lVar14 + -1;
        uVar5 = uVar10;
      } while (lVar14 != 0);
      goto LAB_8250b94c;
    }
    if (uVar8 == param_3) {
      *param_1 = uVar1;
      param_1[1] = uVar5;
      return param_1;
    }
    if (uVar5 != uVar8) {
      puVar3 = &uStack_d4;
      puVar4 = (unsigned int *)(uVar1 - 4);
      lVar14 = 5;
      do {
        puVar4 = puVar4 + 1;
        puVar3 = puVar3 + 1;
        *puVar3 = *puVar4;
        lVar14 = lVar14 + -1;
      } while (lVar14 != 0);
      puVar4 = (unsigned int *)(uVar5 - 4);
      puVar3 = (unsigned int *)(uVar1 - 4);
      lVar14 = 5;
      do {
        puVar4 = puVar4 + 1;
        puVar3 = puVar3 + 1;
        *puVar3 = *puVar4;
        lVar14 = lVar14 + -1;
      } while (lVar14 != 0);
      puVar4 = &uStack_d4;
      puVar3 = (unsigned int *)(uVar5 - 4);
      lVar14 = 5;
      do {
        puVar4 = puVar4 + 1;
        puVar3 = puVar3 + 1;
        *puVar3 = *puVar4;
        lVar14 = lVar14 + -1;
      } while (lVar14 != 0);
    }
    puVar3 = &uStack_134;
    uVar5 = uVar5 + 0x14;
    lVar14 = 5;
    uVar11 = uVar1 + 0x14;
    uVar13 = uVar8 + 0x14;
    puVar4 = (unsigned int *)(uVar1 - 4);
    do {
      puVar4 = puVar4 + 1;
      puVar3 = puVar3 + 1;
      *puVar3 = *puVar4;
      lVar14 = lVar14 + -1;
    } while (lVar14 != 0);
    puVar4 = (unsigned int *)(uVar8 - 4);
    puVar3 = (unsigned int *)(uVar1 - 4);
    lVar14 = 5;
    do {
      puVar4 = puVar4 + 1;
      puVar3 = puVar3 + 1;
      *puVar3 = *puVar4;
      lVar14 = lVar14 + -1;
    } while (lVar14 != 0);
    puVar4 = &uStack_134;
    puVar3 = (unsigned int *)(uVar8 - 4);
    lVar14 = 5;
    do {
      puVar4 = puVar4 + 1;
      puVar3 = puVar3 + 1;
      *puVar3 = *puVar4;
      lVar14 = lVar14 + -1;
      uVar8 = uVar13;
      uVar12 = uVar10;
    } while (lVar14 != 0);
  } while( true );
}

