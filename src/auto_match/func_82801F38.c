extern int fn_82806240();


void fn_82801F38(unsigned int param_1,int param_2)

{
  if (*(unsigned int *)(param_2 + 0x18) == 0) {
    return;
  }
  if (param_1 == 0) {
    return;
  }
  fn_82806240(param_1,*(int *)(param_2 + 0x18),0);
  return;
}

