extern int fn_82C4E5E8();
extern int fn_82C565B0();
extern int fn_82CAD120();
extern int fn_82F691F0();


void fn_82C8AE08(int param_1)

{
  unsigned __int64 *puVar1;
  unsigned int uVar2;
  int iVar3;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
  __int64 lVar6;
  unsigned __int64 uVar7;
  
  puVar1 = *(unsigned __int64 **)(param_1 + 0x54);
  uVar7 = 1;
  lVar6 = 0;
  uVar4 = (unsigned __int64)*(unsigned int *)(puVar1 + 1);
  uVar5 = uVar4 + 0x10;
  if ((uVar5 & 0xffffffff) == 0) {
    do {
      if ((uVar5 & 0xffffffff) == 0) break;
      uVar7 = uVar7 - uVar5;
      *(int *)(puVar1 + 1) = (int)(uVar4 - uVar5);
      lVar6 = (unsigned __int64)(unsigned int)((int)(*puVar1 >> (0x40 - uVar5 & 0x7f)) << ((unsigned int)uVar7 & 0x3f)) +
              lVar6;
      *puVar1 = *puVar1 << (uVar5 & 0x7f);
      if ((__int64)(uVar4 - uVar5) < 0) {
        fn_82C4E5E8(puVar1);
      }
      uVar4 = (unsigned __int64)*(unsigned int *)(puVar1 + 1);
      uVar5 = uVar4 + 0x10;
    } while ((uVar5 & 0xffffffff) < (uVar7 & 0xffffffff));
  }
  *(int *)(puVar1 + 1) = (int)(uVar4 - uVar7);
  uVar5 = (*puVar1 >> (0x40 - uVar7 & 0x7f) & 0xffffffff) + lVar6;
  *puVar1 = *puVar1 << (uVar7 & 0x7f);
  if ((__int64)(uVar4 - uVar7) < 0) {
    fn_82C4E5E8(puVar1);
  }
  *(int *)(param_1 + 0x7ac) = (int)((uVar5 & 0xffffffff) << 6) - (int)uVar5;
  if (*(int *)(param_1 + 0x3cb0) < 6) {
    uVar2 = *(unsigned int *)(param_1 + 0xf8);
    *(unsigned int *)(param_1 + 0x13c) = uVar2 << 1;
    *(unsigned int *)(param_1 + 0x144) = ~uVar2 & 1;
    *(unsigned int *)(param_1 + 0x140) = uVar2 - (~uVar2 & 1);
  }
  else {
    fn_82C565B0(param_1,*(unsigned int *)(param_1 + 0xf8));
  }
  fn_82CAD120(*(unsigned int *)(param_1 + 0x7b8),*(unsigned int *)(param_1 + 0xf8),1);
  iVar3 = *(int *)(param_1 + 0x13c) >> 1;
  *(int *)(param_1 + 0x130) = iVar3;
  *(int *)(param_1 + 300) = iVar3;
  if (4 < iVar3) {
    *(int *)(param_1 + 0x130) = (iVar3 + 3 >> 3) + iVar3;
  }
  uVar2 = *(unsigned int *)(param_1 + 0x130);
  uVar5 = (__int64)(*(int *)(param_1 + 0x13c) >> 2) + 0x10000;
  uVar4 = (__int64)((int)uVar2 >> 1) + 0x10000;
  trapWord(6,(__int64)iVar3,0);
  trapWord(5,(__int64)iVar3 & ~(((uVar5 & 0x7fffffff) << 1 | (uVar5 & 0xffffffff) >> 0x1f) - 1),
           0xffff);
  trapWord(6,(unsigned __int64)uVar2,0);
  trapWord(5,(unsigned __int64)uVar2 & ~(((uVar4 & 0x7fffffff) << 1 | (uVar4 & 0xffffffff) >> 0x1f) - 1),
           0xffff);
                    /* WARNING: Subroutine does not return */
  fn_82F691F0(*(unsigned int *)(param_1 + 0x6ec),0,0x100);
}

