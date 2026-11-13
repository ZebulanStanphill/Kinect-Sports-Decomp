extern int fn_82C4E3B0();
extern int fn_82C4E470();
extern int fn_82CAC2E0();


unsigned __int64 fn_82CACA70(unsigned __int64 param_1,int *param_2,unsigned __int64 *param_3,int *param_4)

{
  unsigned char bVar1;
  unsigned char bVar2;
  unsigned char bVar3;
  unsigned char bVar4;
  unsigned char bVar5;
  unsigned char bVar6;
  short sVar7;
  int *piVar8;
  unsigned char *pbVar9;
  int iVar10;
  int iVar12;
  unsigned __int64 uVar11;
  unsigned __int64 uVar13;
  
  if ((*(unsigned int *)(*param_2 + 4) & param_2[5]) == 0) {
    iVar12 = fn_82CAC2E0();
    *param_4 = iVar12;
    if (iVar12 != 0) {
      return 0;
    }
    *(unsigned int *)(*param_2 + 4) = param_2[5] | *(unsigned int *)(*param_2 + 4);
  }
  piVar8 = (int *)param_2[0xb];
  if (piVar8 == (int *)0x0) {
    uVar11 = 0;
    *(unsigned int *)((int)param_3 + 0x14) = 3;
  }
  else {
    iVar12 = *piVar8;
    sVar7 = *(short *)((int)((*param_3 >> (0x40 - (unsigned __int64)*(unsigned char *)(piVar8 + 2) & 0x7f) &
                             0xffffffff) << 1) + iVar12);
    uVar11 = (unsigned __int64)sVar7;
    if (sVar7 < 0) {
      fn_82C4E470(param_3);
      do {
        uVar13 = *param_3;
        fn_82C4E470(param_3,1);
        sVar7 = *(short *)((int)(((uVar11 - ((__int64)uVar13 >> 0x3f)) + 0x8000 & 0xffffffff) << 1)
                          + iVar12);
        uVar11 = (unsigned __int64)sVar7;
      } while (sVar7 < 0);
    }
    else {
      iVar12 = *(int *)(param_3 + 1);
      iVar10 = (int)(uVar11 & 0xf);
      *param_3 = *param_3 << (uVar11 & 0xf);
      *(int *)(param_3 + 1) = iVar12 - iVar10;
      if (iVar12 < iVar10) {
        do {
          pbVar9 = *(unsigned char **)((int)param_3 + 0xc);
          if (pbVar9 < (unsigned char *)(*(int *)(param_3 + 2) - 4U)) {
            bVar1 = *pbVar9;
            bVar2 = pbVar9[1];
            bVar3 = pbVar9[2];
            bVar4 = pbVar9[3];
            bVar5 = pbVar9[4];
            bVar6 = pbVar9[5];
            iVar12 = *(int *)(param_3 + 1);
            *(unsigned char **)((int)param_3 + 0xc) = pbVar9 + 6;
            *(int *)(param_3 + 1) = iVar12 + 0x30;
            *param_3 = ((((((unsigned __int64)bVar1 * 0x100 + (unsigned __int64)bVar2) * 0x100 + (unsigned __int64)bVar3)
                          * 0x100 + (unsigned __int64)bVar4) * 0x100 + (unsigned __int64)bVar5) * 0x100 +
                        (unsigned __int64)bVar6 << ((__int64)-iVar12 & 0x7fU)) + *param_3;
            goto LAB_82cacbdc;
          }
          iVar12 = fn_82C4E3B0(param_3);
        } while (iVar12 == 1);
        uVar11 = (unsigned __int64)((int)sVar7 >> 4);
      }
      else {
LAB_82cacbdc:
        uVar11 = (unsigned __int64)((int)sVar7 >> 4);
      }
    }
  }
  return uVar11;
}

