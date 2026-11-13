extern int fn_822315A0();
extern int fn_8243DD58();
extern int fn_825120A0();
extern int fn_8265CA20();
extern unsigned int lbl_821C097C;


void fn_82511B78(unsigned int *param_1)

{
  int *piVar1;
  unsigned int *puVar2;
  unsigned int *puVar3;
  int *piVar4;
  
  piVar1 = (int *)param_1[9];
  piVar4 = (int *)*piVar1;
  *piVar1 = (int)piVar1;
  *(unsigned int *)(param_1[9] + 4) = param_1[9];
  param_1[10] = 0;
  if (piVar4 != (int *)param_1[9]) {
    do {
      piVar1 = (int *)*piVar4;
      if (piVar4[3] != 0) {
        fn_822315A0();
      }
      fn_8265CA20(piVar4);
      piVar4 = piVar1;
    } while (piVar1 != (int *)param_1[9]);
  }
  fn_8265CA20(param_1[9]);
  puVar3 = *(unsigned int **)(param_1[6] + 4);
  while (*(char *)((int)puVar3 + 0x15) == '\0') {
    fn_8243DD58(param_1 + 5,puVar3[2]);
    puVar2 = (unsigned int *)*puVar3;
    fn_8265CA20(puVar3);
    puVar3 = puVar2;
  }
  *(unsigned int *)(param_1[6] + 4) = param_1[6];
  *(unsigned int *)param_1[6] = param_1[6];
  *(unsigned int *)(param_1[6] + 8) = param_1[6];
  param_1[7] = 0;
  fn_8265CA20(param_1[6]);
  fn_825120A0(param_1 + 1);
  fn_8265CA20(param_1[2]);
  *param_1 = &lbl_821C097C;
  return;
}

