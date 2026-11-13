extern int fn_8251F720();


void fn_822A86B0(int param_1)

{
  unsigned int *puVar1;
  unsigned __int64 uVar2;
  unsigned int uVar3;
  
  puVar1 = *(unsigned int **)(param_1 + 0x10);
  if (puVar1 != (unsigned int *)0x0) {
    uVar2 = (unsigned __int64)*puVar1;
    if (uVar2 != (uVar2 - 1) + (unsigned __int64)(uVar2 == 0)) {
      fn_8251F720(puVar1,0);
    }
  }
  puVar1 = (unsigned int *)(*(int *)(param_1 + 0x10) + 4);
  if (puVar1 != (unsigned int *)0x0) {
    uVar2 = (unsigned __int64)*puVar1;
    if (uVar2 != (uVar2 - 1) + (unsigned __int64)(uVar2 == 0)) {
      fn_8251F720(puVar1,0);
    }
  }
  uVar3 = 8;
  do {
    puVar1 = (unsigned int *)(uVar3 + *(int *)(param_1 + 0x10));
    if (puVar1 != (unsigned int *)0x0) {
      uVar2 = (unsigned __int64)*puVar1;
      if (uVar2 != (uVar2 - 1) + (unsigned __int64)(uVar2 == 0)) {
        fn_8251F720(puVar1,0);
      }
    }
    uVar3 = uVar3 + 4;
  } while (uVar3 < 0x24);
  uVar3 = 0x24;
  do {
    puVar1 = (unsigned int *)(uVar3 + *(int *)(param_1 + 0x10));
    if (puVar1 != (unsigned int *)0x0) {
      uVar2 = (unsigned __int64)*puVar1;
      if (uVar2 != (uVar2 - 1) + (unsigned __int64)(uVar2 == 0)) {
        fn_8251F720(puVar1,0);
      }
    }
    uVar3 = uVar3 + 4;
  } while (uVar3 < 0x2c);
  uVar3 = 0x40;
  do {
    puVar1 = (unsigned int *)(uVar3 + *(int *)(param_1 + 0x10) + -0x14);
    if (puVar1 != (unsigned int *)0x0) {
      uVar2 = (unsigned __int64)*puVar1;
      if (uVar2 != (uVar2 - 1) + (unsigned __int64)(uVar2 == 0)) {
        fn_8251F720(puVar1,0);
      }
    }
    puVar1 = (unsigned int *)(uVar3 + *(int *)(param_1 + 0x10));
    if (puVar1 != (unsigned int *)0x0) {
      uVar2 = (unsigned __int64)*puVar1;
      if (uVar2 != (uVar2 - 1) + (unsigned __int64)(uVar2 == 0)) {
        fn_8251F720(puVar1,0);
      }
    }
    uVar3 = uVar3 + 4;
  } while (uVar3 < 0x54);
  return;
}

