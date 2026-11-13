extern int fn_826CBE10();


void fn_826CD260(int *param_1,unsigned int param_2)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int *puVar3;
  
  uVar1 = param_1[1];
  fn_826CBE10(param_1,param_1,param_2);
  if (param_2 > uVar1) {
    puVar3 = (unsigned int *)(uVar1 * 8 + *param_1);
    param_2 = param_2 - uVar1;
    uVar2 = 0;
    if (param_2 != 0) {
      do {
        if (puVar3 != (unsigned int *)0x0) {
          *puVar3 = 0;
          puVar3[1] = 0;
        }
        uVar2 = uVar2 + 1;
        puVar3 = puVar3 + 2;
      } while (uVar2 < param_2);
    }
  }
  return;
}

