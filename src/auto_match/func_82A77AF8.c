void fn_82A77AF8(int *param_1,unsigned param_2)

{
  int *piVar1;
  int iVar2;
  
  if ((param_2 & 0x10) != 0) {
    *(unsigned __int64 *)(param_1+0x32) = 0;
    param_1[0x30] = 0;
    if ((int *)param_1[2] != (int *)0x0) {
      (*(int (**)())(*(int *)param_1[2] + 0x1c))((void *)param_1[2]);
    }
    if ((int *)param_1[0x3f] != (int *)0x0) {
      (*(int (**)())(*(int *)param_1[0x3f] + 0x1c))((void *)param_1[0x3f]);
    }
    piVar1 = (int *)param_1[0x2e];
    if (piVar1 != (int *)0x0) {
      param_1[0x2f] = piVar1[4] + *piVar1;
      if ((unsigned int)(*piVar1 + piVar1[4]) < (unsigned int)(piVar1[7] + piVar1[6] + *piVar1)) {
        iVar2 = piVar1[8];
      }
      else {
        iVar2 = 0;
      }
      param_1[0x30] = iVar2;
    }
  }
  if ((param_2 & 0x20) != 0) {
    iVar2 = (*(int (**)())(*param_1 + 8))(param_1);
    if (iVar2 != 0) {
      param_1[0x1f] = 1;
    }
  }
  else { param_1[0x1f]=0; param_1[0x1d]=1; }
  piVar1 = (int *)param_1[0x42];
  if (piVar1 != (int *)0x0) {
    (*(int (**)())(*piVar1 + 4))(piVar1,param_2);
  }
  return;
}

