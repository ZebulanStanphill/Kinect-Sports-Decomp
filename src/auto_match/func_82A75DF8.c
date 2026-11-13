extern int fn_82A6CF00();
extern int fn_82BA02A8();


unsigned __int64 fn_82A75DF8(int param_1,int param_2,unsigned int *param_3,unsigned int *param_4,int *param_5)

{
  unsigned short uVar1;
  unsigned __int64 uVar2;
  unsigned short *puVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned __int64 uVar6;
  unsigned int uVar7;
  unsigned int uVar8;
  unsigned int uVar9;
  int iVar10;
  unsigned char *pbVar11;
  unsigned __int64 uVar12;
  unsigned int uVar13;
  
  uVar13 = *(unsigned int *)(param_2 + 0x28);
  uVar5 = *(unsigned int *)(param_2 + 0x24);
  iVar10 = *(int *)(param_2 + 0x20);
  pbVar11 = *(unsigned char **)(param_2 + 0x1c);
  uVar9 = *(unsigned int *)(param_2 + 0x30);
  uVar8 = *(unsigned int *)(param_2 + 0x2c);
  uVar7 = 0x17;
  uVar6 = 0;
  if (uVar13 < 0x17) {
    if (uVar9 != 0) {
      uVar4 = 0x20 - uVar13;
      if (uVar9 <= 0x20 - uVar13) {
        uVar4 = uVar9;
      }
      uVar9 = uVar9 - uVar4;
      uVar5 = uVar5 << (uVar4 & 0x3f) | uVar8 >> (uVar9 & 0x3f);
      uVar8 = (1 << (uVar9 & 0x3f)) - 1U & uVar8;
      uVar13 = uVar4 + uVar13;
    }
    uVar12 = (unsigned __int64)uVar5;
    if (*(int (***)())(param_2 + 0x54) == fn_82BA02A8) {
      for (; (uVar13 < 0x19 && (uVar5 = (unsigned int)uVar12, iVar10 != 0)); iVar10 = iVar10 + -1) {
        uVar13 = uVar13 + 8;
        uVar12 = (uVar12 & 0xffffff) << 8 | (unsigned __int64)*pbVar11;
        uVar5 = (unsigned int)uVar12;
        pbVar11 = pbVar11 + 1;
      }
    }
    else {
      for (; (uVar13 < 0x19 && (uVar5 = (unsigned int)uVar12, iVar10 != 0)); iVar10 = iVar10 + -1) {
        uVar2 = (**(int (***)())(param_2 + 0x54))(*pbVar11);
        uVar13 = uVar13 + 8;
        uVar12 = (uVar12 & 0xffffff) << 8 | uVar2 & 0xffffffff000000ff;
        uVar5 = (unsigned int)uVar12;
        pbVar11 = pbVar11 + 1;
      }
    }
    if (uVar13 < 0x17) {
      *(unsigned int *)(param_2 + 0x24) = uVar5;
      *(unsigned int *)(param_2 + 0x28) = uVar13;
      *(int *)(param_2 + 0x20) = iVar10;
      *(unsigned char **)(param_2 + 0x1c) = pbVar11;
      *(unsigned int *)(param_2 + 0x30) = uVar9;
      *(unsigned int *)(param_2 + 0x2c) = uVar8;
      uVar6 = fn_82A6CF00(param_2,1,0x17);
      if ((int)uVar6 < 0) {
        return uVar6;
      }
      uVar13 = *(unsigned int *)(param_2 + 0x28);
      uVar5 = *(unsigned int *)(param_2 + 0x24);
      iVar10 = *(int *)(param_2 + 0x20);
      pbVar11 = *(unsigned char **)(param_2 + 0x1c);
      uVar9 = *(unsigned int *)(param_2 + 0x30);
      uVar8 = *(unsigned int *)(param_2 + 0x2c);
      if (uVar13 < 0x17) {
        uVar7 = uVar13;
      }
    }
  }
  *(unsigned int *)(param_2 + 0x24) = uVar5;
  *(unsigned int *)(param_2 + 0x28) = uVar13;
  *(int *)(param_2 + 0x20) = iVar10;
  *(unsigned char **)(param_2 + 0x1c) = pbVar11;
  *(unsigned int *)(param_2 + 0x30) = uVar9;
  *(unsigned int *)(param_2 + 0x2c) = uVar8;
  uVar13 = (uVar5 >> ((int)(short)((short)uVar13 - (short)uVar7) & 0x3fU)) << (0x20 - uVar7 & 0x3f);
  uVar5 = uVar13 >> 0x1d & 6;
  puVar3 = (unsigned short *)(uVar5 + param_1);
  uVar1 = *(unsigned short *)(uVar5 + param_1);
  uVar5 = (unsigned int)uVar1;
  if ((uVar1 & 0x8000) == 0) {
    uVar12 = (unsigned __int64)uVar13;
    puVar3 = puVar3 + (uVar13 >> 0x1c & 3) + uVar5;
    uVar1 = *puVar3;
    uVar5 = (unsigned int)uVar1;
    if ((uVar1 & 0x8000) == 0) {
      puVar3 = puVar3 + (int)((uVar12 & 0xfffffff) >> 0x1a) + (unsigned int)uVar1;
      uVar1 = *puVar3;
      uVar5 = (unsigned int)uVar1;
      if ((uVar1 & 0x8000) == 0) {
        puVar3 = puVar3 + (uVar13 >> 0x18 & 3) + (unsigned int)uVar1;
        uVar1 = *puVar3;
        uVar5 = (unsigned int)uVar1;
        if ((uVar1 & 0x8000) == 0) {
          puVar3 = puVar3 + (int)((uVar12 & 0xffffff) >> 0x16) + (unsigned int)uVar1;
          uVar1 = *puVar3;
          uVar5 = (unsigned int)uVar1;
          if ((uVar1 & 0x8000) == 0) {
            puVar3 = puVar3 + (int)((uVar12 & 0x3fffff) >> 0x14) + (unsigned int)uVar1;
            uVar1 = *puVar3;
            uVar5 = (unsigned int)uVar1;
            if ((uVar1 & 0x8000) == 0) {
              puVar3 = puVar3 + (int)((uVar12 & 0xfffff) >> 0x12) + (unsigned int)uVar1;
              uVar1 = *puVar3;
              uVar5 = (unsigned int)uVar1;
              if ((uVar1 & 0x8000) == 0) {
                puVar3 = puVar3 + (uVar13 >> 0x10 & 3) + (unsigned int)uVar1;
                uVar1 = *puVar3;
                uVar5 = (unsigned int)uVar1;
                if ((uVar1 & 0x8000) == 0) {
                  puVar3 = puVar3 + (int)((uVar12 & 0xffff) >> 0xf) + (unsigned int)uVar1;
                  uVar1 = *puVar3;
                  uVar5 = (unsigned int)uVar1;
                  if ((uVar1 & 0x8000) == 0) {
                    puVar3 = puVar3 + (int)((uVar12 & 0x7fff) >> 0xe) + (unsigned int)uVar1;
                    uVar1 = *puVar3;
                    uVar5 = (unsigned int)uVar1;
                    if ((uVar1 & 0x8000) == 0) {
                      puVar3 = puVar3 + (int)((uVar12 & 0x3fff) >> 0xd) + (unsigned int)uVar1;
                      uVar1 = *puVar3;
                      uVar5 = (unsigned int)uVar1;
                      if ((uVar1 & 0x8000) == 0) {
                        uVar2 = (uVar12 & 0x1fff) << 0x13;
                        puVar3 = puVar3 + (int)((uVar12 & 0x1fff) >> 0xc) + (unsigned int)uVar1;
                        uVar1 = *puVar3;
                        uVar5 = (unsigned int)uVar1;
                        if ((uVar1 & 0x8000) == 0) {
                          puVar3 = puVar3 + (int)((uVar2 & 0x7fffffff) >> 0x1e) + (unsigned int)uVar1;
                          uVar1 = *puVar3;
                          uVar5 = (unsigned int)uVar1;
                          if ((uVar1 & 0x8000) == 0) {
                            puVar3 = puVar3 + ((unsigned int)((uVar2 & 0x7fffffff) >> 0x1d) & 1) +
                                              (unsigned int)uVar1;
                            uVar1 = *puVar3;
                            uVar5 = (unsigned int)uVar1;
                            if ((uVar1 & 0x8000) == 0) {
                              puVar3 = puVar3 + uVar1;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  uVar9 = uVar5 >> 10 & 0x1f;
  *param_3 = uVar9;
  *param_4 = uVar5 & 0x3ff;
  if (0x3fb < (uVar5 & 0x3ff)) {
    *param_4 = (unsigned int)puVar3[(uVar5 & 3) + 1];
  }
  if (param_5 != (int *)0x0) {
    *param_5 = uVar13 << uVar9;
  }
  return uVar6;
}

