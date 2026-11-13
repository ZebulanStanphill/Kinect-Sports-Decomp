extern int fn_8273D528();


int * fn_82680978(int *param_1,int *param_2)

{
  unsigned int uVar1;
  int iVar2;
  
  fn_8273D528(param_1,param_2[1]);
  uVar1 = 0;
  if (param_1[1] != 0) {
    iVar2 = 0;
    do {
      uVar1 = uVar1 + 1;
      *(unsigned int *)(iVar2 + *param_1) = *(unsigned int *)(*param_2 + iVar2);
      iVar2 = iVar2 + 4;
    } while (uVar1 < (unsigned int)param_1[1]);
  }
  return param_1;
}

