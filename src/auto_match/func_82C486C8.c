extern int fn_82C75408();


void fn_82C486C8(int param_1)

{
  int iVar1;
  unsigned __int64 uVar2;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  __int64 lVar5;
  
  lVar5 = 1;
  do {
    if (0x32 < *(int *)((*(int *)(param_1 + 0x3cfc) + 0x1420) * 4 + param_1)) {
      uVar4 = *(unsigned __int64 *)((*(int *)(param_1 + 0x3cfc) + 0xa0b) * 8 + param_1);
      uVar3 = (unsigned __int64)*(int *)((*(int *)(param_1 + 0x3cfc) + 0x1420) * 4 + param_1);
      uVar2 = (__int64)uVar4 / (__int64)uVar3;
      uVar4 = uVar3 & ~((uVar4 << 1 | uVar4 >> 0x3f) - 1);
      trapDoubleWordImmediate(6,uVar3,0);
      iVar1 = *(int *)(param_1 + 0xbc) * *(int *)(param_1 + 0xb4) >> 8;
      trapDoubleWordImmediate(5,uVar4,0xffff);
      if ((0x31 < (int)uVar2) && (0x31 < iVar1)) {
        trapWord(6,(__int64)iVar1,0);
        trapWord(5,(__int64)iVar1 &
                   ~(((uVar2 & 0x7fffffff) << 1 | (uVar2 & 0xffffffff) >> 0x1f) - 1),0xffff);
        fn_82C75408(lVar5 + 6,0x77,(int)uVar2 / iVar1,uVar4);
      }
    }
    lVar5 = lVar5 + 1;
  } while ((int)lVar5 < 5);
  return;
}

