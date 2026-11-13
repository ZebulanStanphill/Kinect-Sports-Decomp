void fn_829BB008(int param_1)

{
  unsigned int uVar1;
  int iVar2;
  unsigned int uVar3;
  int iVar4;
  int *piVar5;
  unsigned __int64 uVar6;
  __int64 lVar7;
  unsigned __int64 uVar8;
  __int64 lVar9;
  __int64 lVar10;
  
  iVar4 = 0;
  iVar2 = *(int *)(param_1 + 0x1ac);
  if (0 < *(int *)(param_1 + 0x24)) {
    piVar5 = (int *)(*(int *)(param_1 + 0xdc) + 0xc);
    do {
      uVar8 = (__int64)*piVar5 * (__int64)piVar5[6];
      uVar3 = *(unsigned int *)(param_1 + 0x140);
      trapWord(6,uVar8,0);
      uVar6 = (unsigned __int64)(unsigned int)piVar5[8] -
              (__int64)(int)((unsigned __int64)(unsigned int)piVar5[8] / (uVar8 & 0xffffffff)) *
              (__int64)(int)uVar8;
      uVar1 = (int)uVar8 / (int)uVar3;
      trapWord(6,(unsigned __int64)uVar3,0);
      trapWord(5,(unsigned __int64)uVar3 &
                 ~(((uVar8 & 0x7fffffff) << 1 | (uVar8 & 0xffffffff) >> 0x1f) - 1),0xffff);
      if (uVar6 == 0) {
        uVar6 = uVar8;
      }
      if (iVar4 == 0) {
        uVar8 = uVar6 - 1;
        trapWord(6,(__int64)(int)uVar1,0);
        *(int *)(iVar2 + 0x48) = (int)uVar8 / (int)uVar1 + 1;
        trapWord(5,(__int64)(int)uVar1 &
                   ~(((uVar8 & 0x7fffffff) << 1 | (uVar8 & 0xffffffff) >> 0x1f) - 1),0xffff);
      }
      lVar9 = ((unsigned __int64)uVar1 & 0x7fffffff) << 1;
      if (0 < (int)lVar9) {
        lVar10 = (uVar6 & 0x3fffffff) * 4 +
                 (unsigned __int64)
                 *(unsigned int *)(*(int *)((*(int *)(iVar2 + 0x40) + 0xe) * 4 + iVar2) + iVar4 * 4);
        lVar7 = lVar10 + -4;
        do {
          lVar7 = lVar7 + 4;
          *(unsigned int *)lVar7 = *(unsigned int *)((int)lVar10 + -4);
          lVar9 = lVar9 + -1;
        } while (lVar9 != 0);
      }
      iVar4 = iVar4 + 1;
      piVar5 = piVar5 + 0x15;
    } while (iVar4 < *(int *)(param_1 + 0x24));
  }
  return;
}

