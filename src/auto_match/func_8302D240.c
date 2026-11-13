extern int fn_8303EA10();
extern unsigned int lbl_8217C940;
extern unsigned int lbl_8217C948;
extern unsigned int lbl_821AAD20;


unsigned int * fn_8302D240(unsigned int *param_1,unsigned __int64 param_2,char param_3)

{
  unsigned int uVar1;
  
  fn_8303EA10();
  param_1[0x22] = 0;
  *param_1 = &lbl_8217C948;
  param_1[7] = &lbl_8217C940;
  uVar1 = lbl_821AAD20;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x44] = uVar1;
  param_1[0x45] = uVar1;
  param_1[0x46] = uVar1;
  *(unsigned char *)((int)param_1 + 0x122) = 0;
  *(unsigned short *)(param_1 + 0x47) = 0;
  *(unsigned short *)(param_1 + 0x48) = 1;
  *(unsigned char *)((int)param_1 + 0x11f) = param_3 << 5 | 9;
  *(unsigned char *)((int)param_1 + 0x11e) = *(unsigned char *)((int)param_1 + 0x11e) & 3;
  return param_1;
}

