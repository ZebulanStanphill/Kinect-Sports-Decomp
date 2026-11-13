extern int fn_822315A0();
extern int fn_8265CA20();
extern unsigned int lbl_821CA460;
extern unsigned int lbl_8329618C;


void fn_82490BE8(unsigned int *param_1)

{
  unsigned int *puVar1;
  int *piVar2;
  unsigned int uVar3;
  int iVar4;
  unsigned int *puVar5;
  
  puVar1 = (unsigned int *)param_1[9];
  for (puVar5 = (unsigned int *)param_1[8]; puVar5 != puVar1; puVar5 = puVar5 + 1) {
    (**(int (***)())(*(int *)*puVar5 + 0x14))((int *)*puVar5,(unsigned __int64)*param_1 - 1);
  }
  piVar2 = (int *)param_1[7];
  if (piVar2 != (int *)0x0) {
    (**(int (***)())(*piVar2 + 0x14))(piVar2,param_1);
  }
  uVar3 = lbl_821CA460;
  param_1[0x15] = lbl_821CA460;
  if (lbl_8329618C == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(lbl_8329618C + 4);
  }
  *(unsigned int *)(iVar4 + 0x820) = uVar3;
  uVar3 = param_1[0x17];
  if (uVar3 != 0) {
    if (*(int *)(uVar3 + 4) != 0) {
      fn_822315A0();
    }
    fn_8265CA20(uVar3);
  }
  param_1[0x17] = 0;
  return;
}

