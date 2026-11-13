extern int fn_82A50118();
extern int fn_82A50350();


void fn_82A50558(int param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  int iVar1;
  
  (*(int (**)())(*(int *)(*(int *)(param_1 + 0x30) + 0x2c) + 8))(*(int *)(param_1 + 0x30) + 0x2c);
  iVar1 = fn_82A50350(param_1,param_2);
  fn_82A50118(*(unsigned int *)(iVar1 + 8),param_3);
  (*(int (**)())(*(int *)(*(int *)(param_1 + 0x30) + 0x2c) + 0x14))(*(int *)(param_1 + 0x30) + 0x2c);
  return;
}

