extern int fn_82279CA0();
extern int fn_8229E090();


void fn_82291618(int param_1,int param_2)

{
  fn_82279CA0(param_2,0);
  if (*(unsigned int *)(param_2 + 0x164) != 0) {
    if (param_1 != 2) {
      fn_8229E090(*(int *)(param_2 + 0x164),0,1);
    }
    *(unsigned int *)(param_2 + 0x164) = 0;
  }
  return;
}

