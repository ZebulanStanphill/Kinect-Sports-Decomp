extern int fn_82BC3628();
extern unsigned int lbl_820E3D90;


void fn_82BC3680(unsigned __int64 param_1,unsigned __int64 param_2)

{
  unsigned int *puVar1;
  
  puVar1 = (unsigned int *)fn_82BC3628(param_1,0x31,param_2);
  puVar1[5] = 1;
  *puVar1 = &lbl_820E3D90;
  puVar1[4] = 1;
  return;
}

