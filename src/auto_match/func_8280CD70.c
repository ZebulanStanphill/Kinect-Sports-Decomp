extern unsigned int fStack_24;
extern unsigned int fStack_38;
extern unsigned int fStack_4c;
extern unsigned int fStack_60;
extern int fn_8280BBD8();
extern int fn_8280CB70();
extern int fn_828105C8();
extern int fn_8281E1F0();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_821AAD20;
extern unsigned int uStack_28;
extern unsigned int uStack_2c;
extern unsigned int uStack_30;
extern unsigned int uStack_34;
extern unsigned int uStack_3c;
extern unsigned int uStack_40;
extern unsigned int uStack_44;
extern unsigned int uStack_48;
extern unsigned int uStack_50;
extern unsigned int uStack_54;
extern unsigned int uStack_58;
extern unsigned int uStack_5c;


void fn_8280CD70(int param_1,unsigned __int64 param_2,float *param_3,unsigned __int64 param_4)

{
  struct { float first; unsigned int second; } stack_pair_60;

  unsigned int uStack_58;
  unsigned int uStack_54;
  unsigned int uStack_50;
  float fStack_4c;
  unsigned int uStack_48;
  unsigned int uStack_44;
  unsigned int uStack_40;
  unsigned int uStack_3c;
  float fStack_38;
  unsigned int uStack_34;
  unsigned int uStack_30;
  unsigned int uStack_2c;
  unsigned int uStack_28;
  float fStack_24;
  
  fn_828105C8((double)*(float *)(param_1 + 0x30),(double)*(float *)(param_1 + 0x34),
               (double)*(float *)(param_1 + 0x38),param_2);
  fn_8280BBD8(param_1,param_3);
  uStack_50 = lbl_821AAD20;
  uStack_40 = lbl_821AAD20;
  uStack_30 = lbl_821AAD20;
  stack_pair_60.second = lbl_821AAD20;
  uStack_3c = lbl_821AAD20;
  uStack_2c = lbl_821AAD20;
  uStack_58 = lbl_821AAD20;
  uStack_48 = lbl_821AAD20;
  uStack_28 = lbl_821AAD20;
  uStack_54 = lbl_821AAD20;
  uStack_44 = lbl_821AAD20;
  uStack_34 = lbl_821AAD20;
  fStack_24 = lbl_82002AE0;
  fStack_4c = lbl_82002AE0 / param_3[1];
  stack_pair_60.first = lbl_82002AE0 / *param_3;
  fStack_38 = lbl_82002AE0 / param_3[2];
  fn_8280CB70(param_1,&stack_pair_60.first,&stack_pair_60.first);
  fn_8281E1F0(param_4,&stack_pair_60.first);
  return;
}

