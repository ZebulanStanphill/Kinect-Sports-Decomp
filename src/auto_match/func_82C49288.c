extern unsigned int iStack_cc;
extern unsigned int uStack_8c;
extern unsigned int uStack_90;
extern unsigned int uStack_94;
extern unsigned int uStack_98;
extern unsigned int uStack_9c;
extern unsigned int uStack_a0;
extern unsigned int uStack_a4;
extern unsigned int uStack_a8;
extern unsigned int uStack_ac;
extern unsigned int uStack_b0;
extern unsigned int uStack_b4;
extern unsigned int uStack_b8;
extern unsigned int uStack_bc;
extern unsigned int uStack_c0;
extern unsigned int uStack_c4;
extern unsigned int uStack_c8;
extern unsigned int uStack_d0;


unsigned __int64 fn_82C49288(int param_1,unsigned int param_2)

{
  unsigned __int64 uVar1;
  struct { unsigned int first; int second; } stack_pair_d0;

  unsigned int uStack_c8;
  unsigned int uStack_c4;
  unsigned int uStack_c0;
  unsigned int uStack_bc;
  unsigned int uStack_b8;
  unsigned int uStack_b4;
  unsigned int uStack_b0;
  unsigned int uStack_ac;
  unsigned int uStack_a8;
  unsigned int uStack_a4;
  unsigned int uStack_a0;
  unsigned int uStack_9c;
  unsigned int uStack_98;
  unsigned int uStack_94;
  unsigned int uStack_90;
  unsigned int uStack_8c;
  
  if (param_1 == 0) {
    uVar1 = 0xfffffffffffffffd;
  }
  else if (*(int *)(*(int *)(param_1 + 0x6070) + 0x2c8) == 0) {
    if ((*(unsigned int *)(param_1 + 0x5614) & 4) == 0) {
      uVar1 = -(unsigned __int64)(*(int *)(param_1 + 0x10) == 0) & 0xfffffffffffffff9;
    }
    else {
      stack_pair_d0.first = *(unsigned int *)(param_1 + 0x5610);
      uStack_c0 = *(unsigned int *)(param_1 + 0x5598);
      uStack_b4 = *(unsigned int *)(param_1 + 0x9c);
      uStack_b8 = (unsigned int)(*(int *)(param_1 + 0x5580) != 0);
      uStack_b0 = *(unsigned int *)(param_1 + 0xa0);
      uStack_ac = *(unsigned int *)(param_1 + 0x5634);
      uStack_c8 = *(unsigned int *)(param_1 + 0xb148);
      uStack_a8 = *(unsigned int *)(param_1 + 0x5638);
      uStack_a4 = *(unsigned int *)(param_1 + 0x563c);
      uStack_a0 = *(unsigned int *)(param_1 + 0x5640);
      uStack_98 = *(unsigned int *)(param_1 + 0x559c);
      uStack_94 = *(unsigned int *)(param_1 + 0x55a4);
      uStack_90 = *(unsigned int *)(param_1 + 0x55a0);
      uStack_8c = *(unsigned int *)(param_1 + 0x55a8);
      uStack_c4 = 2;
      uStack_9c = (unsigned int)
                  ((-(unsigned __int64)*(unsigned int *)(param_1 + 0x39f4) &
                    ~(unsigned __int64)*(unsigned int *)(param_1 + 0x39f4) & 0xffffffff) >> 0x1f);
      stack_pair_d0.second = param_1;
      uStack_bc = param_2;
      uVar1 = (**(int (***)())(*(int *)(param_1 + 0x6070) + 0xc0))(&stack_pair_d0.first);
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

