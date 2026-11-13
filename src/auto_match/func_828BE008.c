extern int fn_828BDCC8();


unsigned int * fn_828BE008(unsigned int *param_1,int param_2,int *param_3)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *(int *)(param_2 + 0x70);
  fn_828BDCC8(param_2 + 0x70,iVar1);
  piVar2 = (int *)param_3[4];
  *param_1 = *(unsigned int *)(iVar1 + 4);
  if (piVar2 != (int *)0x0) {
    (*(int (**)())(*piVar2 + 0xc))(piVar2,piVar2 != param_3);
    param_3[4] = 0;
  }
  return param_1;
}

