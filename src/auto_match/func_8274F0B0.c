extern int fn_82695608();
extern int fn_826972E0();
extern int fn_82697610();
extern int fn_82697700();
extern int fn_826A7380();
extern int fn_826C1BA0();
extern int fn_826D6630();
extern unsigned int lbl_82002C5C;
extern unsigned int lbl_82005CCC;
extern unsigned int lbl_82011638;
extern unsigned int uStack_1c;


unsigned __int64 fn_8274F0B0(int param_1,unsigned __int64 param_2,unsigned int *param_3,unsigned __int64 param_4)

{
  char cVar1;
  unsigned char uVar2;
  short sVar5;
  unsigned int uVar4;
  char cVar6;
  unsigned __int64 uVar3;
  unsigned __int64 uVar7;
  char *pcVar8;
  char *pcVar9;
  unsigned char bVar11;
  char *pcVar10;
  double dVar12;
  unsigned int uStack_1c;
  
  pcVar8 = "alpha";
  pcVar10 = *(char **)*param_3;
  pcVar9 = pcVar10;
  do {
    cVar6 = *pcVar9;
    cVar1 = *pcVar8;
    if (cVar6 == '\0') break;
    pcVar9 = pcVar9 + 1;
    pcVar8 = pcVar8 + 1;
  } while (cVar6 == cVar1);
  if (cVar6 == cVar1) {
    dVar12 = (double)fn_826972E0();
    uStack_1c = ((((unsigned __int64)(uStack_1c)) & (~(((unsigned __int64)0xFF) << 24))) | ((((unsigned __int64)((unsigned char)(__int64)((float)dVar12 * lbl_82005CCC))) & ((unsigned __int64)0xFF)) << 24));
    *(unsigned char *)(param_1 + 0x28) = (unsigned char)uStack_1c;
    return 1;
  }
  pcVar8 = "angle";
  pcVar9 = pcVar10;
  do {
    cVar6 = *pcVar9;
    cVar1 = *pcVar8;
    if (cVar6 == '\0') break;
    pcVar9 = pcVar9 + 1;
    pcVar8 = pcVar8 + 1;
  } while (cVar6 == cVar1);
  if (cVar6 == cVar1) {
    sVar5 = fn_82697610();
    *(short *)(param_1 + 0x24) = sVar5 * 10;
    return 1;
  }
  pcVar8 = "blurX";
  pcVar9 = pcVar10;
  do {
    cVar6 = *pcVar9;
    cVar1 = *pcVar8;
    if (cVar6 == '\0') break;
    pcVar9 = pcVar9 + 1;
    pcVar8 = pcVar8 + 1;
  } while (cVar6 == cVar1);
  if (cVar6 == cVar1) {
    dVar12 = (double)fn_826972E0();
    uStack_1c = (unsigned int)(__int64)((float)dVar12 * lbl_82011638 + lbl_82002C5C);
    if (0xfe < uStack_1c) {
      uStack_1c = 0xff;
    }
    *(char *)(param_1 + 0x21) = (char)uStack_1c;
    return 1;
  }
  pcVar8 = "blurY";
  pcVar9 = pcVar10;
  do {
    cVar6 = *pcVar9;
    cVar1 = *pcVar8;
    if (cVar6 == '\0') break;
    pcVar9 = pcVar9 + 1;
    pcVar8 = pcVar8 + 1;
  } while (cVar6 == cVar1);
  if (cVar6 == cVar1) {
    dVar12 = (double)fn_826972E0();
    uStack_1c = (unsigned int)(__int64)((float)dVar12 * lbl_82011638 + lbl_82002C5C);
    if (0xfe < uStack_1c) {
      uStack_1c = 0xff;
    }
    *(char *)(param_1 + 0x22) = (char)uStack_1c;
    return 1;
  }
  pcVar8 = "color";
  pcVar9 = pcVar10;
  do {
    cVar6 = *pcVar9;
    cVar1 = *pcVar8;
    if (cVar6 == '\0') break;
    pcVar9 = pcVar9 + 1;
    pcVar8 = pcVar8 + 1;
  } while (cVar6 == cVar1);
  if (cVar6 == cVar1) {
    uVar4 = fn_82697700();
    uVar2 = *(unsigned char *)(param_1 + 0x28);
    *(unsigned int *)(param_1 + 0x28) = uVar4;
    *(unsigned char *)(param_1 + 0x28) = uVar2;
    return 1;
  }
  pcVar8 = "distance";
  pcVar9 = pcVar10;
  do {
    cVar6 = *pcVar9;
    cVar1 = *pcVar8;
    if (cVar6 == '\0') break;
    pcVar9 = pcVar9 + 1;
    pcVar8 = pcVar8 + 1;
  } while (cVar6 == cVar1);
  if (cVar6 == cVar1) {
    sVar5 = fn_82697610();
    *(short *)(param_1 + 0x26) = sVar5 * 0x14;
    return 1;
  }
  pcVar8 = "hideObject";
  pcVar9 = pcVar10;
  do {
    cVar6 = *pcVar9;
    cVar1 = *pcVar8;
    if (cVar6 == '\0') break;
    pcVar9 = pcVar9 + 1;
    pcVar8 = pcVar8 + 1;
  } while (cVar6 == cVar1);
  if (cVar6 == cVar1) {
    cVar6 = fn_82695608();
    if (cVar6 == '\0') {
      bVar11 = *(unsigned char *)(param_1 + 0x20) & 0xbf;
    }
    else {
      bVar11 = *(unsigned char *)(param_1 + 0x20) | 0x40;
    }
LAB_8274f370:
    *(unsigned char *)(param_1 + 0x20) = bVar11;
  }
  else {
    pcVar8 = "inner";
    pcVar9 = pcVar10;
    do {
      cVar6 = *pcVar9;
      cVar1 = *pcVar8;
      if (cVar6 == '\0') break;
      pcVar9 = pcVar9 + 1;
      pcVar8 = pcVar8 + 1;
    } while (cVar6 == cVar1);
    if (cVar6 == cVar1) {
      uVar3 = fn_826A7380(param_2);
      if ((uVar3 & 0xffffffff) == 0) {
        return 1;
      }
      uVar7 = 0xffffffff820138c4;
    }
    else {
      pcVar8 = "knockout";
      pcVar9 = pcVar10;
      do {
        cVar6 = *pcVar9;
        cVar1 = *pcVar8;
        if (cVar6 == '\0') break;
        pcVar9 = pcVar9 + 1;
        pcVar8 = pcVar8 + 1;
      } while (cVar6 == cVar1);
      if (cVar6 == cVar1) {
        cVar6 = fn_82695608();
        if (cVar6 == '\0') {
          bVar11 = *(unsigned char *)(param_1 + 0x20) & 0xdf;
        }
        else {
          bVar11 = *(unsigned char *)(param_1 + 0x20) | 0x20;
        }
        goto LAB_8274f370;
      }
      pcVar8 = "quality";
      pcVar9 = pcVar10;
      do {
        cVar6 = *pcVar9;
        cVar1 = *pcVar8;
        if (cVar6 == '\0') break;
        pcVar9 = pcVar9 + 1;
        pcVar8 = pcVar8 + 1;
      } while (cVar6 == cVar1);
      if (cVar6 != cVar1) {
        pcVar9 = "strength";
        do {
          cVar6 = *pcVar10;
          cVar1 = *pcVar9;
          if (cVar6 == '\0') break;
          pcVar10 = pcVar10 + 1;
          pcVar9 = pcVar9 + 1;
        } while (cVar6 == cVar1);
        if (cVar6 != cVar1) {
          uVar7 = fn_826C1BA0(param_1,param_2,param_3,param_4);
          return uVar7;
        }
        dVar12 = (double)fn_826972E0();
        uStack_1c = (unsigned int)(__int64)((float)dVar12 * lbl_82011638 + lbl_82002C5C);
        if (0xfe < uStack_1c) {
          uStack_1c = 0xff;
        }
        *(char *)(param_1 + 0x23) = (char)uStack_1c;
        return 1;
      }
      uVar3 = fn_826A7380(param_2);
      if ((uVar3 & 0xffffffff) == 0) {
        return 1;
      }
      uVar7 = 0xffffffff82013870;
    }
    fn_826D6630(uVar3 + 0xc,uVar7);
  }
  return 1;
}

