unsigned int
fn_82CB0760(int param_1, __int64 param_2, int param_3, int param_4, int param_5, unsigned __int64 param_6, int param_7, int param_8, unsigned __int64 unused_arg_9, unsigned __int64 unused_arg_10, unsigned int in_stack_00000064, unsigned int in_stack_0000006c)

{
  unsigned short *puVar1;
  unsigned short uVar3;
  unsigned int uVar2;
  int *in_stack_0000005c;


  
  if (*in_stack_0000005c == 0) {
    if (param_7 == 0) {
      uVar2 = *(unsigned int *)(param_4 * 4 + param_3);
    }
    else {
      puVar1 = *(unsigned short **)(param_3 + 4);
      uVar3 = (**(int (***)())(param_1 + 0xbac))(param_2 + -8,in_stack_00000064,in_stack_0000006c);
      *puVar1 = uVar3;
      **(unsigned short **)(param_1 + 0x778) = uVar3;
      uVar2 = *(unsigned int *)(param_1 + 0x778);
    }
  }
  else if (param_8 == 0) {
    uVar2 = *(unsigned int *)((param_5 + 2) * 4 + param_3);
  }
  else {
    puVar1 = *(unsigned short **)(param_3 + 0xc);
    uVar3 = (**(int (***)())(param_1 + 0xbac))
                      (param_2 + ((unsigned __int64)in_stack_00000064 & 0x1fffffff) * -8,in_stack_00000064,
                       in_stack_0000006c);
    *puVar1 = uVar3;
    **(unsigned short **)(param_1 + 0x77c) = uVar3;
    uVar2 = *(unsigned int *)(param_1 + 0x77c);
  }
  return uVar2;
}

