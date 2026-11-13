unsigned int *
fn_82B6B008(__int64 param_1,int param_2,int (**param_3)(),int (**param_4)(),unsigned __int64 param_5)

{
  int iVar1;
  unsigned int uVar2;
  unsigned int *puVar3;
  int *piVar4;
  
  uVar2 = param_2 + 7U & 0xfffffff8;
  puVar3 = (unsigned int *)(*param_3)(param_5,0x20);
  if (puVar3 != (unsigned int *)0x0) {
    *puVar3 = param_3;
    iVar1 = (int)param_1;
    puVar3[1] = param_4;
    puVar3[2] = (int)param_5;
    puVar3[4] = uVar2;
    piVar4 = (int *)(*param_3)(param_5,(__int64)(iVar1 + 1) * (__int64)(int)uVar2);
    if (piVar4 == (int *)0x0) {
      (*param_4)(param_5,puVar3);
      puVar3 = (unsigned int *)0x0;
    }
    else {
      puVar3[3] = piVar4;
      puVar3[5] = iVar1;
      puVar3[6] = iVar1;
      puVar3[7] = 0;
      if (0 < iVar1) {
        do {
          *piVar4 = (int)((int)piVar4 + uVar2);
          param_1 = param_1 + -1;
          piVar4 = (int *)((int)piVar4 + uVar2);
        } while (param_1 != 0);
      }
    }
  }
  return puVar3;
}

