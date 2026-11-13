extern unsigned int *auStack_50;
extern unsigned int *auStack_5c;
extern int fn_82A2DB28();
extern int fn_82A2E260();
extern unsigned int iStack_60;


unsigned __int64 fn_82A2EC98(int param_1,unsigned __int64 param_2)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  int iVar4;
  unsigned int uVar5;
  unsigned __int64 uVar6;
  unsigned int *puVar7;
  unsigned __int64 uVar8;
  unsigned __int64 uVar9;
  unsigned int *puVar10;
  unsigned __int64 uVar11;
  unsigned int uVar12;
  unsigned __int64 uVar13;
  unsigned __int64 uVar14;
  __int64 lVar15;
  int iStack_60;
  unsigned char auStack_5c [4];
  __int64 lStack_58;
  unsigned char auStack_50 [80];
  
  uVar1 = *(unsigned int *)(param_1 + 0x9c);
  uVar13 = uVar1 + param_2;
  if (((unsigned __int64)*(unsigned int *)(param_1 + 0x98) < (param_2 & 0xffffffff)) ||
     ((unsigned __int64)*(unsigned int *)(param_1 + 0x98) < (uVar13 & 0xffffffff))) {
    uVar6 = 0xffffffffc000007f;
  }
  else {
    uVar8 = (uVar13 + 0xa9 & 0xffffffff) / 0xaa;
    if (uVar8 < 2) {
      uVar11 = 0;
    }
    else {
      uVar11 = (uVar8 + 0xa9) / 0xaa;
    }
    uVar14 = (unsigned __int64)(uVar8 >= 2);
    if (uVar11 < 2) {
      uVar9 = 0;
    }
    else {
      uVar14 = 2;
      uVar9 = (uVar11 + 0xa9) / 0xaa;
    }
    if (*(char *)(param_1 + 0xcd) == '\0') {
      lStack_58 = (((uVar9 + uVar11 + uVar8) * 2 + uVar13) * 0x1000 & 0xffffffff000) +
                  *(__int64 *)(param_1 + 0x20);
      uVar6 = NtSetInformationFile(*(unsigned int *)(param_1 + 0x28),auStack_50,&lStack_58,8,0x14);
      if ((int)uVar6 < 0) {
        return uVar6;
      }
    }
    if (((unsigned __int64)uVar1 != 0) && (*(unsigned char *)(param_1 + 0xca) < uVar14)) {
      fn_82A2E260(param_1,0,0xffffffffffffffff);
      uVar11 = (unsigned __int64)*(unsigned char *)(param_1 + 0xca) + 1;
      uVar8 = uVar11;
      while (uVar8 <= uVar14) {
        uVar11 = uVar11 + 1;
        uVar6 = fn_82A2DB28(param_1,0,uVar11,&iStack_60,auStack_5c);
        iVar4 = iStack_60;
        if ((int)uVar6 < 0) {
          return uVar6;
        }
        puVar7 = (unsigned int *)(iStack_60 + -4);
        puVar10 = (unsigned int *)(param_1 + 0xac);
        lVar15 = 5;
        do {
          puVar10 = puVar10 + 1;
          puVar7 = puVar7 + 1;
          *puVar7 = *puVar10;
          lVar15 = lVar15 + -1;
        } while (lVar15 != 0);
        uVar12 = *(unsigned int *)(iStack_60 + 0x14);
        uVar2 = *(unsigned int *)(param_1 + 0xa0) & 0x7fff;
        *(unsigned int *)(iStack_60 + 0x14) = uVar12 & 0xffff8000 | uVar2;
        uVar5 = (*(unsigned int *)(param_1 + 0xa4) & 0x7fff) << 0xf;
        *(unsigned int *)(iStack_60 + 0x14) = uVar5 | uVar12 & 0xc0000000 | uVar2;
        uVar3 = *(unsigned int *)(param_1 + 0xc4) & 0x80000000;
        *(unsigned int *)(iStack_60 + 0x14) = uVar5 | uVar12 & 0x40000000 | uVar2 | uVar3;
        *(unsigned int *)(iStack_60 + 0x14) = *(unsigned int *)(param_1 + 0xc4) & 0x40000000 | uVar5 | uVar2 | uVar3
        ;
        *(unsigned int *)(iStack_60 + 0xff0) = uVar1;
        XeCryptSha(iStack_60,0x1000,0,0,0,0,param_1 + 0xb0,0x14);
        uVar12 = iVar4 - *(int *)(param_1 + 0x34);
        iVar4 = (((int)uVar12 >> 0xc) + (unsigned int)((int)uVar12 < 0 && (uVar12 & 0xfff) != 0)) * 8 +
                *(int *)(param_1 + 0x30);
        *(char *)(iVar4 + 4) = *(char *)(iVar4 + 4) + -1;
        *(unsigned int *)(param_1 + 0xc4) = *(unsigned int *)(param_1 + 0xc4) & 0x3fffffff | 0x80000000;
        uVar8 = uVar11 & 0xffffffff;
      }
    }
    uVar6 = 0;
    *(int *)(param_1 + 0x9c) = (int)uVar13;
    *(char *)(param_1 + 0xca) = (char)uVar14;
    *(int *)(param_1 + 0xa0) = *(int *)(param_1 + 0xa0) + (int)param_2;
  }
  return uVar6;
}

