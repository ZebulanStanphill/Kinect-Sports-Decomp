unsigned __int64 fn_82C180B8(int *param_1,__int64 param_2,unsigned short *param_3,unsigned __int64 param_4)

{
  unsigned short uVar1;
  int iVar2;
  unsigned int uVar3;
  int iVar4;
  unsigned __int64 uVar5;
  unsigned __int64 uVar6;
  unsigned __int64 uVar7;
  __int64 lVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  unsigned __int64 uVar13;
  __int64 lVar14;
  unsigned __int64 uVar15;
  
  iVar2 = *param_1;
  uVar3 = param_1[0x5a];
  uVar1 = *param_3;
  trapWord(6,(unsigned __int64)uVar3,0);
  trapWord(6,(unsigned __int64)*(unsigned int *)(iVar2 + 0x58),0);
  if (((param_4 & 0xffffffff) / (unsigned __int64)*(unsigned int *)(iVar2 + 0x58)) / (unsigned __int64)uVar3 >> 1 <
      (unsigned __int64)uVar1) {
    uVar5 = 0xffffffff80070057;
  }
  else {
    iVar12 = 0;
    if (0 < (int)uVar3) {
      iVar9 = 0;
      iVar10 = ((unsigned int)uVar1 * 2 + -1) * uVar3;
      iVar11 = (uVar1 - 1) * uVar3;
      do {
        iVar4 = *(int *)(iVar2 + 0x58);
        lVar14 = (__int64)iVar11 * (__int64)iVar4 + param_2;
        uVar15 = (__int64)iVar10 * (__int64)iVar4 + param_2;
        uVar6 = (**(int (***)())(iVar2 + 0x20c))(lVar14,iVar4,*(unsigned short *)(iVar2 + 0x6e),0);
        uVar13 = (__int64)(int)(iVar12 + uVar3) * (__int64)*(int *)(iVar2 + 0x58) + param_2;
        uVar5 = uVar6;
        uVar7 = uVar6;
        if ((uVar13 & 0xffffffff) < (uVar15 & 0xffffffff)) {
          do {
            (**(int (***)())(iVar2 + 0x208))(uVar5,uVar15,iVar2,0);
            lVar8 = (__int64)*(int *)(iVar2 + 0x58) * (__int64)(int)uVar3;
            lVar14 = lVar14 - lVar8;
            lVar8 = uVar15 - lVar8;
            uVar7 = (**(int (***)())(iVar2 + 0x20c))
                              (lVar14,*(int *)(iVar2 + 0x58),*(unsigned short *)(iVar2 + 0x6e),0);
            (**(int (***)())(iVar2 + 0x208))
                      ((__int64)((int)uVar5 >> 1) + (__int64)((int)uVar7 >> 1),lVar8,iVar2,0);
            uVar15 = lVar8 - (__int64)(int)uVar3 * (__int64)*(int *)(iVar2 + 0x58);
            uVar5 = uVar7;
          } while ((uVar13 & 0xffffffff) < (uVar15 & 0xffffffff));
        }
        (**(int (***)())(iVar2 + 0x208))(uVar7,uVar15,iVar2,0);
        (**(int (***)())(iVar2 + 0x208))
                  ((__int64)(*(int *)(iVar9 + param_1[0x56]) >> 1) + (__int64)((int)uVar7 >> 1),
                   uVar15 - (__int64)(int)uVar3 * (__int64)*(int *)(iVar2 + 0x58),iVar2,0);
        iVar12 = iVar12 + 1;
        iVar11 = iVar11 + 1;
        iVar10 = iVar10 + 1;
        *(int *)(iVar9 + param_1[0x56]) = (int)uVar6;
        iVar9 = iVar9 + 4;
      } while (iVar12 < (int)uVar3);
    }
    uVar5 = 0;
    *param_3 = *param_3 << 1;
  }
  return uVar5;
}

