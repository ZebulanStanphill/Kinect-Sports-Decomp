extern int fn_825ACB58();
extern int fn_828B00A0();


__int64 fn_825ABB28(int param_1)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned __int64 uVar3;
  int iVar4;
  float *pfVar5;
  float *pfVar6;
  int iVar7;
  __int64 lVar8;
  __int64 lVar9;
  __int64 lVar10;
  __int64 lVar11;
  __int64 lVar12;
  unsigned __int64 uVar13;
  
  lVar9 = 0;
  lVar11 = 0;
  lVar8 = 0;
  lVar10 = 0;
  uVar3 = fn_828B00A0((unsigned __int64)*(unsigned int *)(param_1 + 0x10) + 0x278);
  uVar1 = *(unsigned int *)(param_1 + 0xf4);
  uVar13 = 1;
  if (1 < uVar1) {
    param_1 = param_1 + 0xe4;
    do {
      iVar4 = fn_825ACB58(param_1,uVar13);
      if (uVar3 <= *(__int64 *)(iVar4 + 0x40) + 3000U) {
        lVar11 = lVar11 + 1;
        iVar4 = fn_825ACB58(param_1,uVar13);
        uVar2 = *(unsigned int *)(iVar4 + 0x50);
        iVar4 = fn_825ACB58(param_1,uVar13);
        lVar9 = ((unsigned __int64)uVar2 - *(__int64 *)(iVar4 + 0x40)) + lVar9;
        pfVar5 = (float *)fn_825ACB58(param_1,uVar13);
        lVar12 = uVar13 - 1;
        pfVar6 = (float *)fn_825ACB58(param_1,lVar12);
        if (*pfVar5 == *pfVar6) {
          iVar4 = fn_825ACB58(param_1,uVar13);
          iVar7 = fn_825ACB58(param_1,lVar12);
          if (*(float *)(iVar4 + 4) == *(float *)(iVar7 + 4)) {
            iVar4 = fn_825ACB58(param_1,uVar13);
            iVar7 = fn_825ACB58(param_1,lVar12);
            if (*(float *)(iVar4 + 8) == *(float *)(iVar7 + 8)) goto LAB_825abc6c;
          }
        }
        lVar10 = lVar10 + 1;
        iVar4 = fn_825ACB58(param_1,lVar12);
        iVar7 = fn_825ACB58(param_1,uVar13);
        lVar8 = (*(__int64 *)(iVar7 + 0x40) - *(__int64 *)(iVar4 + 0x40)) + lVar8;
      }
LAB_825abc6c:
      uVar13 = uVar13 + 1;
    } while ((uVar13 & 0xffffffff) < (unsigned __int64)uVar1);
    if (1 < lVar11) goto LAB_825abc88;
  }
  lVar11 = 1;
LAB_825abc88:
  if (lVar10 < 2) {
    lVar10 = 1;
  }
  return (__int64)(int)(lVar8 / lVar10) + (__int64)(int)(lVar9 / lVar11);
}

