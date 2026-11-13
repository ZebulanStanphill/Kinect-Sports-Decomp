extern int fn_82A4F4E0();
extern int fn_82A776F0();


void fn_82A77C10(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  if (param_1[0x2e] != 0) {
    iVar2 = (**(int (***)())(*param_1 + 8))();
    if ((iVar2 == 0) || (param_1[0x1f] != 0)) {
      piVar1 = (int *)param_1[0x42];
      if (piVar1 != (int *)0x0) {
        (**(int (***)())(*piVar1 + 0x28))
                  (piVar1,*(unsigned int *)(param_1[0x2e] + 4),
                   *(unsigned int *)(param_1[0x2e] + 8) & 0x10000000);
      }
      if (*(int *)(param_1[0x2e] + 0x24) == 0) {
        fn_82A4F4E0();
      }
      else {
        *(unsigned int *)(param_1[0x2e] + 0x24) = 0;
      }
      param_1[0x2e] = 0;
      param_1[0x2f] = 0;
      param_1[0x30] = 0;
    }
    else {
      *(unsigned int *)(param_1[0x2e] + 8) = *(unsigned int *)(param_1[0x2e] + 8) | 0x80;
    }
  }
  if (param_1[0x2c] != 0) {
    do {
      iVar2 = fn_82A776F0(param_1 + 0x21);
      piVar1 = (int *)param_1[0x42];
      if (piVar1 != (int *)0x0) {
        (**(int (***)())(*piVar1 + 0x28))
                  (piVar1,*(unsigned int *)(iVar2 + 4),*(unsigned int *)(iVar2 + 8) & 0x10000000);
      }
      if (*(int *)(iVar2 + 0x24) == 0) {
        fn_82A4F4E0(iVar2);
      }
      else {
        *(unsigned int *)(iVar2 + 0x24) = 0;
      }
    } while (param_1[0x2c] != 0);
  }
  if (param_1[0x2e] == 0) {
    if ((int *)param_1[0x42] != (int *)0x0) {
      (**(int (***)())(*(int *)param_1[0x42] + 0xc))();
    }
  }
  return;
}

