extern int fn_82BE5240();
extern void *fn_82BE56B0(unsigned);
extern int fn_82BEB750();
extern int fn_82BF1E60(iVar1);
extern int fn_82BF29A0();
extern unsigned int lbl_820E9974;
extern void *(*lbl_831751D0)(unsigned int);


unsigned int * fn_82BE74D0(unsigned int *param_1,unsigned int param_2)

{
  void *iVar1;
  
  fn_82BEB750(param_1,"CNetworkManager");
  *(unsigned short *)(param_1 + 10) = 0;
  *param_1 = &lbl_820E9974;
  *(unsigned short *)((int)param_1 + 0x2a) = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(unsigned __int64 *)(param_1 + 0xe) = 0;
  *(unsigned __int64 *)(param_1 + 0x10) = 0;
  *(unsigned __int64 *)(param_1 + 0x12) = 0;
  *(unsigned __int64 *)(param_1 + 0x14) = 0;
  *(unsigned __int64 *)(param_1 + 0x16) = 0;
  *(unsigned __int64 *)(param_1 + 0x18) = 0;
  *(unsigned __int64 *)(param_1 + 0x1a) = 60000;
  *(unsigned __int64 *)(param_1 + 0x1c) = 0;
  *(unsigned __int64 *)(param_1 + 0x1e) = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x24] = 0;
  *(unsigned short *)(param_1 + 0x25) = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  fn_82BF29A0(param_1 + 0x28);
  iVar1 = fn_82BE56B0(0x44);
  if (iVar1 != 0) {
    iVar1 = fn_82BF1E60(iVar1);
  } else {
    iVar1 = 0;
  }
  param_1[0x23] = iVar1;
  if (iVar1 == 0) {
    fn_82BE5240(param_1,0x65,"Could not create transaction object");
  }
  iVar1 = lbl_831751D0(param_2);
  param_1[0xc] = iVar1;
  if (iVar1 == 0) {
    fn_82BE5240(param_1,0x65,"Could not allocate receive buffer");
  }
  return param_1;
}

