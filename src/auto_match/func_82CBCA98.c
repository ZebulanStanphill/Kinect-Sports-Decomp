extern int fn_82C83C40();
extern int fn_82CB9530();


unsigned __int64 fn_82CBCA98(int param_1,__int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4,
                       unsigned int *param_5,unsigned int *param_6)

{
  short sVar1;
  short sVar2;
  int iVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned int uVar7;
  unsigned int uVar8;
  int iVar9;
  unsigned int uVar11;
  unsigned __int64 uVar10;
  unsigned int uVar12;
  unsigned __int64 uVar13;
  unsigned __int64 uVar14;
  int iVar15;
  unsigned int uVar16;
  int iVar17;
  __int64 lVar18;
  unsigned __int64 uVar19;
  __int64 lVar20;
  unsigned int uVar6;
  
  iVar15 = *(int *)(param_1 + 0x6f0);
  uVar10 = (unsigned __int64)*(unsigned int *)(param_1 + 0x88) & 0x7fffffff;
  lVar20 = uVar10 * 2;
  iVar3 = *(int *)(param_1 + 0x6f4);
  uVar12 = (unsigned int)param_3;
  iVar17 = 0;
  uVar19 = (__int64)(int)lVar20 * (__int64)(int)uVar12 + param_2;
  if (((param_3 & 1) == 0) &&
     ((uVar12 == 0 || (*(int *)(((int)uVar12 >> 1) * 4 + *(int *)(param_1 + 0x55d0)) != 0)))) {
    iVar17 = 1;
  }
  if (*(int *)(param_1 + 0x50cc) == 0) {
    fn_82CB9530(param_1,param_2,param_3,param_4,lVar20,*(int *)(param_1 + 0x8c) << 1,iVar15,iVar3)
    ;
  }
  else {
    *param_5 = (unsigned int)param_2;
    *param_6 = uVar12;
    fn_82C83C40(param_1,param_5,param_6,*(unsigned int *)(param_1 + 0x6f0),
                      *(unsigned int *)(param_1 + 0x6f4),param_4,iVar17);
  }
  if (((unsigned int)param_2 == 0) || (iVar17 != 0)) {
    uVar10 = 0;
  }
  else {
    iVar17 = (int)((uVar19 & 0xffffffff) << 1);
    uVar12 = *param_5;
    uVar4 = *param_6;
    iVar9 = (int)((uVar19 + uVar10 * -2 & 0xffffffff) << 1);
    sVar1 = *(short *)(iVar17 + iVar15 + -2);
    sVar2 = *(short *)(iVar9 + iVar15);
    uVar5 = (int)uVar4 >> 0x1f;
    uVar6 = (int)uVar12 >> 0x1f;
    if (sVar1 == 0x4000) {
      iVar17 = (uVar4 ^ uVar5) - uVar5;
      iVar15 = (uVar12 ^ uVar6) - uVar6;
    }
    else {
      uVar16 = uVar12 - (int)sVar1;
      uVar11 = uVar4 - (int)*(short *)(iVar17 + iVar3 + -2);
      uVar7 = (int)uVar11 >> 0x1f;
      uVar8 = (int)uVar16 >> 0x1f;
      iVar17 = (uVar11 ^ uVar7) - uVar7;
      iVar15 = (uVar16 ^ uVar8) - uVar8;
    }
    if (iVar17 + iVar15 < 0x21) {
      if (sVar2 == 0x4000) {
        lVar18 = ((unsigned __int64)uVar4 ^ (__int64)(int)uVar5) - (__int64)(int)uVar5;
        lVar20 = ((unsigned __int64)uVar12 ^ (__int64)(int)uVar6) - (__int64)(int)uVar6;
      }
      else {
        uVar14 = (unsigned __int64)uVar12 - (__int64)sVar2;
        uVar13 = (unsigned __int64)uVar4 - (__int64)*(short *)(iVar9 + iVar3);
        uVar19 = (unsigned __int64)((int)uVar13 >> 0x1f);
        uVar10 = (unsigned __int64)((int)uVar14 >> 0x1f);
        lVar18 = (uVar13 ^ uVar19) - uVar19;
        lVar20 = (uVar14 ^ uVar10) - uVar10;
      }
      uVar10 = ((~(lVar18 + lVar20) & 0xffffffffU) >> 0x1f) +
               (unsigned __int64)((unsigned __int64)(lVar18 + lVar20) < 0x21) & 1;
    }
    else {
      uVar10 = 1;
    }
  }
  return uVar10;
}

