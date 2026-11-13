extern int fn_83018DD8();
extern unsigned int lbl_832642FC;


void fn_83034E98(int param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4,
                  unsigned __int64 param_5,unsigned __int64 param_6,unsigned __int64 param_7)

{
  *(unsigned int *)(param_1 + 0x1c) = 1 << ((unsigned int)param_3 & 0x3f) | *(unsigned int *)(param_1 + 0x1c);
  fn_83018DD8(lbl_832642FC,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return;
}

