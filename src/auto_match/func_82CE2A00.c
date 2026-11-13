extern int fn_82A1E7D8();
extern int fn_82CE3440();


unsigned __int64
fn_82CE2A00(unsigned int *param_1, unsigned int param_2, unsigned int param_3, unsigned int param_4, unsigned int param_5, unsigned int param_6, unsigned int param_7, unsigned int param_8, unsigned int in_stack_00000054, unsigned int in_stack_0000005c, unsigned int in_stack_00000064, unsigned int in_stack_0000006c, unsigned int in_stack_00000074, unsigned int in_stack_0000007c, unsigned int in_stack_00000084, unsigned int in_stack_0000008c)

{
  int iVar1;








  
  if (((param_5 & 0x40) != 0) && (iVar1 = KeGetCurrentProcessType(), iVar1 == 1)) {
    param_5 = param_5 | 0x10;
  }
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  param_1[3] = param_5;
  param_1[4] = param_6;
  param_1[5] = param_7;
  param_1[6] = in_stack_0000005c;
  param_1[7] = 0;
  param_1[8] = in_stack_00000064;
  param_1[9] = param_8;
  param_1[10] = in_stack_00000054;
  param_1[0xb] = in_stack_0000007c;
  param_1[0xc] = in_stack_00000084;
  fn_82CE3440(param_1 + 0xd,in_stack_0000006c,in_stack_00000074,0,1);
  param_1[0x12] = in_stack_0000008c;
  if (in_stack_0000008c != 0) {
    if (*(unsigned int *)(in_stack_0000008c + 0xc) != 0) {
      fn_82A1E7D8(*(unsigned int *)(in_stack_0000008c + 0xc));
    }
    *(unsigned int *)param_1[0x12] = 0x3e5;
  }
  return 0;
}

