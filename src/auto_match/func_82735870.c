extern int fn_826829A0();
extern int fn_826C09B0();
extern int fn_826FDED0();
extern unsigned int lbl_82010C6C;
extern unsigned int lbl_82011808;
extern unsigned int lbl_8201185C;


unsigned int * fn_82735870(unsigned int *param_1,int *param_2,unsigned __int64 param_3)

{
  fn_826C09B0();
  *param_1 = &lbl_8201185C;
  param_1[4] = &lbl_82011808;
  fn_826FDED0(param_1 + 0xc,*(unsigned int *)(*param_2 + 0x288));
  param_1[0x19] = 0;
  param_1[0x17] = &lbl_82010C6C;
  param_1[0x18] = 1;
  *(unsigned short *)(param_1 + 0x1a) = 0;
  *(unsigned short *)((int)param_1 + 0x6a) = 0;
  *(unsigned short *)(param_1 + 0x1b) = 0;
  *(unsigned short *)((int)param_1 + 0x6e) = 0;
  *(unsigned short *)(param_1 + 0x1c) = 0;
  *(unsigned short *)((int)param_1 + 0x72) = 0;
  fn_826829A0(param_1 + 4,param_2,param_3);
  return param_1;
}

