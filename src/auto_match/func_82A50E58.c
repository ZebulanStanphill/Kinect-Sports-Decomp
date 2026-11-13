extern int fn_82A50350();
extern int fn_82A509A8();


unsigned __int64
fn_82A50E58(int param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4,
             unsigned __int64 param_5,unsigned __int64 param_6)

{
  int iVar1;
  
  (**(int (***)())(*(int *)(*(int *)(param_1 + 0x30) + 0x2c) + 8))(*(int *)(param_1 + 0x30) + 0x2c);
  iVar1 = fn_82A50350(param_1,param_2,param_4,param_5,param_6);
  fn_82A509A8(*(unsigned int *)(iVar1 + 8),param_3);
  (**(int (***)())(*(int *)(*(int *)(param_1 + 0x30) + 0x2c) + 0x14))(*(int *)(param_1 + 0x30) + 0x2c);
  return 0;
}

