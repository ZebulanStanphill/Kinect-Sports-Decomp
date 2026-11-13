extern int fn_823AA2A8();
extern int fn_82610EF0();
extern int fn_828ACDB8();
extern int fn_828ADBE0();
extern int fn_828ECFB8();


unsigned __int64
fn_828ADCE8(int param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4,
             unsigned int param_5,unsigned __int64 param_6,unsigned __int64 param_7,unsigned __int64 param_8)

{
  int *piVar1;
  int iVar2;
  unsigned char in_stack_00000057;
  unsigned char in_stack_0000005f;
  char in_stack_00000067;
  unsigned char in_stack_0000006f;
  unsigned char in_stack_00000077;
  unsigned char in_stack_0000007f;
  unsigned int in_stack_000000a4;
  unsigned char in_stack_000000af;
  unsigned char in_stack_000000b7;
  unsigned char in_stack_000000bf;
  
  fn_828ADBE0(param_1,in_stack_00000057,in_stack_0000005f,0,param_3,param_4,in_stack_000000a4,
                in_stack_000000bf);
  *(unsigned char *)(param_1 + 0x9c) = 1;
  if (in_stack_00000067 == '\0') {
    fn_828ECFB8(*(unsigned int *)(param_1 + 0x8c),param_2,param_6,param_7,param_8,
                    in_stack_000000af,in_stack_000000b7);
  }
  else {
    piVar1 = *(int **)(param_1 + 0x8c);
    iVar2 = *piVar1;
    fn_82610EF0(param_1 + 0x60);
    fn_823AA2A8(param_1 + 0x60);
    (**(int (***)())(iVar2 + 0xc))
              (piVar1,param_2,param_6,param_7,param_8,in_stack_0000006f,in_stack_00000077,
               in_stack_0000007f);
  }
  fn_828ACDB8(param_1,1);
  *(unsigned int *)(param_1 + 0x84) = param_5;
  return 1;
}

