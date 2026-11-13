unsigned __int64 fn_82A84F08(int param_1,unsigned int param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  unsigned int *puVar4;
  
  if (param_2 != 0) {
    if (param_3 == (int *)0x0) {
      return 0xffffffff80070057;
    }
    if (10 < param_2) {
      param_2 = 0xb;
    }
    *(int *)(param_1 + 0x2fc) = *param_3;
    if (1 < param_2) {
      iVar2 = param_2 - 1;
      piVar3 = (int *)(param_1 + 0x2fc);
      do {
        iVar1 = *piVar3;
        param_3 = param_3 + 1;
        piVar3 = piVar3 + 1;
        *piVar3 = iVar1 + *param_3;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    if (param_2 < 0xb) {
      iVar2 = 0xb - param_2;
      puVar4 = (unsigned int *)((param_2 + 0xbe) * 4 + param_1);
      do {
        puVar4 = puVar4 + 1;
        *puVar4 = *(unsigned int *)((param_2 + 0xbe) * 4 + param_1);
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
  }
  return 0;
}

