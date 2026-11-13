extern int fn_82A40238();
extern int fn_82A40368();
extern int fn_82A40750();
extern int fn_82A42808();
extern int fn_82A428C8();
extern int fn_82A48BD8();


int fn_82A41BE0(int param_1,unsigned __int64 param_2,unsigned int param_3)

{
  int *piVar1;
  unsigned int *puVar2;
  int aiStack_30;
  
  piVar1 = (int *)(param_1 + 0x2c);
  (**(int (***)())(*(int *)(param_1 + 0x2c) + 8))(piVar1);
  puVar2 = (unsigned int *)(param_1 + 0xb0);
  *(unsigned int *)(param_1 + 0x214) = param_3;
  aiStack_30 = 0;
  if (*(int *)(param_1 + 0xb0) == 0) {
    aiStack_30 = fn_82A42808(puVar2);
  }
  if (-1 < aiStack_30) {
    aiStack_30 = (**(int (***)())(*(int *)*puVar2 + 0xc))((int *)*puVar2,2,0x177,param_1 + 4);
    if (-1 < aiStack_30) {
      aiStack_30 = fn_82A428C8(param_1 + 0x250,*puVar2);
      if (-1 < aiStack_30) {
        aiStack_30 = fn_82A40750(param_1,0,param_1 + 0xb8);
        if (-1 < aiStack_30) {
          aiStack_30 = fn_82A40750(param_1,0,param_1 + 0xb4);
          if (-1 < aiStack_30) {
            aiStack_30 = fn_82A48BD8(param_1 + 0x3ea0,8);
            if (-1 < aiStack_30) {
              *(unsigned int *)(param_1 + 0xa0) = 1;
              *(unsigned int *)(param_1 + 0xa4) = 1;
              goto LAB_82a41ce4;
            }
          }
        }
      }
    }
  }
  fn_82A40368(param_1);
LAB_82a41ce4:
  (**(int (***)())(*piVar1 + 0x14))(piVar1);
  fn_82A40238(&aiStack_30);
  return aiStack_30;
}

