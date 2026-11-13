void fn_82675868(int *param_1,int *param_2,__int64 param_3)

{
  unsigned char *pbVar1;
  __int64 lVar2;
  __int64 lVar3;
  __int64 lVar4;
  int iVar5;
  int iVar6;
  unsigned __int64 uVar7;
  unsigned __int64 uVar8;
  
  iVar6 = *param_1 >> 1;
  uVar7 = (unsigned __int64)iVar6;
  iVar5 = *param_2 >> 1;
  if (iVar6 < 1) {
    uVar7 = 1;
  }
  if (iVar5 < 1) {
    iVar5 = 1;
  }
  if ((((int)((uVar7 & 0xffffffff) << 1) == *param_1) && (iVar5 << 1 == *param_2)) &&
     (iVar6 = 0, lVar4 = param_3, 0 < iVar5)) {
    do {
      lVar3 = (__int64)(iVar6 << 1) * (__int64)*param_1 + param_3;
      if (0 < (int)uVar7) {
        lVar2 = lVar4 + -1;
        uVar8 = uVar7;
        do {
          pbVar1 = (unsigned char *)lVar3;
          lVar3 = lVar3 + 2;
          lVar2 = lVar2 + 1;
          *(unsigned char *)lVar2 =
               (char)((int)((unsigned int)(pbVar1 + *param_1)[1] + (unsigned int)pbVar1[1] + (unsigned int)pbVar1[*param_1]
                           + (unsigned int)*pbVar1) >> 2);
          uVar8 = uVar8 - 1;
        } while (uVar8 != 0);
      }
      iVar6 = iVar6 + 1;
      lVar4 = lVar4 + uVar7;
    } while (iVar6 < iVar5);
  }
  *param_1 = (int)uVar7;
  *param_2 = iVar5;
  return;
}

