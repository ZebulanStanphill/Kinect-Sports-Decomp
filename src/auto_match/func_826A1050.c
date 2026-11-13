extern unsigned int *auStack_20;
extern int fn_8267C4C8();
extern int fn_8269D3D0();
extern int fn_826BF530();
extern unsigned int lbl_82006B48;
extern unsigned int lbl_82006B9C;
extern unsigned int lbl_82006BA8;


unsigned int *
fn_826A1050(unsigned int *param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned int *param_4)

{
  unsigned int auStack_20 [2];
  
  auStack_20[0] = *param_4;
  fn_8269D3D0(param_1,param_3,auStack_20);
  fn_826BF530(param_1 + 0x1a);
  *param_1 = &lbl_82006BA8;
  param_1[3] = &lbl_82006B9C;
  param_1[0x1a] = &lbl_82006B48;
  if ((param_2 & 0xffffffff) != 0) {
    fn_8267C4C8(param_2);
  }
  param_1[0x1f] = (int)param_2;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  *(unsigned short *)(param_1 + 0x24) = 0;
  *(unsigned char *)((int)param_1 + 0x93) = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  *(unsigned char *)((int)param_1 + 0x66) = *(unsigned char *)((int)param_1 + 0x66) | 0x80;
  param_1[0x1d] = 0;
  param_1[0x1c] = 0;
  param_1[0x1e] = 0;
  *(unsigned char *)((int)param_1 + 0x92) = 0;
  param_1[0x23] = 0x5011;
  return param_1;
}

