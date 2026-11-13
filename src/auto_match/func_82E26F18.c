void fn_82E26F18(unsigned __int64 param_1,unsigned int *param_2,unsigned int *param_3)

{
  unsigned __int64 uVar1;
  unsigned __int64 uVar2;
  unsigned __int64 uVar3;
  int iVar4;
  __int64 *plVar5;
  
  uVar3 = 0;
  if (param_1 == 0) {
    *param_2 = 0;
    *param_3 = 0;
    return;
  }
  iVar4 = 0;
  plVar5 = (__int64 *)0x83187450;
  while ((param_1 < *plVar5 - 0x1eU || (*plVar5 + 0x1eU < param_1))) {
    uVar3 = uVar3 + 0x18;
    iVar4 = iVar4 + 1;
    plVar5 = plVar5 + 3;
    if ((uVar3 & 0xffffffff) == 0xc0) {
      if (99999999 < param_1) {
        *param_2 = 1;
        *param_3 = 10;
        return;
      }
      param_1 = param_1 & 0xffffffff;
      uVar2 = param_1;
      uVar3 = 10000000;
      if (10000000 < param_1) {
        uVar2 = 10000000;
        uVar3 = param_1;
      }
      while (uVar1 = uVar2, uVar1 != 0) {
        trapWord(6,uVar1,0);
        uVar2 = uVar3 - (__int64)(int)((uVar3 & 0xffffffff) / (uVar1 & 0xffffffff)) *
                        (__int64)(int)uVar1;
        uVar3 = uVar1;
      }
      trapWord(6,uVar3,0);
      trapWord(6,uVar3,0);
      *param_2 = (int)(10000000 / (uVar3 & 0xffffffff));
      *param_3 = (int)(param_1 / (uVar3 & 0xffffffff));
      return;
    }
  }
  *param_2 = *(unsigned int *)(iVar4 * 0x18 + -0x7ce78ba8);
  *param_3 = *(unsigned int *)(iVar4 * 0x18 + -0x7ce78ba4);
  return;
}

