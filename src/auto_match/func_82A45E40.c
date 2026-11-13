extern int fn_8265C940();
extern int fn_82A1D9A8();
extern int fn_82A45180();
extern int fn_82A45C40();
extern unsigned int lbl_83219DD0;


__int64 fn_82A45E40(unsigned __int64 param_1,int param_2,unsigned int param_3,int *param_4,__int64 param_5)

{
  unsigned char bVar1;
  int iVar2;
  unsigned int *puVar3;
  unsigned __int64 uVar4;
  int *piVar5;
  __int64 lVar6;
  __int64 lVar7;
  unsigned int uVar8;
  int iVar9;
  __int64 lVar10;
  unsigned char *pbVar11;
  unsigned int *puVar12;
  unsigned __int64 uVar13;
  
  lVar6 = 0;
  uVar4 = param_1 * 0x60 + 0x8f & 0xffffff80;
  if ((param_1 & 0xffffffff) != 0) {
    piVar5 = (int *)(param_2 + -8);
    uVar13 = param_1;
    do {
      pbVar11 = (unsigned char *)(piVar5 + 4);
      piVar5 = piVar5 + 3;
      lVar6 = (unsigned __int64)*pbVar11 * 0x100 + (__int64)*piVar5 * (__int64)(int)((unsigned int)*pbVar11 << 1)
              + lVar6;
      uVar13 = uVar13 - 1;
    } while (uVar13 != 0);
  }
  lVar6 = lVar6 + uVar4;
  if (((int)param_5 == 0) && (param_5 = fn_8265C940(lVar6,0xffffffffa7970000), param_5 == 0))
  {
    return -0x7ff8fff2;
  }
  fn_82A1D9A8(param_5,0,lVar6);
  puVar3 = (unsigned int *)param_5;
  *puVar3 = (int)param_1;
  lVar10 = uVar4 + param_5;
  lVar7 = 0;
  puVar3[2] = puVar3 + 4;
  if (0 < (int)(lVar6 - uVar4)) {
    lVar6 = (((lVar6 - uVar4) - 1 & 0xffffffff) >> 7) + 1;
    do {
      dataCacheBlockFlush(lVar7 + lVar10);
      lVar7 = lVar7 + 0x80;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  puVar3[1] = param_3;
  uVar8 = param_3 | 0x20000;
  if ((param_3 & 4) == 0) {
    uVar8 = param_3 | 0x30000;
  }
  puVar3[1] = uVar8;
  if ((param_1 & 0xffffffff) != 0) {
    pbVar11 = (unsigned char *)(param_2 + 8);
    iVar9 = 0;
    do {
      puVar12 = (unsigned int *)(iVar9 + puVar3[2]);
      puVar12[0x11] = (unsigned int)lVar10;
      uVar8 = *(unsigned int *)(pbVar11 + -8);
      if (uVar8 < 0x5dc1) {
        uVar8 = 0;
      }
      else if (uVar8 < 0x7d01) {
        uVar8 = 1;
      }
      else {
        uVar8 = (-(unsigned int)(0xac44 < uVar8) & 1) + 2;
      }
      if ((puVar12[1] >> 0x1b & 3) != uVar8) {
        puVar12[0xc] = 1;
        puVar12[1] = uVar8 << 0x1b | puVar12[1] & 0xe7ffffff;
      }
      bVar1 = *pbVar11;
      if ((puVar12[1] >> 0x1d & 1) != bVar1 - 1) {
        puVar12[0xc] = 1;
        puVar12[1] = (bVar1 - 1) * 0x20000000 & 0x20000000 | puVar12[1] & 0xdfffffff;
      }
      bVar1 = pbVar11[1];
      if ((puVar12[1] >> 0x14 & 0xf) != (unsigned int)bVar1) {
        puVar12[0xc] = 1;
        puVar12[1] = (bVar1 & 0xf) << 0x14 | puVar12[1] & 0xff0fffff;
      }
      uVar8 = MmGetPhysicalAddress(lVar10);
      if (puVar12[7] != uVar8) {
        uVar8 = MmGetPhysicalAddress(lVar10);
        puVar12[7] = uVar8;
        puVar12[0xd] = 1;
      }
      iVar2 = *(int *)(pbVar11 + -4);
      bVar1 = *pbVar11;
      if ((*puVar12 >> 0xf & 0xf80) != ((unsigned int)bVar1 * iVar2 & 0xffffff80)) {
        puVar12[0xc] = 1;
        *puVar12 = (unsigned int)bVar1 * iVar2 * 0x8000 & 0x7c00000 | *puVar12 & 0xf83fffff;
      }
      if ((puVar12[1] & 0x80000000) != 0x80000000) {
        puVar12[0xc] = 1;
        puVar12[1] = puVar12[1] | 0x80000000;
      }
      lVar10 = ((__int64)(int)(unsigned int)*pbVar11 * (__int64)*(int *)(pbVar11 + -4) & 0x7fffffffU) * 2
               + lVar10;
      puVar12[0x12] = (unsigned int)lVar10;
      uVar8 = MmGetPhysicalAddress(lVar10);
      if (puVar12[8] != uVar8) {
        uVar8 = MmGetPhysicalAddress(lVar10);
        puVar12[8] = uVar8;
        puVar12[0xe] = 1;
      }
      bVar1 = *pbVar11;
      param_1 = param_1 - 1;
      iVar9 = iVar9 + 0x60;
      pbVar11 = pbVar11 + 0xc;
      lVar10 = (unsigned __int64)bVar1 * 0x100 + lVar10;
    } while (param_1 != 0);
  }
  if (((param_3 & 1) == 0) && (lVar6 = fn_82A45180(param_5), lVar6 < 0)) {
    fn_82A45C40(param_5);
  }
  else {
    if ((param_3 & 4) != 0) {
      RtlEnterCriticalSection(0xffffffff8315d948);
      (&lbl_83219DD0)[*(unsigned short *)(puVar3[2] + 0x50)] = puVar3;
      RtlLeaveCriticalSection(0xffffffff8315d948);
    }
    *param_4 = (int)puVar3;
    lVar6 = 0;
  }
  return lVar6;
}

