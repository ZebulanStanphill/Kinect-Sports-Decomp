extern unsigned int fStack_14;
extern unsigned int fStack_18;
extern unsigned int fStack_1c;
extern unsigned int fStack_20;
extern int fn_826311B8();
extern unsigned int lbl_82005328;
extern unsigned int uStack_24;
extern unsigned int uStack_28;
extern unsigned int uStack_2c;
extern unsigned int uStack_30;


void fn_82677570(int param_1,unsigned int *param_2,unsigned __int64 param_3)

{
  unsigned __int64 uVar1;
  struct { unsigned int first; unsigned int second; } stack_pair_30;

  unsigned int uStack_28;
  unsigned int uStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  uVar1 = (param_3 & 0xffffffff) >> 2;
  fStack_20 = (float)param_2[1] * lbl_82005328;
  fStack_1c = (float)param_2[3] * lbl_82005328;
  fStack_18 = (float)param_2[5] * lbl_82005328;
  stack_pair_30.first = *param_2;
  fStack_14 = (float)param_2[7] * lbl_82005328;
  stack_pair_30.second = param_2[2];
  uStack_28 = param_2[4];
  uStack_24 = param_2[6];
  fn_826311B8(*(unsigned int *)(param_1 + 0xd8),param_3,&stack_pair_30.first,2,
               (unsigned __int64)
               (-0x8000000000000000 >> (((param_3 + 1 & 0xffffffff) >> 2) - uVar1 & 0x7f)) >>
               (uVar1 & 0x7f));
  return;
}

