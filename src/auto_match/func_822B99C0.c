extern int fn_822B98F8();
extern int fn_82554860();
extern unsigned int lbl_821917C0;
extern unsigned int lbl_821CA460;
extern unsigned int ltcg_pool_0_0f;
extern unsigned int uStack_2c;
extern unsigned int uStack_30;
extern unsigned int uStack_34;
extern unsigned int uStack_38;
extern unsigned int uStack_3c;
extern unsigned int uStack_40;
extern unsigned int uStack_44;
extern unsigned int uStack_48;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;
extern unsigned int uStack_54;
extern unsigned int uStack_58;
extern unsigned int uStack_5c;
extern unsigned int uStack_60;


void fn_822B99C0(int param_1,unsigned __int64 param_2)

{
  struct { unsigned int first; unsigned int second; } stack_pair_60;

  unsigned int uStack_58;
  unsigned int uStack_54;
  unsigned int uStack_50;
  unsigned int uStack_4c;
  unsigned int uStack_48;
  unsigned int uStack_44;
  unsigned int uStack_40;
  unsigned int uStack_3c;
  unsigned int uStack_38;
  unsigned int uStack_34;
  unsigned int uStack_30;
  unsigned int uStack_2c;
  
  if (*(int *)(param_1 + 0x28) == 0) {
    if (*(int *)(param_1 + 0x1c) == 0) {
      fn_822B98F8();
    }
    if ((*(int *)(param_1 + 0x1c) != 0) && (*(int *)(param_1 + 0x20) != 0)) {
      stack_pair_60.second = lbl_821CA460;
      uStack_58 = ltcg_pool_0_0f;
      stack_pair_60.first = 0x4d697850;
      uStack_4c = ltcg_pool_0_0f;
      uStack_54 = 0x20;
      uStack_50 = lbl_821917C0;
      uStack_48 = 0;
      uStack_40 = lbl_821917C0;
      uStack_44 = 0x40;
      uStack_3c = 0;
      uStack_30 = 0;
      uStack_2c = 0;
      uStack_38 = 0;
      uStack_34 = 0;
      fn_82554860(*(int *)(param_1 + 0x20),0,param_2,&stack_pair_60.first);
      *(unsigned int *)(param_1 + 0x24) = 1;
    }
  }
  return;
}

