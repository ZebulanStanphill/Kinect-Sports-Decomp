#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern int fn_82FA5CA0();
extern int fn_82FA5D50();
extern int fn_82FA5F90();
extern int fn_82FA60D8();
extern int fn_82FA61A0();
extern unsigned int stack0x00000000;


int fn_82FA6830(unsigned __int64 param_1,int param_2,unsigned int param_3)

{
  unsigned int uVar1;
  int iVar2;
  unsigned int *puVar3;
  int iVar4;
  int iVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  unsigned int uVar8;
  int iVar9;
  unsigned __int64 uVar10;
  __int64 lVar11;
  unsigned __int64 uVar12;
  
  uVar8 = 0;
  if (((param_3 != 0) && (param_3 < 0x40000000)) && (uVar8 = param_3 + 3 & 0xfffffffc, uVar8 < 0xd))
  {
    uVar8 = 0xc;
  }
  iVar9 = 0;
  uVar10 = 0xffffffffffffffff;
  iVar4 = fn_82FA61A0(param_1);
  lVar11 = ZEXT48(&stack0x00000000) - 100;
  do {
    if ((iVar4 == 0) || (iVar9 != 0)) break;
    uVar7 = iVar4 + 8;
    uVar1 = *(unsigned int *)(iVar4 + 4);
    uVar6 = (uVar7 + param_2) - 1 & ~(param_2 - 1U);
    if ((uVar1 & 0xfffffffc) + uVar7 < uVar6 + uVar8) {
LAB_82fa694c:
      lVar11 = lVar11 + 4;
      *(unsigned int *)lVar11 = uVar7;
      iVar2 = (uVar1 & 0xfffffffc) + iVar4;
      uVar10 = uVar10 + 1;
      *(unsigned int *)(iVar2 + 8) = *(unsigned int *)(iVar2 + 8) & 0xfffffffd;
      *(unsigned int *)(iVar4 + 4) = *(unsigned int *)(iVar4 + 4) & 0xfffffffe;
      iVar4 = fn_82FA61A0(param_1,uVar8);
    }
    else {
      if (uVar6 != uVar7) {
        if ((int)(uVar6 - uVar7) < 0x10) goto LAB_82fa694c;
        iVar4 = fn_82FA60D8(param_1,iVar4);
      }
      uVar1 = *(unsigned int *)(iVar4 + 4) & 0xfffffffc;
      if ((uVar1 != uVar8) && ((int)(uVar1 - uVar8) < 0x11)) {
        uVar8 = *(unsigned int *)(iVar4 + 4) & 0xfffffffc;
      }
      fn_82FA5F90(param_1,iVar4,uVar8);
      iVar9 = iVar4 + 8;
      iVar2 = (*(unsigned int *)(iVar4 + 4) & 0xfffffffc) + iVar4;
      *(unsigned int *)(iVar2 + 8) = *(unsigned int *)(iVar2 + 8) & 0xfffffffd;
      *(unsigned int *)(iVar4 + 4) = *(unsigned int *)(iVar4 + 4) & 0xfffffffe;
    }
  } while ((int)uVar10 < 8);
  if (-1 < (int)uVar10) {
    lVar11 = (uVar10 & 0x3fffffff) * 4 + (ZEXT48(&stack0x00000000) - 0x60);
    do {
      uVar8 = *(unsigned int *)lVar11;
      if ((unsigned __int64)uVar8 != 0) {
        uVar12 = (unsigned __int64)uVar8 - 8;
        uVar1 = *(unsigned int *)(uVar8 - 4) & 0xfffffffc;
        puVar3 = (unsigned int *)uVar12;
        *(unsigned int **)((int)puVar3 + uVar1 + 4) = puVar3;
        *(unsigned int *)((int)puVar3 + uVar1 + 8) = *(unsigned int *)((int)puVar3 + uVar1 + 8) | 2;
        uVar1 = *(unsigned int *)(uVar8 - 4);
        *(unsigned int *)(uVar8 - 4) = uVar1 | 1;
        if ((uVar1 & 2) != 0) {
          uVar12 = (unsigned __int64)*puVar3;
          fn_82FA5CA0(param_1);
          iVar4 = (int)uVar12;
          uVar8 = (*(unsigned int *)(uVar8 - 4) & 0xfffffffc) + *(int *)(iVar4 + 4) + 4;
          *(unsigned int *)(iVar4 + 4) = uVar8;
          *(int *)((uVar8 & 0xfffffffc) + iVar4 + 4) = iVar4;
        }
        iVar4 = (int)uVar12;
        iVar2 = (*(unsigned int *)(iVar4 + 4) & 0xfffffffc) + iVar4;
        iVar5 = iVar2 + 4;
        if ((*(unsigned int *)(iVar2 + 8) & 1) != 0) {
          fn_82FA5CA0(param_1);
          uVar8 = (*(unsigned int *)(iVar5 + 4) & 0xfffffffc) + *(int *)(iVar4 + 4) + 4;
          *(unsigned int *)(iVar4 + 4) = uVar8;
          *(int *)((uVar8 & 0xfffffffc) + iVar4 + 4) = iVar4;
        }
        fn_82FA5D50(param_1,uVar12);
      }
      uVar10 = uVar10 - 1;
      lVar11 = lVar11 + -4;
    } while (-1 < (__int64)uVar10);
  }
  return iVar9;
}

