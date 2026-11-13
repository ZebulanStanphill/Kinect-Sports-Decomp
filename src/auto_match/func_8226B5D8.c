extern int fn_8265CA20();
extern int fn_8265CAA0();
extern unsigned int lbl_821A7E94;
extern unsigned int lbl_821A7E9C;


void fn_8226B5D8(unsigned int *param_1)

{
  unsigned int *puVar1;
  unsigned int uVar2;
  int iVar3;
  int *piVar4;
  
  *param_1 = &lbl_821A7E9C;
  piVar4 = param_1 + 3;
  uVar2 = 0;
  if ((int)(param_1[4] - param_1[3]) >> 2 != 0) {
    iVar3 = 0;
    do {
      puVar1 = *(unsigned int **)(iVar3 + *piVar4);
      if (puVar1 != (unsigned int *)0x0) {
        (**(int (***)())*puVar1)(puVar1,1);
      }
      uVar2 = uVar2 + 1;
      iVar3 = iVar3 + 4;
    } while (uVar2 < (unsigned int)(param_1[4] - *piVar4 >> 2));
  }
  fn_8265CAA0(param_1[0x10]);
  fn_8265CAA0(param_1[0x16]);
  fn_8265CAA0(param_1[0x15]);
  if (*piVar4 != 0) {
    fn_8265CA20();
  }
  *piVar4 = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *param_1 = &lbl_821A7E94;
  return;
}

