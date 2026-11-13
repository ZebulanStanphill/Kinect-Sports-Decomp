void fn_82C779E0(int param_1)

{
  unsigned __int64 uVar1;
  unsigned __int64 uVar2;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
  int iVar6;
  __int64 lVar7;
  
  uVar5 = 0;
  lVar7 = 0x200;
  do {
    iVar6 = (int)uVar5;
    uVar1 = (unsigned __int64)(unsigned int)(iVar6 >> 7) & 1;
    uVar3 = (unsigned __int64)(unsigned int)(iVar6 >> 6) & 1;
    uVar2 = (unsigned __int64)(unsigned int)(iVar6 >> 8) & 1;
    uVar4 = uVar3;
    if (((unsigned __int64)(unsigned int)(iVar6 >> 4) & 1) != uVar1) {
      uVar4 = uVar1;
    }
    uVar4 = uVar5 & 1 ^ uVar4;
    if (uVar1 == uVar2) {
      uVar2 = uVar4;
    }
    uVar2 = (unsigned __int64)(unsigned int)(iVar6 >> 1) & 1 ^ uVar2;
    uVar1 = (unsigned __int64)(unsigned int)(iVar6 >> 5) & 1;
    if (uVar3 != uVar4) {
      uVar1 = uVar4;
    }
    uVar1 = (unsigned __int64)(unsigned int)(iVar6 >> 2) & 1 ^ uVar1;
    uVar3 = uVar1;
    if (uVar4 != uVar2) {
      uVar3 = uVar2;
    }
    uVar4 = ((((unsigned __int64)(unsigned int)(iVar6 >> 3) & 1 ^ uVar3) << 1 | uVar1) << 1 | uVar2) << 1 | uVar4;
    if (iVar6 < 0x100) {
      *(char *)(iVar6 + param_1 + 0x5db0) = (char)uVar4;
    }
    else {
      iVar6 = iVar6 + param_1 + 0x5db0;
      *(unsigned char *)(iVar6 + -0x100) = (unsigned char)(uVar4 << 4) | *(unsigned char *)(iVar6 + -0x100);
    }
    uVar5 = uVar5 + 1;
    lVar7 = lVar7 + -1;
  } while (lVar7 != 0);
  uVar5 = 0;
  lVar7 = 0x40;
  do {
    uVar1 = uVar5 & 0xffffffff;
    *(unsigned char *)((int)uVar5 + param_1 + 0x5eb0) =
         (unsigned char)((((((uVar5 & 1) << 1 | (uVar5 & 0xffffffff) >> 1 & 1) << 1 | uVar1 >> 2 & 1) << 1 |
                 uVar1 >> 3 & 1) << 1 | uVar1 >> 4 & 1) << 1) | (unsigned char)(uVar1 >> 5) & 1;
    uVar5 = uVar5 + 1;
    lVar7 = lVar7 + -1;
  } while (lVar7 != 0);
  return;
}

