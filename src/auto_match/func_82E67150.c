unsigned __int64 fn_82E67150(int param_1)

{
  unsigned int uVar1;
  unsigned int uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  __int64 lVar6;
  unsigned __int64 uVar7;
  
  uVar1 = *(unsigned int *)(param_1 + 0x10834);
  uVar2 = *(unsigned int *)(param_1 + 0x10824);
  iVar3 = *(int *)(param_1 + 0x107f8);
  iVar4 = *(int *)(param_1 + 0x107fc);
  iVar5 = *(int *)(param_1 + 0x10800);
  *(int *)(param_1 + 0x10810) = iVar3;
  *(int *)(param_1 + 0x10814) = iVar4;
  *(int *)(param_1 + 0x10870) = iVar4;
  *(unsigned int *)(param_1 + 0x10804) = (int)uVar2 / (int)uVar1 + iVar3 + uVar2;
  *(unsigned int *)(param_1 + 0x10808) = iVar4 + uVar1 * 4 + 4;
  *(unsigned int *)(param_1 + 0x1080c) = iVar5 + uVar1 * 4 + 4;
  *(int *)(param_1 + 0x10818) = iVar5;
  *(unsigned int *)(param_1 + 0x10884) = 0;
  *(unsigned int *)(param_1 + 0x10888) = 0;
  *(unsigned __int64 *)(param_1 + 0x10890) = 0;
  uVar7 = (((unsigned __int64)uVar2 & 0x7fffffff) << 1 | (unsigned __int64)(uVar2 >> 0x1f)) - 1;
  *(unsigned int *)(param_1 + 0x1083c) = 0;
  trapWord(6,(unsigned __int64)uVar1,0);
  *(unsigned int *)(param_1 + 0x10840) = 0;
  *(int *)(param_1 + 0x1086c) = iVar3;
  *(int *)(param_1 + 0x10874) = iVar5;
  trapWord(5,(unsigned __int64)uVar1 & ~uVar7,0xffff);
  *(int *)(param_1 + 0x1081c) = iVar3;
  lVar6 = (unsigned __int64)*(unsigned int *)(param_1 + 0x10860) * (unsigned __int64)*(unsigned int *)(param_1 + 0x10848);
  *(unsigned int *)(param_1 + 0x108e8) = 0;
  *(__int64 *)(param_1 + 0x10858) = lVar6;
  *(__int64 *)(param_1 + 0x10850) = lVar6;
  *(unsigned int *)(param_1 + 0x108c0) = 0;
  return uVar7;
}

