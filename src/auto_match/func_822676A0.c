#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
extern int fn_82267EB0();
extern int fn_8227E330();
extern unsigned int iStack0000001c;
extern float lbl_821917B0;
extern unsigned int lbl_82192734;
extern float lbl_82193B00;
extern unsigned int ltcg_pool_0_0f;
extern unsigned int stack0x0000001c;
extern unsigned int uStack_70;
extern unsigned int uStack_78;
extern unsigned int uStack_7c;
extern unsigned int uStack_80;


void fn_822676A0(int param_1,int param_2,int param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iStack0000001c;
  struct { unsigned int first; unsigned int second; } stack_pair_80;

  unsigned __int64 uStack_78;
  unsigned __int64 uStack_70;
  
  fVar3 = lbl_821917B0;
  fVar1 = *(float *)(param_2 + 0xf8) * lbl_82193B00;
  fVar2 = *(float *)(param_2 + 0xf8) * lbl_821917B0;
  *(float *)(param_2 + 0xe8) = lbl_82193B00;
  *(float *)(param_2 + 0xec) = fVar3;
  *(float *)(param_2 + 0xf0) = fVar1;
  *(float *)(param_2 + 0xf4) = fVar2;
  iStack0000001c = param_2;
  fn_82267EB0(param_1,&stack0x0000001c);
  uStack_78 = CONCAT44(lbl_82192734,lbl_82192734);
  stack_pair_80.first = *(unsigned int *)(param_3 + 0x40);
  stack_pair_80.second = *(unsigned int *)(param_3 + 0x44);
  uStack_70 = CONCAT44(ltcg_pool_0_0f,ltcg_pool_0_0f);
  fn_8227E330(*(unsigned int *)(param_1 + 0x18),&stack_pair_80.first,param_1 + 0x24);
  *(unsigned int *)(param_1 + 0x54) = 1;
  return;
}

