extern int fn_82975B00();
extern int fn_82F65AC0();
extern int fn_82F65B18();
extern int fn_82F66A40();
extern int fn_82F66A80();


unsigned __int64 fn_829AAD58(int param_1,int param_2)

{
  unsigned int uVar1;
  __int64 lVar2;
  int iVar3;
  unsigned __int64 uVar4;
  char *pcVar5;
  unsigned __int64 uVar6;
  char *pcVar7;
  char cVar8;
  unsigned char bVar9;
  char acStack_60 [96];
  
  bVar9 = 0;
  if ((*(unsigned int *)(param_1 + 200) & 0xffff0000) == 0x46580000) {
    if (*(int *)(param_2 + 0x6c) == -1) {
      *(unsigned int *)(param_2 + 0x6c) = *(unsigned int *)(param_1 + 0x1fc);
      *(int *)(param_1 + 0x1fc) = *(int *)(param_1 + 0x1fc) + 1;
    }
    return 0;
  }
  if (*(int *)(param_2 + 0x6c) != -1) {
    return 0;
  }
  uVar6 = 0x20;
  pcVar7 = acStack_60;
  pcVar5 = *(char **)(*(int *)(param_2 + 0x68) + 0x18);
  do {
    if (*pcVar5 == '\0') break;
    *pcVar7 = *pcVar5;
    uVar6 = uVar6 - 1;
    pcVar7 = pcVar7 + 1;
    pcVar5 = pcVar5 + 1;
  } while (uVar6 != 0);
  if ((uVar6 & 0xffffffff) == 0) {
    pcVar7 = pcVar7 + -1;
  }
  *pcVar7 = '\0';
  pcVar5 = acStack_60;
  while ((acStack_60[0] != '\0' && (iVar3 = fn_82F66A40(*pcVar5), iVar3 != 0))) {
    pcVar5 = pcVar5 + 1;
    acStack_60[0] = *pcVar5;
  }
  if (*pcVar5 == '\0') {
    lVar2 = 0;
  }
  else {
    lVar2 = fn_82F65B18(pcVar5);
  }
  if (*pcVar5 != '\0') {
    *pcVar5 = '\0';
    pcVar5 = pcVar5 + 1;
  }
  cVar8 = *pcVar5;
  while ((cVar8 != '\0' && (iVar3 = fn_82F66A80(), iVar3 != 0))) {
    pcVar5 = pcVar5 + 1;
    cVar8 = *pcVar5;
  }
  if (*pcVar5 == '\0') {
    uVar6 = (unsigned __int64)(*(unsigned int *)(param_2 + 0x70) >> 2) + lVar2;
  }
  else {
    uVar6 = 0xffffffffffffffff;
  }
  uVar1 = *(unsigned int *)(*(int *)(*(int *)(param_2 + 4) * 4 + *(int *)(param_1 + 0x10)) + 4);
  if (((uVar1 & 0x10) == 0) || ((uVar1 & 0x200) != 0)) {
    if ((uVar1 & 0x20) != 0) {
      iVar3 = fn_82F65AC0(acStack_60,0xffffffff821cdae4);
      if (iVar3 != 0) {
        lVar2 = 1;
      }
      else {
        lVar2 = -((unsigned __int64)(uVar6 == 0) - 1);
      }
      bVar9 = iVar3 == 0;
      if (((int)lVar2 != 0) && (*(int *)(param_2 + 0x10) == 0)) {
        uVar4 = 0xffffffff82052090;
        goto LAB_829aaf80;
      }
      goto LAB_829aaf98;
    }
  }
  else {
    iVar3 = fn_82F65AC0(acStack_60,0xffffffff821c44ac);
    if (iVar3 == 0) {
      bVar9 = 2;
LAB_829aaef8:
      lVar2 = -((unsigned __int64)(uVar6 == 0) - 1);
    }
    else {
      iVar3 = fn_82F65AC0(acStack_60,0xffffffff821cdb24);
      if (iVar3 == 0) {
        bVar9 = 3;
        goto LAB_829aaef8;
      }
      lVar2 = 1;
    }
    if (((int)lVar2 != 0) && (*(int *)(param_2 + 0x10) == 0)) {
      uVar4 = 0xffffffff82051c78;
LAB_829aaf80:
      fn_82975B00(param_1,*(unsigned int *)(param_2 + 0x68),0x1196,uVar4,acStack_60,uVar6);
    }
LAB_829aaf98:
    if (bVar9 != 0) goto LAB_829aafa4;
  }
  lVar2 = 1;
LAB_829aafa4:
  if (0xffff < (uVar6 & 0xffffffff)) {
    lVar2 = 1;
  }
  *(unsigned int *)(param_2 + 0x6c) = (unsigned int)((uVar6 & 0xffffffff) << 8) & 0xff00 | 0xffff0000 | (unsigned int)bVar9;
  return -(unsigned __int64)(lVar2 != 0) & 0xffffffff80004005;
}

