extern int fn_82381BC0();


void fn_822AB000(int *param_1,unsigned int param_2)

{
  unsigned int *puVar1;
  int iVar2;
  unsigned int uVar3;
  unsigned int * apuStack_40;
  
  uVar3 = 0;
  param_1[4] = param_2;
  if (param_1[1] - *param_1 >> 2 != 0) {
    iVar2 = 0;
    do {
      puVar1 = *(unsigned int **)(*(int *)(iVar2 + *param_1) + 4);
      apuStack_40 = (unsigned int *)*puVar1;
      if (uVar3 == param_2) {
        while (apuStack_40 != puVar1) {
          *(unsigned int *)(*(int *)(apuStack_40[4] + 0x14) + 0x1d0) = 0;
          fn_82381BC0(&apuStack_40);
        }
      }
      else {
        while (apuStack_40 != puVar1) {
          *(unsigned int *)(*(int *)(apuStack_40[4] + 0x14) + 0x1d0) = 1;
          fn_82381BC0(&apuStack_40);
        }
      }
      uVar3 = uVar3 + 1;
      iVar2 = iVar2 + 4;
    } while (uVar3 < (unsigned int)(param_1[1] - *param_1 >> 2));
  }
  return;
}

