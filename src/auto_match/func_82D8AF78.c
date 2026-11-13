typedef unsigned char bool;
#define true 1
#define false 0


__int64 fn_82D8AF78(__int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4)

{
  unsigned int uVar1;
  int iVar2;
  int iVar3;
  unsigned int uVar4;
  int iVar5;
  unsigned int uVar6;
  int iVar7;
  __int64 lVar8;
  unsigned __int64 uVar9;
  unsigned __int64 uVar10;
  __int64 lVar11;
  unsigned __int64 uVar12;
  unsigned __int64 uVar13;
  bool bVar14;
  
  lVar8 = param_1;
  do {
    iVar5 = (int)param_1;
    iVar3 = *(int *)(((int)param_2 + (int)param_3 >> 1) * 4 + iVar5);
    uVar9 = param_3;
    uVar13 = param_2;
    do {
      uVar1 = *(unsigned int *)(iVar3 + 0x34);
      lVar11 = (uVar13 & 0x3fffffff) * 4 + param_1;
      while( true ) {
        iVar2 = *(int *)lVar11;
        uVar6 = (unsigned int)param_4;
        if (*(unsigned int *)(iVar2 + 0x34) < uVar1) {
          bVar14 = true;
        }
        else if (uVar1 < *(unsigned int *)(iVar2 + 0x34)) {
          bVar14 = false;
        }
        else {
          uVar12 = (unsigned __int64)
                   *(unsigned int *)((*(unsigned int *)(iVar2 + 0x18) ^ *(unsigned int *)(iVar2 + 0x14) ^ uVar6) + 0xd4);
          uVar10 = (unsigned __int64)
                   *(unsigned int *)((*(unsigned int *)(iVar3 + 0x18) ^ *(unsigned int *)(iVar3 + 0x14) ^ uVar6) + 0xd4);
          bVar14 = uVar12 < uVar10;
          lVar8 = uVar12 - uVar10;
        }
        if (!bVar14) break;
        uVar13 = uVar13 + 1;
        lVar11 = lVar11 + 4;
      }
      lVar11 = (uVar9 & 0x3fffffff) * 4 + param_1;
      while( true ) {
        iVar2 = *(int *)lVar11;
        if (uVar1 < *(unsigned int *)(iVar2 + 0x34)) {
          bVar14 = true;
        }
        else if (*(unsigned int *)(iVar2 + 0x34) < uVar1) {
          bVar14 = false;
        }
        else {
          uVar12 = (unsigned __int64)
                   *(unsigned int *)((*(unsigned int *)(iVar2 + 0x18) ^ *(unsigned int *)(iVar2 + 0x14) ^ uVar6) + 0xd4);
          uVar10 = (unsigned __int64)
                   *(unsigned int *)((*(unsigned int *)(iVar3 + 0x18) ^ *(unsigned int *)(iVar3 + 0x14) ^ uVar6) + 0xd4);
          bVar14 = uVar10 < uVar12;
          lVar8 = uVar10 - uVar12;
        }
        if (!bVar14) break;
        uVar9 = uVar9 - 1;
        lVar11 = lVar11 + -4;
      }
      if ((int)uVar9 < (int)uVar13) break;
      if ((int)uVar9 != (int)uVar13) {
        iVar2 = (int)((uVar13 & 0xffffffff) << 2);
        iVar7 = (int)((uVar9 & 0xffffffff) << 2);
        uVar4 = *(unsigned int *)(iVar7 + iVar5);
        *(unsigned int *)(iVar7 + iVar5) = *(unsigned int *)(iVar2 + iVar5);
        *(unsigned int *)(iVar2 + iVar5) = uVar4;
      }
      uVar9 = uVar9 - 1;
      uVar13 = uVar13 + 1;
    } while ((int)uVar13 <= (int)uVar9);
    if ((int)param_2 < (int)uVar9) {
      lVar8 = fn_82D8AF78(param_1,param_2,uVar9,param_4);
    }
    param_2 = uVar13;
    if ((int)param_3 <= (int)uVar13) {
      return lVar8;
    }
  } while( true );
}

