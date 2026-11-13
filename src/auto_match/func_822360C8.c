extern int fn_82237848();
extern int fn_825089A0();


void fn_822360C8(unsigned int *param_1)

{
  int iVar1;
  int *piVar2;
  
  if (*param_1 != 0) {
    fn_82237848(*param_1,param_1[1],param_1 + 3);
    iVar1 = *param_1;
    piVar2 = (int *)fn_825089A0();
    (*(int (**)())(*piVar2 + 0x28))(piVar2,iVar1);
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}

