extern int fn_8268F318();
extern int fn_8268F580();
extern int fn_8268F620();


__int64 fn_8268FCB8(int param_1,int param_2,unsigned int param_3,int param_4)

{
  int iVar1;
  unsigned int uVar2;
  int iVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  __int64 lVar6;
  int iVar7;
  int iVar8;
  unsigned __int64 uVar9;
  __int64 lVar10;
  int iVar11;
  unsigned __int64 uVar12;
  unsigned __int64 uVar13;
  unsigned __int64 uVar14;
  unsigned __int64 uVar15;
  
  iVar1 = *(int *)(param_1 + 8);
  uVar2 = *(unsigned int *)(param_1 + 0xc);
  iVar7 = param_2 * 0xc + param_1;
  iVar11 = *(int *)(iVar7 + 0x20);
  iVar3 = *(int *)(iVar7 + 0x1c);
  uVar12 = (unsigned __int64)
           (iVar11 - ((((iVar1 * 8 + iVar11) - 1U >> (uVar2 + 3 & 0x3f)) + iVar1) - 1 &
                     ~(iVar1 - 1U)) >> (uVar2 & 0x3f));
  uVar9 = 0xffffffffffffffff;
  lVar10 = 0;
  iVar11 = (iVar3 - ((((iVar1 * 8 + iVar11) - 1U >> (uVar2 + 3 & 0x3f)) + iVar1) - 1 & ~(iVar1 - 1U)
                    )) + iVar11;
  uVar4 = param_3 >> (uVar2 & 0x3f);
  uVar13 = 0xffffffffffffffff;
  uVar15 = 0;
  if (uVar12 != 0) {
    do {
      uVar14 = uVar15;
      uVar5 = (unsigned int)uVar14;
      if ((*(unsigned int *)((uVar5 >> 3 & 0x1ffffffc) + iVar11) >> (uVar5 & 0x1f) & 1) == 0) {
        lVar6 = fn_8268F620(iVar11,uVar14);
        iVar8 = iVar1 * uVar5 + iVar3;
        if (((((iVar8 + param_4) - 1U & ~(param_4 - 1U)) + param_3 <=
              (unsigned int)(iVar1 * (int)lVar6 + iVar8)) &&
            (uVar15 = lVar6 - (unsigned __int64)uVar4, (uVar15 & 0xffffffff) < (uVar9 & 0xffffffff))) &&
           (uVar9 = uVar15, uVar13 = uVar14, *(char *)(param_1 + 0x1a4) == '\0')) break;
      }
      else {
        lVar6 = fn_8268F580(iVar11,uVar14,uVar12);
      }
      uVar15 = lVar6 + uVar14;
      uVar14 = uVar13;
    } while ((uVar15 & 0xffffffff) < uVar12);
    if ((int)uVar14 != -1) {
      iVar8 = iVar1 * (int)uVar14;
      lVar6 = (__int64)
              ((int)((((iVar8 + iVar3 + param_4) - 1U & ~(param_4 - 1U)) - iVar8) - iVar3) >>
              (uVar2 & 0x3f)) + uVar14;
      lVar10 = (**(int (***)())(**(int **)(param_1 + 4) + 0xc))
                         (*(int **)(param_1 + 4),(int)lVar6 * iVar1 + iVar3,param_3);
      if (lVar10 != 0) {
        fn_8268F318(iVar11,lVar6,(unsigned __int64)uVar4);
        *(unsigned int *)(iVar7 + 0x24) = *(int *)(iVar7 + 0x24) + uVar4;
        *(unsigned int *)(param_1 + 0x18) =
             (uVar4 << (*(unsigned int *)(param_1 + 0xc) & 0x3f)) + *(int *)(param_1 + 0x18);
        goto LAB_8268fe74;
      }
    }
  }
  param_2 = -1;
LAB_8268fe74:
  *(int *)(param_1 + 0x1a0) = param_2;
  *(unsigned int *)(param_1 + 0x1a8) = (int)lVar10 + param_3;
  return lVar10;
}

