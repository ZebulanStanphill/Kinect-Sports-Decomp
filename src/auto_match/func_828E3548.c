extern int fn_828E2EC0();


int * fn_828E3548(int *param_1,unsigned __int64 param_2,unsigned int *param_3)

{
  int iVar1;
  char cVar2;
  unsigned int *puVar3;
  unsigned __int64 uVar4;
  
  *param_1 = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  cVar2 = fn_828E2EC0();
  if (cVar2 != '\0') {
    iVar1 = *param_1;
    if ((param_2 & 0xffffffff) != 0) {
      puVar3 = (unsigned int *)(iVar1 + -4);
      uVar4 = param_2;
      do {
        puVar3 = puVar3 + 1;
        *puVar3 = *param_3;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
    }
    param_1[1] = (int)((param_2 & 0xffffffff) << 2) + iVar1;
  }
  return param_1;
}

