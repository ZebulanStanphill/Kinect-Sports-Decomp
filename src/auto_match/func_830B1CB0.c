extern int fn_82CEE700();
extern int fn_830B6298();
extern unsigned char lbl_821944B4[];


unsigned __int64 fn_830B1CB0(unsigned char *param_1)

{
  char cVar1;
  unsigned __int64 uVar2;
  unsigned __int64 uVar3;
  char *pcVar4;
  __int64 lVar5;
  unsigned int uVar6;
  __int64 lVar7;
  __int64 lVar8;
  int iVar9;
  int iVar10;
  char *pcVar11;
  unsigned __int64 uVar12;
  unsigned int uVar13;
  
  pcVar11 = "0x72b6f732-0x0969b2a3:2012-07-31.Physics.RarePark";
  *param_1 = 0;
  uVar12 = 0;
  uVar13 = 0xffffffff;
  lVar7 = (__int64)lbl_821944B4[2];
  uVar3 = 0xffffffffffffffff;
  if ((lbl_821944B4[2] < '0') ||
     ('9' < lbl_821944B4[2])) {
    if ((lbl_821944B4[2] < 'A') ||
       ('F' < lbl_821944B4[2])) {
      if ((lbl_821944B4[2] < 'a') ||
         (lVar7 = lVar7 + -0x57, 'f' < lbl_821944B4[2])) {
        lVar7 = -1;
      }
    }
    else {
      lVar7 = lVar7 + -0x37;
    }
  }
  else {
    lVar7 = lVar7 + -0x30;
  }
  pcVar4 = "2b6f732-0x0969b2a3:2012-07-31.Physics.RarePark";
  iVar9 = (int)lVar7;
  while (-1 < iVar9) {
    cVar1 = *pcVar4;
    lVar8 = (__int64)cVar1;
    uVar3 = (uVar3 & 0xfffffff) * 0x10 + lVar7;
    if ((cVar1 < '0') || ('9' < cVar1)) {
      if ((cVar1 < 'A') || ('F' < cVar1)) {
        if ((cVar1 < 'a') || (lVar7 = lVar8 + -0x57, 'f' < cVar1)) {
          lVar7 = -1;
        }
      }
      else {
        lVar7 = lVar8 + -0x37;
      }
    }
    else {
      lVar7 = lVar8 + -0x30;
    }
    pcVar4 = pcVar4 + 1;
    iVar9 = (int)lVar7;
  }
  cVar1 = pcVar4[2];
  iVar9 = (int)cVar1;
  if ((cVar1 < '0') || ('9' < cVar1)) {
    if ((cVar1 < 'A') || ('F' < cVar1)) {
      if ((cVar1 < 'a') || (iVar9 = iVar9 + -0x57, 'f' < cVar1)) {
        iVar9 = -1;
      }
    }
    else {
      iVar9 = iVar9 + -0x37;
    }
  }
  else {
    iVar9 = iVar9 + -0x30;
  }
  pcVar4 = pcVar4 + 3;
  while (-1 < iVar9) {
    cVar1 = *pcVar4;
    iVar10 = (int)cVar1;
    uVar13 = uVar13 * 0x10 + iVar9;
    if ((cVar1 < '0') || ('9' < cVar1)) {
      if ((cVar1 < 'A') || ('F' < cVar1)) {
        if ((cVar1 < 'a') || (iVar9 = iVar10 + -0x57, 'f' < cVar1)) {
          iVar9 = -1;
        }
      }
      else {
        iVar9 = iVar10 + -0x37;
      }
    }
    else {
      iVar9 = iVar10 + -0x30;
    }
    pcVar4 = pcVar4 + 1;
  }
  uVar2 = (uVar3 & 0xffffffff) >> 0x1f;
  do {
    if ((*pcVar11 == '\0') || (*pcVar11 == '.')) goto joined_r0x830b1ea4;
    pcVar11 = pcVar11 + 1;
  } while (pcVar11 != (char *)0x0);
LAB_830b1e88:
  fn_82CEE700(0xffffffff82188008);
  return 1;
joined_r0x830b1ea4:
  do {
    pcVar4 = pcVar11;
    pcVar11 = pcVar4 + 1;
    if (pcVar11 == (char *)0x0) {
      fn_82CEE700(0xffffffff82188008);
      return 1;
    }
  } while ((*pcVar11 != '\0') && (*pcVar11 != '.'));
  pcVar4 = pcVar4 + 2;
  if (uVar2 != 0) {
    lVar7 = fn_830B6298();
    lVar8 = (__int64)(int)((unsigned int)uVar3 & 0x7fffffff ^ 0x72e6ef51);
    lVar5 = lVar8 - (lVar7 >> 8);
    if ((lVar8 < lVar7 >> 8) || (0x96c99 < lVar5)) {
      fn_82CEE700(0xffffffff82187fa0);
      return 2;
    }
    if (lVar5 < 0xd2f) {
      uVar12 = 3;
    }
    if (uVar2 != 0) goto LAB_830b1f74;
  }
  cVar1 = *pcVar4;
  uVar6 = 0;
  while (cVar1 != '\0') {
    pcVar4 = pcVar4 + 1;
    cVar1 = *pcVar4;
    uVar6 = uVar6 * 0x17 + (int)cVar1;
  }
  if (uVar13 == (uVar6 & 0x7fffffff ^ 0x72e6ef51)) {
LAB_830b1f74:
    *param_1 = 1;
    return uVar12;
  }
  goto LAB_830b1e88;
}

