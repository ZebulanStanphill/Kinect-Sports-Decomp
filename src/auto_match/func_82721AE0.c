extern unsigned int *auStack_50;
extern int fn_826824B0();
extern int fn_82695598();
extern int fn_82696330();
extern int fn_82696B20();
extern int fn_826B1688();
extern int fn_826C35B8();
extern int fn_826C3768();
extern int fn_82720700();
extern int fn_827215B0();
extern unsigned int iStack_5c;
extern unsigned int iStack_60;
extern unsigned int lbl_82010454;
extern unsigned int lbl_820105A8;
extern unsigned int lbl_82010600;
extern unsigned int lbl_82010644;


unsigned int * fn_82721AE0(unsigned int *param_1,unsigned __int64 param_2,int param_3)

{
  unsigned __int64 uVar1;
  struct { int first; int second; } stack_pair_60;

  unsigned char bStack_58;
  unsigned char auStack_50 [16];
  
  fn_826C35B8(param_1,param_2,0xffffffff827521e8);
  param_1[0xd] = &lbl_82010454;
  param_1[0xd] = &lbl_82010644;
  *param_1 = &lbl_82010600;
  param_1[4] = &lbl_820105A8;
  param_1[0xe] = 0;
  *(unsigned char *)(param_1 + 0x14) = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *(unsigned int **)(param_3 + 0x9dc) = param_1 + 0xd;
  fn_82720700(param_2,param_1 + 4);
  fn_827215B0(param_1,param_2,0);
  fn_826B1688(param_1 + 4,param_2,0xffffffff8201043c,7);
  uVar1 = fn_82695598(auStack_50,param_2,0xffffffff827210c8);
  uVar1 = fn_82696B20(&stack_pair_60.first,uVar1,0);
  fn_826C3768(param_1 + 0x12,uVar1);
  if (((bStack_58 & 2) == 0) && (stack_pair_60.first != 0)) {
    fn_826824B0();
  }
  stack_pair_60.first = 0;
  if (((bStack_58 & 1) == 0) && (stack_pair_60.second != 0)) {
    fn_826824B0();
  }
  stack_pair_60.second = 0;
  fn_82696330(auStack_50);
  param_1[0x11] = 0;
  return param_1;
}

