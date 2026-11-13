extern int fn_8223B688();
extern int fn_822C70F0();
extern unsigned int lbl_821AE848;


unsigned int *
fn_822FB850(unsigned int *param_1,unsigned __int64 param_2,unsigned __int64 param_3,int param_4,
             unsigned __int64 param_5,unsigned int param_6,int param_7)

{
  unsigned int uVar1;
  unsigned int *puVar2;
  
  fn_822C70F0();
  param_1[0x15] = param_4;
  param_1[0x16] = param_4 + 0x24;
  *param_1 = &lbl_821AE848;
  fn_8223B688(param_1 + 0x17,param_5);
  param_1[0x1e] = param_6;
  puVar2 = param_1 + 0x20;
  if (*(int *)(param_7 + 0x10) == 0) {
    param_1[0x24] = 0;
  }
  else {
    if (*(int *)(param_7 + 0x10) != param_7) {
      puVar2 = (unsigned int *)0x0;
    }
    uVar1 = (**(int (***)())**(unsigned int **)(param_7 + 0x10))(*(unsigned int **)(param_7 + 0x10),puVar2);
    param_1[0x24] = uVar1;
  }
  param_1[0x14] = (unsigned int)LZCOUNT(param_6) >> 5;
  return param_1;
}

