extern int fn_82A9D448();


void fn_82A9D4B8(int param_1,int *param_2)

{
  if (*(unsigned int *)(param_1 + 0xa0) == 0) {
    fn_82A9D448();
  }
  *param_2 = *(int *)(param_1 + 0xa0);
  param_2[1] = *(int *)(param_1 + 0xa4);
  param_2[2] = *(int *)(param_1 + 0xa8);
  if (*(int *)(param_1 + 0x98) != 0) {
    *param_2 = *param_2 + 1;
  }
  return;
}

