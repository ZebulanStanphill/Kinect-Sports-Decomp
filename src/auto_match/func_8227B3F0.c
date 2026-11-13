extern unsigned int *auStack_50;
extern unsigned int *auStack_60;
extern int fn_82536590();
extern int fn_828647D8();
extern int fn_82864898();
extern int fn_82864988();
extern unsigned int lbl_821917C0;
extern unsigned int ltcg_pool_0_0f;


void fn_8227B3F0(double param_1,int param_2)

{
  float fVar1;
  unsigned __int64 uVar2;
  unsigned int auStack_60;
  unsigned char auStack_50 [40];
  
  if (*(int *)(param_2 + 0xa34) == 0) {
LAB_8227b46c:
    if (*(int *)(param_2 + 0xa38) != 0) {
      fn_82864988(auStack_50,0xffffffff821a83f8);
      auStack_60 = fn_828647D8();
      fn_82864898(auStack_50);
      fn_82536590(&auStack_60,0);
      *(unsigned int *)(param_2 + 0xa38) = 0;
    }
  }
  else if (*(int *)(param_2 + 0xa38) == 0) {
    fn_82864988(auStack_50,0xffffffff821a841c);
    auStack_60 = fn_828647D8();
    fn_82864898(auStack_50);
    fn_82536590(&auStack_60,0);
    *(unsigned int *)(param_2 + 0xa38) = 1;
  }
  else if (*(int *)(param_2 + 0xa34) == 0) goto LAB_8227b46c;
  if ((double)ltcg_pool_0_0f < (double)*(float *)(param_2 + 0xa30)) {
    fVar1 = (float)((double)*(float *)(param_2 + 0xa30) - param_1);
  }
  else {
    if (*(int *)(param_2 + 0xa3c) == 0) {
      if (*(int *)(param_2 + 0xa40) == 0) goto LAB_8227b524;
      uVar2 = 0xffffffff821a8464;
    }
    else {
      uVar2 = 0xffffffff821a8440;
    }
    fn_82864988(auStack_50,uVar2);
    auStack_60 = fn_828647D8();
    fn_82864898(auStack_50);
    fn_82536590(&auStack_60,0);
    fVar1 = lbl_821917C0;
  }
  *(float *)(param_2 + 0xa30) = fVar1;
LAB_8227b524:
  *(unsigned int *)(param_2 + 0xa3c) = 0;
  *(unsigned int *)(param_2 + 0xa40) = 0;
  return;
}

