extern unsigned int lbl_820D8D8C;


unsigned __int64 fn_82B684C8(int param_1,unsigned int *param_2,int param_3)

{
  unsigned char bVar1;
  int iVar2;
  int iVar3;
  __int64 lVar4;
  __int64 lVar5;
  unsigned int uVar6;
  short sVar10;
  unsigned int uVar7;
  unsigned int uVar8;
  unsigned int uVar9;
  __int64 lVar11;
  unsigned __int64 uVar12;
  
  iVar2 = (param_1 + 0xc0) * 2;
  if (*(short *)(iVar2 + param_3) != 0) {
    sVar10 = *(short *)(iVar2 + param_3) + -1;
    *(short *)(iVar2 + param_3) = sVar10;
    if (sVar10 != 0) {
      return 0;
    }
    return (__int64)*(short *)((param_1 + 0x100) * 2 + param_3);
  }
  iVar3 = (param_1 + 0x140) * 2;
  sVar10 = *(short *)(iVar3 + param_3);
  lVar11 = (__int64)sVar10;
  uVar6 = (int)sVar10 >> 4;
  lVar4 = (__int64)(int)uVar6;
  if (lVar4 < 1) {
    if (param_2[2] == 0) {
      param_2[2] = 8;
      if ((int)param_2[1] <= (int)param_2[4]) {
        uVar12 = 0xffffffffffffffff;
        goto LAB_82b68790;
      }
      bVar1 = *(unsigned char *)*param_2;
      *param_2 = (unsigned char *)*param_2 + 1;
      param_2[4] = param_2[4] + 1;
      param_2[3] = (unsigned int)bVar1;
    }
    uVar6 = param_2[2] - 1;
    param_2[2] = uVar6;
    uVar12 = (unsigned __int64)((int)param_2[3] >> (uVar6 & 0x3f));
    param_2[3] = (&lbl_820D8D8C)[uVar6] & param_2[3];
    if (uVar12 != 0) goto LAB_82b68790;
LAB_82b68784:
    lVar11 = lVar11 + 4;
    if (0xe0 < (int)lVar11) {
      lVar11 = 0xe0;
    }
    goto LAB_82b68790;
  }
  if (param_2[2] == 0) {
    param_2[2] = 8;
    if ((int)param_2[4] < (int)param_2[1]) {
      bVar1 = *(unsigned char *)*param_2;
      *param_2 = (unsigned char *)*param_2 + 1;
      param_2[4] = param_2[4] + 1;
      param_2[3] = (unsigned int)bVar1;
      goto LAB_82b68570;
    }
  }
  else {
LAB_82b68570:
    uVar8 = param_2[3];
    uVar7 = param_2[2] - 1;
    param_2[2] = uVar7;
    param_2[3] = (&lbl_820D8D8C)[uVar7] & uVar8;
    if ((int)uVar8 >> (uVar7 & 0x3f) == 0) {
      lVar11 = lVar4 + lVar11;
      *(short *)(iVar2 + param_3) = (short)(1 << (uVar6 & 0x3f)) + -1;
      uVar12 = 0;
      *(unsigned short *)((param_1 + 0x100) * 2 + param_3) = 0;
      goto LAB_82b68784;
    }
  }
  uVar8 = 0;
  lVar5 = lVar4;
  if (7 < (int)uVar6) {
    uVar12 = (unsigned __int64)(uVar6 >> 3);
    lVar5 = lVar4 - ((unsigned __int64)uVar6 & 0xfffffff8);
    uVar8 = 0;
    do {
      if ((int)param_2[4] < (int)param_2[1]) {
        uVar6 = param_2[2];
        bVar1 = *(unsigned char *)*param_2;
        *param_2 = (unsigned char *)*param_2 + 1;
        uVar7 = (&lbl_820D8D8C)[uVar6];
        uVar6 = param_2[3] << (8 - uVar6 & 0x3f) | (int)(unsigned int)bVar1 >> (uVar6 & 0x3f);
        param_2[4] = param_2[4] + 1;
        param_2[3] = uVar7 & bVar1;
      }
      else {
        uVar6 = 0xffffffff;
      }
      uVar8 = uVar8 << 8 | uVar6;
      uVar12 = uVar12 - 1;
    } while (uVar12 != 0);
  }
  uVar6 = (unsigned int)lVar5;
  if (uVar6 != 0) {
    if ((int)param_2[2] < (int)uVar6) {
      if ((int)param_2[1] <= (int)param_2[4]) {
        uVar8 = 0xffffffff;
        goto LAB_82b686a8;
      }
      bVar1 = *(unsigned char *)*param_2;
      *param_2 = (unsigned char *)*param_2 + 1;
      param_2[2] = param_2[2] + 8;
      param_2[4] = param_2[4] + 1;
      param_2[3] = param_2[3] << 8 | (unsigned int)bVar1;
    }
    uVar7 = param_2[2];
    uVar9 = (unsigned int)((unsigned __int64)uVar7 - lVar5);
    param_2[2] = uVar9;
    uVar8 = (int)param_2[3] >> (uVar9 & 0x3f) | uVar8 << (uVar6 & 0x3f);
    param_2[3] = *(unsigned int *)((int)&lbl_820D8D8C + (int)(((unsigned __int64)uVar7 - lVar5 & 0xffffffff) << 2))
                 & param_2[3];
  }
LAB_82b686a8:
  *(short *)(iVar2 + param_3) = (short)uVar8;
  if (uVar8 != 0) {
    *(unsigned short *)((param_1 + 0x100) * 2 + param_3) = 1;
  }
  uVar12 = (unsigned __int64)(uVar8 == 0);
  lVar11 = (lVar11 - lVar4) + -4;
  if (lVar11 < 0) {
    lVar11 = 0;
  }
LAB_82b68790:
  *(short *)(iVar3 + param_3) = (short)lVar11;
  return uVar12;
}

