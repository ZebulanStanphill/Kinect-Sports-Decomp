__int64 fn_82526CC0(__int64 param_1,__int64 param_2)

{
  unsigned char bVar1;
  unsigned __int64 uVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  char *pcVar8;
  __int64 lVar5;
  __int64 lVar6;
  __int64 lVar7;
  unsigned char *pbVar9;
  int iVar10;
  unsigned __int64 uVar11;
  
  lVar5 = param_1;
  do {
    pcVar8 = (char *)lVar5;
    lVar5 = lVar5 + 1;
  } while (*pcVar8 != '\0');
  lVar6 = param_2;
  do {
    pcVar8 = (char *)lVar6;
    lVar6 = lVar6 + 1;
  } while (*pcVar8 != '\0');
  uVar2 = (lVar6 - param_2) - 1U & 0xffffffff;
  lVar5 = ((lVar5 - param_1) - 1U & 0xffffffff) - uVar2;
  if (-1 < lVar5) {
    lVar6 = (param_2 - lVar5) - param_1;
    do {
      lVar7 = lVar5 + param_1;
      uVar11 = uVar2;
      if (uVar2 != 0) {
        do {
          pbVar9 = (unsigned char *)lVar7;
          bVar1 = *pbVar9;
          lVar7 = lVar7 + 1;
          uVar4 = bVar1 & 0xdf;
          uVar3 = pbVar9[(int)lVar6] & 0xdf;
          if (uVar4 != uVar3) {
            iVar10 = uVar4 - uVar3;
            goto code_r0x82526d48;
          }
          uVar11 = uVar11 - 1;
        } while (uVar11 != 0 && (bVar1 & 0xdf) != 0);
      }
      iVar10 = 0;
code_r0x82526d48:
      if (iVar10 == 0) {
        return lVar5;
      }
      lVar5 = lVar5 + -1;
      lVar6 = lVar6 + 1;
    } while (-1 < lVar5);
  }
  return -1;
}

