void fn_82788E48(unsigned int *param_1,unsigned int param_2)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  
  if (*param_1 != 0) {
    uVar5 = param_2 + 1;
    if (uVar5 < *param_1) {
      do {
        uVar1 = uVar5 >> 4;
        uVar3 = uVar5 & 0x3f;
        uVar2 = param_2 >> 4;
        uVar4 = param_2 & 0x3f;
        uVar5 = uVar5 + 1;
        param_2 = param_2 + 1;
        *(unsigned int *)(*(int *)((uVar2 & 0xffffffc) + param_1[3]) + uVar4 * 4) =
             *(unsigned int *)(*(int *)((uVar1 & 0xffffffc) + param_1[3]) + uVar3 * 4);
      } while (uVar5 < *param_1);
    }
    *param_1 = *param_1 - 1;
    return;
  }
  return;
}

