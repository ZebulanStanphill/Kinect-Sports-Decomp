extern int fn_823CDF08();
extern int fn_823DBB58();


void fn_823CDEB0(int *param_1)

{
  int iVar1;
  
  fn_823CDF08();
  iVar1 = (**(int (***)())(*param_1 + 200))(param_1);
  if (iVar1 == 0) {
    fn_823DBB58(param_1[300]);
  }
  return;
}

