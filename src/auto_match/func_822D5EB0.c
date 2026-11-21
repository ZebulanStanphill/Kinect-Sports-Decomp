void fn_822D5EB0(int param_1,unsigned int param_2,unsigned int param_3)

{
  unsigned int *puVar1;
  unsigned int in_register_00010010;
  unsigned int in_register_00010014;
  unsigned int in_register_00010018;
  unsigned int in_vr1;
  
  if (*(int *)(param_1 + 0xbc) == 0) {
    return;
  }
  *(unsigned int *)(param_1 + 200) = param_3;
  *(unsigned int *)(param_1 + 0xc4) = param_2;
  *(unsigned int *)(param_1 + 0xc0) = 1;
  puVar1 = (unsigned int *)(param_1 + 0xd0U & 0xfffffff0);
  *puVar1 = in_register_00010010;
  puVar1[1] = in_register_00010014;
  puVar1[2] = in_register_00010018;
  puVar1[3] = in_vr1;
  fn_822D5F28();
  return;
}
