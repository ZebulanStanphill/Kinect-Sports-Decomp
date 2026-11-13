extern int fn_82695608();
extern int fn_826972E0();
extern int fn_82697700();
extern int fn_826A7380();
extern int fn_826C1BA0();
extern int fn_826D6630();
extern unsigned int lbl_82002C5C;
extern unsigned int lbl_82005CCC;
extern unsigned int lbl_82011638;
extern unsigned int uStack_1c;


unsigned __int64 fn_827506D8(int param_1,unsigned __int64 param_2,unsigned int *param_3,unsigned __int64 param_4)

{
  char cVar1;
  unsigned char uVar2;
  unsigned int uVar4;
  unsigned __int64 uVar3;
  char cVar5;
  unsigned __int64 uVar6;
  char *pcVar7;
  char *pcVar8;
  unsigned char bVar10;
  char *pcVar9;
  double dVar11;
  unsigned int uStack_1c;
  
  pcVar7 = "alpha";
  pcVar9 = *(char **)*param_3;
  pcVar8 = pcVar9;
  do {
    cVar5 = *pcVar8;
    cVar1 = *pcVar7;
    if (cVar5 == '\0') break;
    pcVar8 = pcVar8 + 1;
    pcVar7 = pcVar7 + 1;
  } while (cVar5 == cVar1);
  if (cVar5 == cVar1) {
    dVar11 = (double)fn_826972E0();
    uStack_1c = ((((unsigned __int64)(uStack_1c)) & (~(((unsigned __int64)0xFF) << 24))) | ((((unsigned __int64)((unsigned char)(__int64)((float)dVar11 * lbl_82005CCC))) & ((unsigned __int64)0xFF)) << 24));
    *(unsigned char *)(param_1 + 0x28) = (unsigned char)uStack_1c;
    return 1;
  }
  pcVar7 = "blurX";
  pcVar8 = pcVar9;
  do {
    cVar5 = *pcVar8;
    cVar1 = *pcVar7;
    if (cVar5 == '\0') break;
    pcVar8 = pcVar8 + 1;
    pcVar7 = pcVar7 + 1;
  } while (cVar5 == cVar1);
  if (cVar5 == cVar1) {
    dVar11 = (double)fn_826972E0();
    uStack_1c = (unsigned int)(__int64)((float)dVar11 * lbl_82011638 + lbl_82002C5C);
    if (0xfe < uStack_1c) {
      uStack_1c = 0xff;
    }
    *(char *)(param_1 + 0x21) = (char)uStack_1c;
    return 1;
  }
  pcVar7 = "blurY";
  pcVar8 = pcVar9;
  do {
    cVar5 = *pcVar8;
    cVar1 = *pcVar7;
    if (cVar5 == '\0') break;
    pcVar8 = pcVar8 + 1;
    pcVar7 = pcVar7 + 1;
  } while (cVar5 == cVar1);
  if (cVar5 == cVar1) {
    dVar11 = (double)fn_826972E0();
    uStack_1c = (unsigned int)(__int64)((float)dVar11 * lbl_82011638 + lbl_82002C5C);
    if (0xfe < uStack_1c) {
      uStack_1c = 0xff;
    }
    *(char *)(param_1 + 0x22) = (char)uStack_1c;
    return 1;
  }
  pcVar7 = "color";
  pcVar8 = pcVar9;
  do {
    cVar5 = *pcVar8;
    cVar1 = *pcVar7;
    if (cVar5 == '\0') break;
    pcVar8 = pcVar8 + 1;
    pcVar7 = pcVar7 + 1;
  } while (cVar5 == cVar1);
  if (cVar5 == cVar1) {
    uVar4 = fn_82697700();
    uVar2 = *(unsigned char *)(param_1 + 0x28);
    *(unsigned int *)(param_1 + 0x28) = uVar4;
    *(unsigned char *)(param_1 + 0x28) = uVar2;
    return 1;
  }
  pcVar7 = "inner";
  pcVar8 = pcVar9;
  do {
    cVar5 = *pcVar8;
    cVar1 = *pcVar7;
    if (cVar5 == '\0') break;
    pcVar8 = pcVar8 + 1;
    pcVar7 = pcVar7 + 1;
  } while (cVar5 == cVar1);
  if (cVar5 == cVar1) {
    uVar3 = fn_826A7380(param_2);
    if ((uVar3 & 0xffffffff) == 0) {
      return 1;
    }
    uVar6 = 0xffffffff82013ac8;
  }
  else {
    pcVar7 = "knockout";
    pcVar8 = pcVar9;
    do {
      cVar5 = *pcVar8;
      cVar1 = *pcVar7;
      if (cVar5 == '\0') break;
      pcVar8 = pcVar8 + 1;
      pcVar7 = pcVar7 + 1;
    } while (cVar5 == cVar1);
    if (cVar5 == cVar1) {
      cVar5 = fn_82695608();
      if (cVar5 == '\0') {
        bVar10 = *(unsigned char *)(param_1 + 0x20) & 0xdf;
      }
      else {
        bVar10 = *(unsigned char *)(param_1 + 0x20) | 0x20;
      }
      *(unsigned char *)(param_1 + 0x20) = bVar10;
      return 1;
    }
    pcVar7 = "quality";
    pcVar8 = pcVar9;
    do {
      cVar5 = *pcVar8;
      cVar1 = *pcVar7;
      if (cVar5 == '\0') break;
      pcVar8 = pcVar8 + 1;
      pcVar7 = pcVar7 + 1;
    } while (cVar5 == cVar1);
    if (cVar5 != cVar1) {
      pcVar8 = "strength";
      do {
        cVar5 = *pcVar9;
        cVar1 = *pcVar8;
        if (cVar5 == '\0') break;
        pcVar9 = pcVar9 + 1;
        pcVar8 = pcVar8 + 1;
      } while (cVar5 == cVar1);
      if (cVar5 != cVar1) {
        uVar6 = fn_826C1BA0(param_1,param_2,param_3,param_4);
        return uVar6;
      }
      dVar11 = (double)fn_826972E0();
      uStack_1c = (unsigned int)(__int64)((float)dVar11 * lbl_82011638 + lbl_82002C5C);
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
    uVar6 = 0xffffffff82013a90;
  }
  fn_826D6630(uVar3 + 0xc,uVar6);
  return 1;
}

