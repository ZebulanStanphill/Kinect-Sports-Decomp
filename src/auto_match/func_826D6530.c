extern int fn_8267C498();


void fn_826D6530(int param_1,unsigned int param_2)

{
  if (*(unsigned int *)(param_1 + 0x114) != 0) {
    fn_8267C498(*(unsigned int *)(param_1 + 0x114));
  }
  if (param_2 != 0) {
    *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + 1;
  }
  *(int *)(param_1 + 0x114) = param_2;
  return;
}

