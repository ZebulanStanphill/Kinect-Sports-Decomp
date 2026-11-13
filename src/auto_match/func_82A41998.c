#define true 1
extern int fn_82A40B38();
extern int fn_82A47B28();


void fn_82A41998(int param_1,int *param_2)

{
  unsigned int *puVar1;
  unsigned int uVar2;
  int *piVar3;
  
  uVar2 = (**(int (***)())(*param_2 + 0x54))(param_2);
  if (uVar2 < 3) {
    for (puVar1 = *(unsigned int **)(param_1 + 0x188);
        (puVar1 != (unsigned int *)0x0 && ((int *)*puVar1 != param_2 + -1));
        puVar1 = (unsigned int *)puVar1[1]) {
    }
    fn_82A40B38(param_1 + 0xbc,puVar1);
    if ((param_2[0xe] & 0x10U) != 0) {
      for (puVar1 = *(unsigned int **)(param_1 + 0x200);
          (puVar1 != (unsigned int *)0x0 && ((int *)*puVar1 != param_2 + -1));
          puVar1 = (unsigned int *)puVar1[1]) {
      }
      fn_82A47B28(param_1 + 0x1e8,puVar1);
    }
  }
  else if (uVar2 == 3) {
    piVar3 = *(int **)(param_1 + 0x1d8);
    if (piVar3 != (int *)0x0) {
      while( true ) {
        for (puVar1 = *(unsigned int **)(*piVar3 + 0x1c);
            (puVar1 != (unsigned int *)0x0 && ((int *)*puVar1 != param_2 + -1));
            puVar1 = (unsigned int *)puVar1[1]) {
        }
        if (puVar1 != (unsigned int *)0x0) break;
        if (piVar3 == (int *)0x0) {
          return;
        }
        piVar3 = (int *)piVar3[1];
        if (piVar3 == (int *)0x0) {
          return;
        }
      }
      fn_82A47B28(*piVar3 + 4,puVar1);
    }
  }
  else if (uVar2 < 5) {
    for (puVar1 = *(unsigned int **)(param_1 + 0x1b0);
        (puVar1 != (unsigned int *)0x0 && ((int *)*puVar1 != param_2 + -1));
        puVar1 = (unsigned int *)puVar1[1]) {
    }
    fn_82A47B28(param_1 + 0x198,puVar1);
    *(unsigned int *)(param_1 + 0x244) = 0;
  }
  return;
}

