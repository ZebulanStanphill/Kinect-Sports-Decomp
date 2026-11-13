extern int fn_8268CC00();
extern unsigned int lbl_82005708;
extern unsigned int lbl_82005710;


unsigned int * fn_82681930(unsigned int *param_1)

{
  unsigned __int64 uVar1;
  unsigned __int64 uVar2;
  
  fn_8268CC00(param_1 + 8);
  param_1[1] = 0;
  uVar2 = lbl_82005710;
  *param_1 = 0;
  uVar1 = lbl_82005708;
  *(unsigned __int64 *)(param_1 + 6) = uVar2;
  *(unsigned __int64 *)(param_1 + 4) = uVar1;
  *(unsigned __int64 *)(param_1 + 2) = uVar1;
  return param_1;
}

