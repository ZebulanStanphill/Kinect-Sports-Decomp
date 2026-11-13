typedef unsigned char bool;
extern int fn_822883D0();
extern int fn_8252D240();
extern int fn_8252D370();
extern int fn_8252D6E0();


bool fn_82287590(unsigned int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = *(int **)(param_1[param_2 * 0x10 + 0x1b0] + 0x8c0);
  iVar2 = (**(int (***)())(*piVar1 + 0x14))(piVar1);
  if (iVar2 != 0) {
    fn_8252D240(param_1[param_2 * 0x10 + 0x1b0],param_1 + 0x57,0);
    fn_8252D370(param_1[param_2 * 0x10 + 0x1b0]);
    fn_8252D6E0(param_1[param_2 * 0x10 + 0x1b0],*param_1);
    param_1[param_2 * 0x10 + 0x1af] = 0;
    fn_822883D0(param_1,param_2,param_1[param_2 * 0x10 + 0x1b0]);
  }
  else {
    (**(int (***)())(*piVar1 + 0xc))(piVar1);
  }
  return iVar2 != 0;
}

