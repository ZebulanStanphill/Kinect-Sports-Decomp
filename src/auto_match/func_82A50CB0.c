extern unsigned int *auStack_40;
extern int fn_82A40238();
extern int fn_82A4FC50();


unsigned int
fn_82A50CB0(int param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4,
             unsigned __int64 param_5)

{
  unsigned int auStack_40;
  
  (*(int (**)())(*(int *)(*(int *)(param_1 + 0x30) + 0x2c) + 8))(*(int *)(param_1 + 0x30) + 0x2c);
  auStack_40 = fn_82A4FC50(*(unsigned int *)(param_1 + 0x34),param_2,param_3,param_4,param_5);
  fn_82A40238(&auStack_40);
  (*(int (**)())(*(int *)(*(int *)(param_1 + 0x30) + 0x2c) + 0x14))(*(int *)(param_1 + 0x30) + 0x2c);
  return auStack_40;
}

