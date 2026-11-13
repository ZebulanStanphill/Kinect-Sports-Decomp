extern unsigned int lbl_8200D6AC;


unsigned __int64 fn_826E7468(int *param_1,int param_2)

{
  unsigned char bVar1;
  unsigned char bVar2;
  unsigned char bVar3;
  unsigned char bVar4;
  unsigned char bVar5;
  unsigned __int64 uVar6;
  unsigned __int64 uVar7;
  unsigned char *pbVar8;
  unsigned __int64 uVar9;
  int iVar10;
  unsigned int uVar11;
  
  bVar4 = (&lbl_8200D6AC)[param_2];
  uVar11 = param_1[3] + param_2;
  uVar9 = (unsigned __int64)(unsigned int)(1 << (8U - param_1[3] & 0x3f)) - 1;
  if (bVar4 == 0) {
    return 0;
  }
  if (bVar4 == 1) {
    if (8 < uVar11) {
      iVar10 = param_1[2];
      pbVar8 = (unsigned char *)(iVar10 + *param_1);
LAB_826e75f4:
      iVar10 = iVar10 + 1;
      uVar6 = (unsigned __int64)pbVar8[1];
      uVar11 = 0x10 - uVar11;
      uVar7 = *pbVar8 & uVar9;
      goto LAB_826e7608;
    }
    uVar11 = 8 - uVar11;
    uVar6 = *(unsigned char *)(param_1[2] + *param_1) & uVar9;
LAB_826e7614:
    if (uVar11 != 0) {
      iVar10 = 8 - uVar11;
      uVar6 = (unsigned __int64)((unsigned int)uVar6 >> (uVar11 & 0x3f));
      goto LAB_826e74c8;
    }
  }
  else {
    if (bVar4 < 3) {
      iVar10 = param_1[2];
      pbVar8 = (unsigned char *)(iVar10 + *param_1);
      if (uVar11 < 0x11) goto LAB_826e75f4;
      uVar7 = (unsigned __int64)pbVar8[1];
LAB_826e758c:
      iVar10 = iVar10 + 2;
      uVar6 = (unsigned __int64)pbVar8[2];
      uVar11 = 0x18 - uVar11;
      uVar7 = (*pbVar8 & uVar9) << 8 | uVar7;
LAB_826e7608:
      param_1[2] = iVar10;
      uVar6 = uVar7 << 8 | uVar6;
      goto LAB_826e7614;
    }
    if (bVar4 == 3) {
      iVar10 = param_1[2];
      pbVar8 = (unsigned char *)(iVar10 + *param_1);
      uVar7 = (unsigned __int64)pbVar8[1];
      if (uVar11 < 0x19) goto LAB_826e758c;
LAB_826e74e8:
      iVar10 = iVar10 + 3;
      uVar11 = 0x20 - uVar11;
      uVar6 = (unsigned __int64)pbVar8[3];
      uVar7 = ((*pbVar8 & uVar9) << 8 | uVar7) << 8 | (unsigned __int64)pbVar8[2];
      goto LAB_826e7608;
    }
    if (bVar4 < 5) {
      iVar10 = param_1[2];
      if (0x20 < uVar11) {
        uVar11 = uVar11 - 0x20;
        pbVar8 = (unsigned char *)(*param_1 + iVar10);
        bVar4 = pbVar8[1];
        bVar1 = *pbVar8;
        bVar2 = pbVar8[2];
        bVar3 = pbVar8[3];
        param_1[2] = iVar10 + 4;
        bVar5 = *(unsigned char *)(iVar10 + 4 + *param_1);
        param_1[3] = uVar11;
        return (unsigned __int64)
               ((unsigned int)(bVar5 >> (8 - uVar11 & 0x3f)) |
               ((unsigned int)((((bVar1 & uVar9) << 8 | (unsigned __int64)bVar4) << 8 | (unsigned __int64)bVar2) << 8) |
               (unsigned int)bVar3) << (uVar11 & 0x3f));
      }
      pbVar8 = (unsigned char *)(iVar10 + *param_1);
      uVar7 = (unsigned __int64)pbVar8[1];
      goto LAB_826e74e8;
    }
    uVar6 = 0;
  }
  iVar10 = 0;
  param_1[2] = param_1[2] + 1;
LAB_826e74c8:
  param_1[3] = iVar10;
  return uVar6;
}

