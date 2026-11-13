extern int fn_82E59298();
extern unsigned int lbl_82162BB0;
extern unsigned int lbl_82162BB8;


unsigned int * fn_82F37DA8(unsigned int *param_1)

{
  int *piVar1;
  
  *param_1 = &lbl_82162BB8;
  param_1[3] = 0;
  param_1[4] = 0;
  *(unsigned short *)(param_1 + 6) = 0;
  *(unsigned char *)((int)param_1 + 0x1a) = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[2] = &lbl_82162BB0;
  param_1[0x1d] = 0;
  *(unsigned __int64 *)(param_1 + 0x1e) = 0;
  *(unsigned __int64 *)(param_1 + 0x20) = 0;
  param_1[0x22] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  *(unsigned short *)(param_1 + 0x27) = 0;
  *(unsigned char *)((int)param_1 + 0x9e) = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x23] = &lbl_82162BB0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  fn_82E59298(0x18,param_1 + 0x22);
  piVar1 = (int *)param_1[0x22];
  if (piVar1 != (int *)0x0) {
    (**(int (***)())(*piVar1 + 0xc))(piVar1,0);
  }
  return param_1;
}

