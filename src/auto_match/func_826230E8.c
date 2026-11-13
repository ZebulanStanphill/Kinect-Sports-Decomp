extern int fn_82623490();
extern int fn_82647308();
extern int fn_8265C940();
extern int fn_82BA02A8();
extern unsigned int lbl_82623518;


int * fn_826230E8(int *param_1,int param_2)

{
  unsigned int *puVar1;
  
  param_1[3] = param_2;
  *param_1 = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  fn_82647308(0,2,0,0,0,param_1);
  puVar1 = (unsigned int *)fn_8265C940(0xb8,0x64800000);
  if (puVar1 == (unsigned int *)0x0) {
    puVar1 = (unsigned int *)0x0;
  }
  else {
    puVar1[0x29] = param_1;
    *puVar1 = 0x500009;
    puVar1[0x2b] = fn_82623490;
    puVar1[1] = 1;
    puVar1[5] = 0xffff0000;
    puVar1[0x2c] = &lbl_82623518;
    puVar1[0x2d] = fn_82BA02A8;
    puVar1[0x2a] = 0x2000;
  }
  param_1[1] = (int)puVar1;
  enforceInOrderExecutionIO();
  *(unsigned int *)(*param_1 + 0x2a88) = 0;
  return param_1;
}

