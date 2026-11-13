int fn_82E09CF0(int param_1,unsigned int param_2,unsigned __int64 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  unsigned __int64 uVar5;
  
  iVar2 = (int)param_3;
  if (param_2 == 0) {
    return 0;
  }
  trapWord(6,param_3,0);
  uVar5 = (__int64)((int)param_2 >> 2) + (unsigned __int64)((int)param_2 < 0 && (param_2 & 3) != 0);
  iVar3 = ((int)uVar5 / iVar2) * iVar2;
  trapWord(5,param_3 & ~(((uVar5 & 0x7fffffff) << 1 | (uVar5 & 0xffffffff) >> 0x1f) - 1),0xffff);
  piVar4 = (int *)(iVar3 * 4 + param_1);
  iVar1 = *piVar4;
  while (iVar1 < 0) {
    piVar4 = piVar4 + -iVar2;
    iVar3 = iVar3 - iVar2;
    iVar1 = *piVar4;
  }
  return iVar3 + iVar2;
}

