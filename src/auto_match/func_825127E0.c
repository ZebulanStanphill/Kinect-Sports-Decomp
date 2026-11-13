extern int fn_828EBA58();
extern unsigned int lbl_82192734;
extern unsigned int lbl_821C2434;


unsigned int * fn_825127E0(unsigned int *param_1)

{
  unsigned int uVar1;
  
  fn_828EBA58();
  param_1[0x38] = 0;
  param_1[0x48] = 0xffffffff;
  uVar1 = lbl_82192734;
  param_1[0x49] = 0xffffffff;
  param_1[0x4b] = 0xffffffff;
  param_1[0x41] = uVar1;
  param_1[0x42] = uVar1;
  *param_1 = &lbl_821C2434;
  param_1[0x3a] = 0xffffffff;
  *(unsigned char *)(param_1 + 0x3b) = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  *(unsigned char *)(param_1 + 0x4a) = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  return param_1;
}

