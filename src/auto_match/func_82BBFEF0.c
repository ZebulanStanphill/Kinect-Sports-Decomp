#define true 1


void fn_82BBFEF0(int param_1,int (**param_2)())

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned __int64 uVar3;
  int iVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  __int64 lVar7;
  unsigned __int64 uVar8;
  __int64 lVar9;
  unsigned int *puVar11;
  unsigned __int64 uVar10;
  __int64 lVar12;
  __int64 lVar13;
  unsigned __int64 uVar14;
  
  uVar1 = *(unsigned int *)(param_1 + 8);
  uVar6 = *(unsigned int *)(param_1 + 4);
  uVar5 = 1;
  do {
    uVar5 = uVar5 * 3 + 1;
  } while (uVar5 < uVar6);
  uVar14 = (unsigned __int64)uVar5 / 3;
  iVar4 = (int)uVar14;
  do {
    if (iVar4 == 0) {
      return;
    }
    if (uVar14 < uVar6) {
      uVar3 = uVar14 & 0x3fffffff;
      lVar13 = 0;
      lVar12 = uVar3 * 4 + (unsigned __int64)uVar1;
      uVar8 = (unsigned __int64)uVar1;
      do {
        uVar2 = *(unsigned int *)lVar12;
        lVar9 = lVar13;
        if (-1 < (int)lVar13) {
          lVar7 = lVar12 + uVar3 * 4;
          uVar10 = uVar8;
          do {
            puVar11 = (unsigned int *)uVar10;
            iVar4 = (*param_2)(*puVar11,uVar2);
            if (iVar4 < 1) break;
            lVar7 = lVar7 + uVar3 * -4;
            lVar9 = lVar9 - uVar14;
            uVar10 = uVar10 + uVar3 * -4;
            *(unsigned int *)lVar7 = *puVar11;
          } while (-1 < lVar9);
        }
        lVar13 = lVar13 + 1;
        lVar12 = lVar12 + 4;
        uVar8 = uVar8 + 4;
        *(unsigned int *)((int)((lVar9 + uVar14 & 0xffffffff) << 2) + uVar1) = uVar2;
        uVar6 = *(unsigned int *)(param_1 + 4);
      } while ((lVar13 + uVar14 & 0xffffffff) < (unsigned __int64)uVar6);
    }
    uVar14 = uVar14 / 3;
    iVar4 = (int)uVar14;
  } while( true );
}

