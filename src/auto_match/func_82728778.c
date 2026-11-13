extern unsigned int *auStack_60;
extern int fn_82681728();
extern int fn_826824B0();
extern int fn_826944C8();
extern int fn_826957D0();
extern int fn_82696330();
extern int fn_82696958();
extern int fn_82696D38();
extern int fn_826972E0();
extern int fn_82697700();
extern unsigned int iStack_84;
extern unsigned int iStack_88;
extern unsigned int iStack_8c;
extern unsigned int iStack_90;
extern unsigned int uStack_70;


unsigned int * fn_82728778(unsigned int *param_1,int param_2,unsigned __int64 param_3,unsigned int *param_4)

{
  char cVar1;
  unsigned int uVar2;
  unsigned __int64 uVar3;
  int iVar4;
  char cVar6;
  unsigned int uVar5;
  __int64 lVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  unsigned char bVar11;
  int *piVar12;
  int iStack_90;
  int iStack_8c;
  int iStack_88;
  int iStack_84;
  unsigned int *puStack_80;
  unsigned int *puStack_7c;
  unsigned int *puStack_78;
  unsigned int *puStack_74;
  unsigned __int64 uStack_70;
  unsigned char auStack_60 [96];
  
  *param_1 = *param_4;
  param_1[1] = param_4[1];
  param_1[2] = param_4[2];
  *(unsigned char *)(param_1 + 3) = *(unsigned char *)(param_4 + 3);
  if (*(int *)(param_2 + 0x1c) < 1) {
    return param_1;
  }
  uVar2 = *(unsigned int *)(param_2 + 0x18);
  uVar3 = fn_826957D0(param_2,param_3);
  iVar4 = fn_82696958(uVar3,uVar2);
  if (iVar4 == 0) {
    return param_1;
  }
  *(unsigned int *)(iVar4 + 8) = *(int *)(iVar4 + 8) + 1U & 0x8fffffff;
  piVar12 = (int *)(iVar4 + 0x10);
  auStack_60[0] = 0;
  fn_82681728(&iStack_90,(unsigned __int64)*(unsigned int *)(*(int *)(param_2 + 0x18) + 0x78) + 0x254,
                    0xffffffff82006688);
  cVar6 = (**(int (***)())(*(int *)(iVar4 + 0x10) + 0x10))
                    (piVar12,*(unsigned int *)(param_2 + 0x18),&iStack_90,auStack_60);
  lVar7 = (unsigned __int64)*(unsigned int *)(iStack_90 + 8) - 1;
  *(int *)(iStack_90 + 8) = (int)lVar7;
  if (lVar7 == 0) {
    fn_826944C8(iStack_90);
  }
  pcVar9 = "none";
  if (cVar6 != '\0') {
    fn_82696D38(&puStack_80,auStack_60,*(unsigned int *)(param_2 + 0x18),0xffffffffffffffff,0);
    pcVar10 = (char *)*puStack_80;
    pcVar8 = pcVar9;
    do {
      cVar6 = *pcVar10;
      cVar1 = *pcVar8;
      if (cVar6 == '\0') break;
      pcVar10 = pcVar10 + 1;
      pcVar8 = pcVar8 + 1;
    } while (cVar6 == cVar1);
    uVar5 = puStack_80[2];
    puStack_80[2] = (int)((unsigned __int64)uVar5 - 1);
    if ((unsigned __int64)uVar5 - 1 == 0) {
      fn_826944C8(puStack_80);
    }
    if (cVar6 == cVar1) {
      *(unsigned char *)(param_1 + 3) = *(unsigned char *)(param_1 + 3) & 0xef;
    }
    else {
      uStack_70 = fn_826972E0(auStack_60,*(unsigned int *)(param_2 + 0x18));
      if ((uStack_70 & 0x7ff0000000000000) != 0x7ff0000000000000) {
        uVar5 = fn_82697700(auStack_60,*(unsigned int *)(param_2 + 0x18));
        *(unsigned char *)(param_1 + 3) = *(unsigned char *)(param_1 + 3) | 0x10;
        param_1[1] = uVar5 | 0xff000000;
      }
    }
  }
  fn_82681728(&iStack_8c,(unsigned __int64)*(unsigned int *)(*(int *)(param_2 + 0x18) + 0x78) + 0x254,
                    0xffffffff820065d4);
  cVar6 = (**(int (***)())(*piVar12 + 0x10))
                    (piVar12,*(unsigned int *)(param_2 + 0x18),&iStack_8c,auStack_60);
  lVar7 = (unsigned __int64)*(unsigned int *)(iStack_8c + 8) - 1;
  *(int *)(iStack_8c + 8) = (int)lVar7;
  if (lVar7 == 0) {
    fn_826944C8(iStack_8c);
  }
  if (cVar6 != '\0') {
    fn_82696D38(&puStack_7c,auStack_60,*(unsigned int *)(param_2 + 0x18),0xffffffffffffffff,0);
    pcVar10 = (char *)*puStack_7c;
    pcVar8 = pcVar9;
    do {
      cVar6 = *pcVar10;
      cVar1 = *pcVar8;
      if (cVar6 == '\0') break;
      pcVar10 = pcVar10 + 1;
      pcVar8 = pcVar8 + 1;
    } while (cVar6 == cVar1);
    uVar5 = puStack_7c[2];
    puStack_7c[2] = (int)((unsigned __int64)uVar5 - 1);
    if ((unsigned __int64)uVar5 - 1 == 0) {
      fn_826944C8(puStack_7c);
    }
    if (cVar6 == cVar1) {
      bVar11 = *(unsigned char *)(param_1 + 3) & 0xf7;
    }
    else {
      uStack_70 = fn_826972E0(auStack_60,*(unsigned int *)(param_2 + 0x18));
      if ((uStack_70 & 0x7ff0000000000000) == 0x7ff0000000000000) goto LAB_82728a7c;
      uVar5 = fn_82697700(auStack_60,*(unsigned int *)(param_2 + 0x18));
      bVar11 = *(unsigned char *)(param_1 + 3) | 8;
      *param_1 = uVar5 | 0xff000000;
    }
    *(unsigned char *)(param_1 + 3) = bVar11;
  }
LAB_82728a7c:
  fn_82681728(&iStack_88,(unsigned __int64)*(unsigned int *)(*(int *)(param_2 + 0x18) + 0x78) + 0x254,
                    0xffffffff820111b0);
  cVar6 = (**(int (***)())(*piVar12 + 0x10))
                    (piVar12,*(unsigned int *)(param_2 + 0x18),&iStack_88,auStack_60);
  lVar7 = (unsigned __int64)*(unsigned int *)(iStack_88 + 8) - 1;
  *(int *)(iStack_88 + 8) = (int)lVar7;
  if (lVar7 == 0) {
    fn_826944C8(iStack_88);
  }
  if (cVar6 != '\0') {
    fn_82696D38(&puStack_78,auStack_60,*(unsigned int *)(param_2 + 0x18),0xffffffffffffffff,0);
    pcVar10 = (char *)*puStack_78;
    do {
      cVar6 = *pcVar10;
      cVar1 = *pcVar9;
      if (cVar6 == '\0') break;
      pcVar10 = pcVar10 + 1;
      pcVar9 = pcVar9 + 1;
    } while (cVar6 == cVar1);
    uVar5 = puStack_78[2];
    puStack_78[2] = (int)((unsigned __int64)uVar5 - 1);
    if ((unsigned __int64)uVar5 - 1 == 0) {
      fn_826944C8(puStack_78);
    }
    if (cVar6 == cVar1) {
      *(unsigned char *)(param_1 + 3) = *(unsigned char *)(param_1 + 3) & 0xdf;
    }
    else {
      uStack_70 = fn_826972E0(auStack_60,*(unsigned int *)(param_2 + 0x18));
      if ((uStack_70 & 0x7ff0000000000000) != 0x7ff0000000000000) {
        uVar5 = fn_82697700(auStack_60,*(unsigned int *)(param_2 + 0x18));
        *(unsigned char *)(param_1 + 3) = *(unsigned char *)(param_1 + 3) | 0x20;
        param_1[2] = uVar5 | 0xff000000;
      }
    }
  }
  fn_82681728(&iStack_84,(unsigned __int64)*(unsigned int *)(*(int *)(param_2 + 0x18) + 0x78) + 0x254,
                    0xffffffff820111a0);
  cVar6 = (**(int (***)())(*piVar12 + 0x10))
                    (piVar12,*(unsigned int *)(param_2 + 0x18),&iStack_84,auStack_60);
  lVar7 = (unsigned __int64)*(unsigned int *)(iStack_84 + 8) - 1;
  *(int *)(iStack_84 + 8) = (int)lVar7;
  if (lVar7 == 0) {
    fn_826944C8(iStack_84);
  }
  if (cVar6 == '\0') goto LAB_82728db4;
  fn_82696D38(&puStack_74,auStack_60,*(unsigned int *)(param_2 + 0x18),0xffffffffffffffff,0);
  pcVar8 = "dotted";
  pcVar9 = (char *)*puStack_74;
  pcVar10 = pcVar9;
  do {
    cVar6 = *pcVar10;
    cVar1 = *pcVar8;
    if (cVar6 == '\0') break;
    pcVar10 = pcVar10 + 1;
    pcVar8 = pcVar8 + 1;
  } while (cVar6 == cVar1);
  if (cVar6 == cVar1) {
    bVar11 = 3;
LAB_82728d84:
    bVar11 = bVar11 | *(unsigned char *)(param_1 + 3) & 0xf8;
LAB_82728d8c:
    *(unsigned char *)(param_1 + 3) = bVar11;
  }
  else {
    pcVar8 = "single";
    pcVar10 = pcVar9;
    do {
      cVar6 = *pcVar10;
      cVar1 = *pcVar8;
      if (cVar6 == '\0') break;
      pcVar10 = pcVar10 + 1;
      pcVar8 = pcVar8 + 1;
    } while (cVar6 == cVar1);
    if (cVar6 == cVar1) {
      bVar11 = *(unsigned char *)(param_1 + 3) & 0xf8 | 1;
      goto LAB_82728d8c;
    }
    pcVar8 = "thick";
    pcVar10 = pcVar9;
    do {
      cVar6 = *pcVar10;
      cVar1 = *pcVar8;
      if (cVar6 == '\0') break;
      pcVar10 = pcVar10 + 1;
      pcVar8 = pcVar8 + 1;
    } while (cVar6 == cVar1);
    if (cVar6 == cVar1) {
      bVar11 = *(unsigned char *)(param_1 + 3) & 0xf8 | 2;
      goto LAB_82728d8c;
    }
    pcVar8 = "ditheredSingle";
    pcVar10 = pcVar9;
    do {
      cVar6 = *pcVar10;
      cVar1 = *pcVar8;
      if (cVar6 == '\0') break;
      pcVar10 = pcVar10 + 1;
      pcVar8 = pcVar8 + 1;
    } while (cVar6 == cVar1);
    if (cVar6 == cVar1) {
      bVar11 = *(unsigned char *)(param_1 + 3) & 0xf8 | 4;
      goto LAB_82728d8c;
    }
    pcVar10 = "ditheredThick";
    do {
      cVar6 = *pcVar9;
      cVar1 = *pcVar10;
      if (cVar6 == '\0') break;
      pcVar9 = pcVar9 + 1;
      pcVar10 = pcVar10 + 1;
    } while (cVar6 == cVar1);
    if (cVar6 == cVar1) {
      bVar11 = 5;
      goto LAB_82728d84;
    }
    *(unsigned char *)(param_1 + 3) = *(unsigned char *)(param_1 + 3) & 0xf8;
  }
  uVar5 = puStack_74[2];
  puStack_74[2] = (int)((unsigned __int64)uVar5 - 1);
  if ((unsigned __int64)uVar5 - 1 == 0) {
    fn_826944C8();
  }
LAB_82728db4:
  fn_82696330(auStack_60);
  fn_826824B0(iVar4);
  return param_1;
}

