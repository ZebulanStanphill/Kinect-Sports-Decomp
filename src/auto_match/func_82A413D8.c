extern int fn_82A40238();
extern int fn_82A40CF0();
extern int memcpy();


int fn_82A413D8(int param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  int *piVar1;
  int aiStack_30;
  
  piVar1 = (int *)(param_1 + 0x2c);
  (**(int (***)())(*(int *)(param_1 + 0x2c) + 8))(piVar1);
  aiStack_30 = fn_82A40CF0(param_1);
  if (-1 < aiStack_30) {
    if ((unsigned __int64)*(unsigned int *)(param_1 + 0x98) <= (param_2 & 0xffffffff)) {
      aiStack_30 = -0x7769ffff;
    }
    if (-1 < aiStack_30) {
      memcpy(param_3,param_2 * 0x42c + (unsigned __int64)*(unsigned int *)(param_1 + 0x9c),0x42c);
    }
  }
  (**(int (***)())(*piVar1 + 0x14))(piVar1);
  fn_82A40238(&aiStack_30);
  return aiStack_30;
}

