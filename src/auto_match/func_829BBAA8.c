__int64 fn_829BBAA8(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int (**pcVar3)();
  __int64 lVar4;
  unsigned int *puVar5;
  unsigned int uVar6;
  int iVar7;
  int iVar8;
  unsigned __int64 uVar9;
  unsigned __int64 uVar10;
  unsigned __int64 uVar11;
  unsigned int uVar12;
  int iVar13;
  
  iVar1 = *(int *)(param_1 + 0x144);
  iVar2 = *(int *)(param_1 + 0x1b0);
  while ((*(int *)(param_1 + 0x94) < *(int *)(param_1 + 0x9c) ||
         ((*(int *)(param_1 + 0x94) == *(int *)(param_1 + 0x9c) &&
          (*(unsigned int *)(param_1 + 0x98) <= *(unsigned int *)(param_1 + 0xa0)))))) {
    lVar4 = (*(int (**)())**(unsigned int **)(param_1 + 0x1b8))(param_1);
    if ((int)lVar4 == 0) {
      return lVar4;
    }
  }
  iVar7 = 0;
  iVar13 = *(int *)(param_1 + 0xdc);
  if (0 < *(int *)(param_1 + 0x24)) {
    iVar8 = 0;
    do {
      if (*(int *)(iVar13 + 0x30) != 0) {
        puVar5 = (unsigned int *)(**(int (***)())(*(int *)(param_1 + 4) + 0x20))
                                   (param_1,*(unsigned int *)(iVar2 + 0x48 + iVar8),
                                    (__int64)*(int *)(param_1 + 0xa0) *
                                    (__int64)*(int *)(iVar13 + 0xc),*(int *)(iVar13 + 0xc),0);
        if (*(unsigned int *)(param_1 + 0xa0) < iVar1 - 1U) {
          uVar9 = (unsigned __int64)*(unsigned int *)(iVar13 + 0xc);
        }
        else {
          uVar6 = *(unsigned int *)(iVar13 + 0xc);
          trapWord(6,(unsigned __int64)uVar6,0);
          uVar9 = (unsigned __int64)*(unsigned int *)(iVar13 + 0x20) -
                  (__int64)(int)(*(unsigned int *)(iVar13 + 0x20) / uVar6) * (__int64)(int)uVar6;
          if (uVar9 == 0) {
            uVar9 = (unsigned __int64)uVar6;
          }
        }
        uVar10 = (unsigned __int64)*(unsigned int *)(iVar8 + param_2);
        pcVar3 = *(int (***)())(*(int *)(param_1 + 0x1c4) + iVar8 + 4);
        if (0 < (int)uVar9) {
          uVar6 = *(unsigned int *)(iVar13 + 0x1c);
          do {
            uVar11 = (unsigned __int64)*puVar5;
            lVar4 = 0;
            uVar12 = 0;
            if (uVar6 != 0) {
              do {
                (*pcVar3)(param_1,iVar13,uVar11,uVar10,lVar4);
                uVar6 = *(unsigned int *)(iVar13 + 0x1c);
                uVar12 = uVar12 + 1;
                uVar11 = uVar11 + 0x80;
                lVar4 = (unsigned __int64)*(unsigned int *)(iVar13 + 0x24) + lVar4;
              } while (uVar12 < uVar6);
            }
            uVar9 = uVar9 - 1;
            puVar5 = puVar5 + 1;
            uVar10 = ((unsigned __int64)*(unsigned int *)(iVar13 + 0x24) & 0x3fffffff) * 4 + uVar10;
          } while (uVar9 != 0);
        }
      }
      iVar7 = iVar7 + 1;
      iVar8 = iVar8 + 4;
      iVar13 = iVar13 + 0x54;
    } while (iVar7 < *(int *)(param_1 + 0x24));
  }
  uVar9 = (unsigned __int64)*(unsigned int *)(param_1 + 0xa0) + 1;
  *(int *)(param_1 + 0xa0) = (int)uVar9;
  return 4 - (unsigned __int64)(uVar9 < *(unsigned int *)(param_1 + 0x144));
}

