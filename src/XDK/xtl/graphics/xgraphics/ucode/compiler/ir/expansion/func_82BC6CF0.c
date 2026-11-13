extern int fn_82BC5ED8();


void fn_82BC6CF0(unsigned int *param_1)

{
  int iVar1;
  
  for (iVar1 = param_1[5]; *(int *)(iVar1 + 8) != 0; iVar1 = *(int *)(iVar1 + 8)) {
    fn_82BC5ED8(iVar1,*param_1);
  }
  return;
}

