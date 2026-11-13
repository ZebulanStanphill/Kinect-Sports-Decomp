extern int fn_82F0D6D0();
extern int fn_82F262C8();


unsigned __int64 fn_82F29E38(int param_1,__int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4,
                       unsigned int *param_5,unsigned int *param_6)

{
  short sVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned __int64 uVar6;
  unsigned int uVar7;
  unsigned int uVar8;
  int iVar9;
  unsigned int uVar10;
  int iVar11;
  unsigned __int64 uVar12;
  __int64 lVar13;
  unsigned __int64 uVar14;
  unsigned __int64 uVar15;
  __int64 lVar16;
  
  uVar6 = (unsigned __int64)*(unsigned int *)(param_1 + 0x2d0) & 0x7fffffff;
  lVar16 = uVar6 * 2;
  uVar8 = (unsigned int)param_3;
  iVar9 = 0;
  uVar15 = (__int64)(int)lVar16 * (__int64)(int)uVar8 + param_2;
  if (((param_3 & 1) == 0) &&
     ((uVar8 == 0 || (*(int *)(((int)uVar8 >> 1) * 4 + *(int *)(param_1 + 0x8d8)) != 0)))) {
    iVar9 = 1;
  }
  if (*(int *)(param_1 + 0x7b38) == 0) {
    fn_82F262C8(param_1,param_2,param_3,param_4,lVar16,*(int *)(param_1 + 0x2d4) << 1,
                    *(unsigned int *)(param_1 + 0x9f0),*(unsigned int *)(param_1 + 0x9f4));
  }
  else {
    *param_5 = (unsigned int)param_2;
    *param_6 = uVar8;
    fn_82F0D6D0(param_1,param_5,param_6,*(unsigned int *)(param_1 + 0x9f0),
                    *(unsigned int *)(param_1 + 0x9f4),param_4,iVar9);
  }
  if (((unsigned int)param_2 == 0) || (iVar9 != 0)) {
    uVar6 = 0;
  }
  else {
    iVar9 = (int)((uVar15 & 0xffffffff) << 1);
    sVar1 = *(short *)(iVar9 + *(int *)(param_1 + 0x9f0) + -2);
    uVar8 = *param_6;
    uVar3 = (int)uVar8 >> 0x1f;
    if (sVar1 == 0x4000) {
      uVar2 = *param_5;
      iVar11 = (uVar8 ^ uVar3) - uVar3;
      iVar9 = (uVar2 ^ (int)uVar2 >> 0x1f) - ((int)uVar2 >> 0x1f);
    }
    else {
      uVar2 = *param_5;
      uVar10 = uVar2 - (int)sVar1;
      uVar7 = uVar8 - (int)*(short *)(iVar9 + *(int *)(param_1 + 0x9f4) + -2);
      uVar4 = (int)uVar7 >> 0x1f;
      uVar5 = (int)uVar10 >> 0x1f;
      iVar11 = (uVar7 ^ uVar4) - uVar4;
      iVar9 = (uVar10 ^ uVar5) - uVar5;
    }
    if (iVar11 + iVar9 < 0x21) {
      iVar9 = (int)((uVar15 + uVar6 * -2 & 0xffffffff) << 1);
      sVar1 = *(short *)(iVar9 + *(int *)(param_1 + 0x9f0));
      if (sVar1 == 0x4000) {
        lVar13 = ((unsigned __int64)uVar8 ^ (__int64)(int)uVar3) - (__int64)(int)uVar3;
        lVar16 = ((unsigned __int64)uVar2 ^ (__int64)((int)uVar2 >> 0x1f)) -
                 (__int64)((int)uVar2 >> 0x1f);
      }
      else {
        uVar15 = (unsigned __int64)uVar2 - (__int64)sVar1;
        uVar6 = (unsigned __int64)uVar8 - (__int64)*(short *)(iVar9 + *(int *)(param_1 + 0x9f4));
        uVar14 = (unsigned __int64)((int)uVar6 >> 0x1f);
        uVar12 = (unsigned __int64)((int)uVar15 >> 0x1f);
        lVar13 = (uVar6 ^ uVar14) - uVar14;
        lVar16 = (uVar15 ^ uVar12) - uVar12;
      }
      uVar6 = ((~(lVar13 + lVar16) & 0xffffffffU) >> 0x1f) +
              (unsigned __int64)((unsigned __int64)(lVar13 + lVar16) < 0x21) & 1;
    }
    else {
      uVar6 = 1;
    }
  }
  return uVar6;
}

