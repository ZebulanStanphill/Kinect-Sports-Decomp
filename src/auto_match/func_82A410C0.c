extern unsigned int *auStack_30;
extern int fn_82A40238();
extern int fn_82A40830();


unsigned int fn_82A410C0(int param_1,unsigned __int64 param_2)

{
  unsigned int auStack_30;
  
  (**(int (***)())(*(int *)(param_1 + 0x2c) + 8))(param_1 + 0x2c);
  fn_82A40830(param_1,param_2);
  auStack_30 =
       (**(int (***)())(**(int **)(param_1 + 0xb0) + 0x48))(*(int **)(param_1 + 0xb0),param_2);
  (**(int (***)())(*(int *)(param_1 + 0x2c) + 0x14))(param_1 + 0x2c);
  fn_82A40238(&auStack_30);
  return auStack_30;
}

