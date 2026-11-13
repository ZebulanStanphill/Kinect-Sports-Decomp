extern unsigned int iStack00000024;


unsigned __int64 fn_829F27B8(int param_1,__int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4,
                       unsigned short param_5,unsigned __int64 param_6,unsigned __int64 param_7,unsigned int *param_8)

{
  unsigned short uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned __int64 uVar4;
  __int64 lVar5;
  __int64 lVar6;
  unsigned __int64 uVar7;
  unsigned __int64 uVar8;
  unsigned int uVar9;
  unsigned __int64 uVar10;
  int iVar11;
  unsigned __int64 uVar12;
  __int64 lVar13;
  int iStack00000024;
  
  uVar10 = 0;
  uVar4 = param_3 >> 0x20;
  lVar6 = uVar4 + 2;
  uVar12 = -(unsigned __int64)(uVar4 - 1 < 0xffffffff80000000) & uVar4 - 1;
  if (0x50 < (int)lVar6) {
    lVar6 = 0x50;
  }
  iStack00000024 = (int)param_3;
  uVar7 = (param_3 & 0xffffffff) - 1;
  uVar7 = -(unsigned __int64)(uVar7 < 0xffffffff80000000) & uVar7;
  iVar11 = 0x3c;
  if (iStack00000024 + 2 < 0x3d) {
    iVar11 = iStack00000024 + 2;
  }
  *param_8 = 0;
  param_8[1] = 0;
  param_8[2] = 0;
  if ((int)uVar7 < iVar11) {
    lVar13 = (__int64)(int)uVar7 * (__int64)(int)param_2;
    do {
      if ((int)uVar12 < (int)lVar6) {
        lVar5 = lVar6 - uVar12;
        uVar8 = uVar12;
        do {
          uVar1 = *(unsigned short *)((int)((lVar13 + uVar8 & 0xffffffff) << 1) + param_1) >> 3;
          if (uVar1 != 0) {
            uVar10 = uVar10 + 1;
            param_8[2] = param_8[2] + (unsigned int)uVar1;
            *param_8 = *param_8 + (int)uVar8;
            param_8[1] = param_8[1] + (int)uVar7;
          }
          uVar8 = uVar8 + 1;
          lVar5 = lVar5 + -1;
        } while (lVar5 != 0);
      }
      uVar7 = uVar7 + 1;
      lVar13 = lVar13 + param_2;
    } while ((int)uVar7 < iVar11);
    iVar11 = (int)uVar10;
    if (iVar11 != 0) {
      uVar2 = param_8[2];
      uVar9 = *param_8;
      uVar3 = param_8[1];
      param_8[2] = (int)uVar2 / iVar11;
      *param_8 = (int)uVar9 / iVar11;
      param_8[1] = (int)uVar3 / iVar11;
      uVar1 = *(unsigned short *)
               ((int)(((__int64)iStack00000024 * (__int64)(int)param_2 + uVar4 & 0xffffffff) << 1)
               + param_1);
      trapWord(5,uVar10 & ~((((unsigned __int64)uVar3 & 0x7fffffff) << 1 | (unsigned __int64)(uVar3 >> 0x1f)) - 1)
               ,0xffff);
      trapWord(6,uVar10,0);
      trapWord(6,uVar10,0);
      trapWord(6,uVar10,0);
      trapWord(5,uVar10 & ~((((unsigned __int64)uVar2 & 0x7fffffff) << 1 | (unsigned __int64)(uVar2 >> 0x1f)) - 1)
               ,0xffff);
      trapWord(5,uVar10 & ~((((unsigned __int64)uVar9 & 0x7fffffff) << 1 | (unsigned __int64)(uVar9 >> 0x1f)) - 1)
               ,0xffff);
      if (((uVar1 & 7) == param_5) &&
         (uVar9 = (unsigned int)(uVar1 >> 3) - (int)uVar2 / iVar11, uVar2 = (int)uVar9 >> 0x1f,
         (int)((uVar9 ^ uVar2) - uVar2) < 0x12d)) {
        return uVar10;
      }
    }
  }
  return 0;
}

