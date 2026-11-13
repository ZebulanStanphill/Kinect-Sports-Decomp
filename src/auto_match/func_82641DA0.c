#define true 1
extern int fn_82641518();
extern int fn_82645110();


void fn_82641DA0(__int64 param_1,unsigned __int64 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
  unsigned __int64 uVar6;
  __int64 lVar7;
  __int64 lVar8;
  __int64 lVar9;
  __int64 lVar10;
  __int64 lVar11;
  __int64 lVar12;
  
  iVar1 = (int)param_1;
  uVar4 = (unsigned __int64)*(unsigned int *)(iVar1 + 0x30);
  lVar8 = 0x4800;
  lVar12 = param_1 + 0x47c;
  do {
    while( true ) {
      lVar7 = LZCOUNT(param_2);
      param_2 = param_2 << lVar7;
      lVar10 = lVar7 * 6 + lVar8;
      lVar9 = LZCOUNT(~param_2);
      lVar11 = lVar9 * 6;
      lVar12 = lVar7 * 0x18 + lVar12;
      if (((lVar11 + 5) * 4 + uVar4 & 0xffffffff) < (unsigned __int64)*(unsigned int *)(iVar1 + 0x34)) break;
      uVar4 = fn_82641518(param_1,uVar4,lVar10,lVar12,lVar11,6);
      param_2 = param_2 << lVar9;
      lVar12 = lVar9 * 0x18 + lVar12;
      lVar8 = lVar11 + lVar10;
      if (param_2 == 0) {
        *(int *)(iVar1 + 0x30) = (int)uVar4;
        if ((unsigned __int64)*(unsigned int *)(iVar1 + 0x38) < (uVar4 & 0xffffffff)) {
          uVar4 = fn_82645110(param_1);
        }
        iVar2 = (int)uVar4;
        *(unsigned int *)(iVar2 + 4) = 0x25000;
        *(unsigned int *)(iVar2 + 8) = 0;
        *(unsigned int *)(iVar2 + 0xc) = 0;
        *(unsigned int *)(iVar2 + 0x10) = 0;
        *(unsigned int **)(iVar1 + 0x30) = (unsigned int *)(iVar2 + 0x10);
        return;
      }
    }
    *(unsigned int *)((int)uVar4 + 4) = 0x80000000;
    lVar8 = lVar11 + lVar10;
    uVar4 = (uVar4 & 7) + uVar4 + 4;
    *(unsigned int *)uVar4 = (unsigned int)((lVar11 - 1U & 0xffffffff) << 0x10) | (unsigned int)lVar10;
    do {
      iVar2 = (int)lVar12;
      lVar9 = lVar9 + -1;
      uVar6 = *(unsigned __int64 *)(iVar2 + 0xc);
      param_2 = param_2 << 1;
      uVar5 = *(unsigned __int64 *)(iVar2 + 0x14);
      lVar12 = lVar12 + 0x18;
      iVar3 = (int)uVar4;
      *(unsigned __int64 *)(iVar3 + 4) = *(unsigned __int64 *)(iVar2 + 4);
      *(unsigned __int64 *)(iVar3 + 0xc) = uVar6;
      *(unsigned __int64 *)(iVar3 + 0x14) = uVar5;
      uVar4 = uVar4 + 0x18;
    } while (lVar9 != 0);
  } while (param_2 != 0);
  *(int *)(iVar1 + 0x30) = iVar3 + 0x28;
  *(unsigned __int64 *)(iVar3 + 0x1c) = 0x2500000000000;
  *(unsigned __int64 *)(iVar3 + 0x24) = 0x2500000000000;
  return;
}

