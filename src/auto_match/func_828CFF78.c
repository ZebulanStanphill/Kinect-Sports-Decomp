extern int fn_825089A0();
extern int fn_828AC428();
extern int fn_828CFA88();
extern unsigned int lbl_82026788;


unsigned int * fn_828CFF78(unsigned int *param_1)

{
  int *piVar2;
  unsigned __int64 uVar1;
  
  *(unsigned char *)(param_1 + 2) = 1;
  *param_1 = &lbl_82026788;
  param_1[0x15] = 1;
  fn_828AC428(param_1 + 0x18);
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  piVar2 = (int *)fn_825089A0();
  uVar1 = (*(unsigned __int64 (**)(int *))(*piVar2 + 0xc))(piVar2);
  *(unsigned __int64 *)(param_1 + 0x24) = uVar1;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  fn_828CFA88(param_1);
  return param_1;
}

