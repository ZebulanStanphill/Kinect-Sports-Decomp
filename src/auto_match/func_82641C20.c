extern int fn_82641518();
extern int fn_82645110();


void fn_82641C20(__int64 param_1,unsigned __int64 param_2)

{
  int iVar1;
  int iVar2;
  unsigned __int64 uVar3;
  __int64 lVar4;
  unsigned __int64 uVar5;
  __int64 lVar6;
  __int64 lVar7;
  __int64 lVar8;
  
  iVar1 = (int)param_1;
  uVar3 = (unsigned __int64)*(unsigned int *)(iVar1 + 0x30);
  lVar6 = 0x2388;
  if (*(unsigned int *)(iVar1 + 0x38) < uVar3) {
    uVar3 = fn_82645110(param_1);
  }
  iVar2 = (int)uVar3;
  *(unsigned int *)(iVar2 + 4) = 0x2007;
  *(unsigned int *)(iVar2 + 8) = *(unsigned int *)(iVar1 + 0x289c);
  *(unsigned int *)(iVar2 + 0xc) = 0xa31;
  lVar8 = param_1 + 0x281c;
  *(unsigned int *)(iVar2 + 0x10) = 0x10000;
  *(unsigned int *)(iVar2 + 0x14) = 0x10a2f;
  *(unsigned int *)(iVar2 + 0x18) = 0;
  *(unsigned int *)(iVar2 + 0x1c) = 0x1000;
  *(unsigned int *)(iVar2 + 0x20) = 0xc0043c00;
  *(unsigned int *)(iVar2 + 0x24) = 3;
  *(unsigned int *)(iVar2 + 0x28) = 0xa31;
  *(unsigned int *)(iVar2 + 0x2c) = 0;
  *(unsigned int *)(iVar2 + 0x30) = 0x80000000;
  uVar3 = uVar3 + 0x34;
  *(unsigned int *)uVar3 = 8;
  *(unsigned int **)(iVar1 + 0x30) = (unsigned int *)uVar3;
  do {
    lVar4 = LZCOUNT(param_2);
    param_2 = param_2 << lVar4;
    lVar8 = lVar4 * 0x10 + lVar8;
    lVar7 = LZCOUNT(~param_2);
    lVar6 = lVar4 * 4 + lVar6;
    lVar4 = lVar7 * 4;
    if ((lVar7 * 0x10 + uVar3 + 4 & 0xffffffff) < (unsigned __int64)*(unsigned int *)(iVar1 + 0x34)) {
      *(unsigned int *)((int)uVar3 + 4) = 0x80000000;
      uVar3 = (uVar3 & 7) + uVar3 + 4;
      *(unsigned int *)uVar3 = (unsigned int)((lVar4 - 1U & 0xffffffff) << 0x10) | (unsigned int)lVar6;
      do {
        iVar2 = (int)lVar8;
        lVar7 = lVar7 + -1;
        uVar5 = *(unsigned __int64 *)(iVar2 + 0xc);
        lVar8 = lVar8 + 0x10;
        param_2 = param_2 << 1;
        *(unsigned __int64 *)((int)uVar3 + 4) = *(unsigned __int64 *)(iVar2 + 4);
        *(unsigned __int64 *)((int)uVar3 + 0xc) = uVar5;
        uVar3 = uVar3 + 0x10;
      } while (lVar7 != 0);
    }
    else {
      uVar3 = fn_82641518(param_1,uVar3,lVar6,lVar8,lVar4,4);
      lVar8 = lVar7 * 0x10 + lVar8;
      param_2 = param_2 << lVar7;
    }
    lVar6 = lVar4 + lVar6;
  } while (param_2 != 0);
  *(int *)(iVar1 + 0x30) = (int)uVar3;
  return;
}

