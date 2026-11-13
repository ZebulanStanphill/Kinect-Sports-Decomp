extern int fn_82BD75E8();


void fn_82BD3FC0(int param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = fn_82BD75E8();
  if (-1 < iVar2) {
    if (*(int *)(param_1 + 0x24) == 0) {
      for (piVar1 = *(int **)(param_1 + 0x34); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[1]) {
        *(unsigned int *)*piVar1 = 0;
        *(unsigned int *)(*piVar1 + 4) = *(unsigned int *)(*piVar1 + 0xc);
      }
    }
    if (*(int *)(param_1 + 0x24) == 1) {
      piVar1 = *(int **)(param_1 + 0x3c);
      if (((piVar1 != (int *)0x0) &&
          (*(unsigned int *)(param_1 + 0x44) = 1, *(int *)(param_1 + 0x40) != 0)) &&
         (iVar2 = (**(int (***)())(*piVar1 + 0x50))(piVar1,0,0), -1 < iVar2)) {
        *(unsigned int *)(param_1 + 0x40) = 0;
      }
    }
  }
  return;
}

