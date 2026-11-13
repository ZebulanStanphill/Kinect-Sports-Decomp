extern int fn_82BE64E0();
extern int fn_82BE6638();


void fn_82BE6BD8(int *param_1)

{
  int iVar1;
  
  fn_82BE64E0(param_1,0x1000);
  iVar1 = (*(int (**)())(*param_1 + 4))(param_1);
  if (iVar1 == 0) {
    fn_82BE6638(param_1,5);
  }
  else {
    fn_82BE64E0(param_1,0x4000);
    if ((param_1[6] & 0xf00000U) == 0) {
      (*(int (**)())(*(int *)param_1[0xb] + 4))((int *)param_1[0xb],param_1);
    }
  }
  return;
}

