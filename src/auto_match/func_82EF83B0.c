__int64 fn_82EF83B0(int param_1,int param_2,int param_3,int param_4,__int64 param_5)

{
  unsigned int uVar1;
  __int64 lVar2;
  int iVar3;
  unsigned char *pbVar4;
  unsigned char *pbVar5;
  unsigned __int64 uVar6;
  unsigned __int64 uVar7;
  unsigned __int64 uVar8;
  unsigned __int64 uVar9;
  unsigned __int64 uVar10;
  unsigned __int64 uVar11;
  unsigned __int64 uVar12;
  unsigned __int64 uVar13;
  int iVar14;
  int iVar15;
  
  iVar15 = (int)param_5;
  if (iVar15 < 0) {
    lVar2 = 0;
  }
  else {
    pbVar4 = (unsigned char *)(param_3 + 6);
    uVar1 = iVar15 * 3;
    lVar2 = 0;
    pbVar5 = (unsigned char *)(param_1 + 6);
    iVar14 = ((int)uVar1 >> 4) + (unsigned int)((int)uVar1 < 0 && (uVar1 & 0xf) != 0);
    iVar3 = 4;
    iVar15 = iVar15 + iVar14 * -3;
    do {
      iVar3 = iVar3 + -1;
      uVar12 = (unsigned __int64)((int)((unsigned __int64)pbVar5[-6] - (unsigned __int64)pbVar4[-6]) >> 0x1f);
      uVar9 = (unsigned __int64)((int)((unsigned __int64)pbVar5[-5] - (unsigned __int64)pbVar4[-5]) >> 0x1f);
      uVar7 = (unsigned __int64)((int)((unsigned __int64)pbVar5[-4] - (unsigned __int64)pbVar4[-4]) >> 0x1f);
      uVar6 = (unsigned __int64)((int)((unsigned __int64)pbVar5[-3] - (unsigned __int64)pbVar4[-3]) >> 0x1f);
      uVar10 = (unsigned __int64)((int)((unsigned __int64)pbVar5[-2] - (unsigned __int64)pbVar4[-2]) >> 0x1f);
      uVar8 = (unsigned __int64)((int)((unsigned __int64)pbVar5[-1] - (unsigned __int64)pbVar4[-1]) >> 0x1f);
      uVar13 = (unsigned __int64)((int)((unsigned __int64)pbVar5[1] - (unsigned __int64)pbVar4[1]) >> 0x1f);
      uVar11 = (unsigned __int64)((int)((unsigned __int64)*pbVar5 - (unsigned __int64)*pbVar4) >> 0x1f);
      lVar2 = (((unsigned __int64)pbVar5[-6] - (unsigned __int64)pbVar4[-6] ^ uVar12) - uVar12) +
              (((unsigned __int64)pbVar5[-5] - (unsigned __int64)pbVar4[-5] ^ uVar9) - uVar9) +
              (((unsigned __int64)pbVar5[-4] - (unsigned __int64)pbVar4[-4] ^ uVar7) - uVar7) +
              (((unsigned __int64)pbVar5[-3] - (unsigned __int64)pbVar4[-3] ^ uVar6) - uVar6) +
              (((unsigned __int64)pbVar5[-2] - (unsigned __int64)pbVar4[-2] ^ uVar10) - uVar10) +
              (((unsigned __int64)pbVar5[-1] - (unsigned __int64)pbVar4[-1] ^ uVar8) - uVar8) +
              (((unsigned __int64)pbVar5[1] - (unsigned __int64)pbVar4[1] ^ uVar13) - uVar13) +
              (((unsigned __int64)*pbVar5 - (unsigned __int64)*pbVar4 ^ uVar11) - uVar11) + lVar2;
      if (iVar15 <= (int)lVar2) {
        return param_5;
      }
      iVar15 = iVar15 + iVar14;
      pbVar5 = pbVar5 + param_2;
      pbVar4 = pbVar4 + param_4;
    } while (iVar3 != 0);
  }
  return lVar2;
}

