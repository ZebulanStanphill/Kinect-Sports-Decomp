void fn_82F0DB60(int param_1,int param_2)

{
  if (3 < param_2) {
    param_2 = 3;
  }
  if (*(int *)(param_1 + 0x6de8) == 0) {
    param_2 = param_2 * 0x1c;
    *(unsigned int *)(param_1 + 0x6e10) = *(unsigned int *)(param_2 + -0x7ce47648);
    *(unsigned int *)(param_1 + 0x6e14) = *(unsigned int *)(param_2 + -0x7ce47644);
    *(unsigned int *)(param_1 + 0x6e18) = *(unsigned int *)(param_2 + -0x7ce47640);
    *(unsigned int *)(param_1 + 0x6e1c) = *(unsigned int *)(param_2 + -0x7ce4763c);
    *(unsigned int *)(param_1 + 0x6e20) = *(unsigned int *)(param_2 + -0x7ce47638);
    *(unsigned int *)(param_1 + 0x6e24) = *(unsigned int *)(param_2 + -0x7ce47634);
    *(unsigned int *)(param_1 + 0x6e28) = *(unsigned int *)(param_2 + -0x7ce47630);
    return;
  }
  param_2 = param_2 * 0x1c;
  *(unsigned int *)(param_1 + 0x6e10) = *(unsigned int *)(param_2 + -0x7ce475d8);
  *(unsigned int *)(param_1 + 0x6e14) = *(unsigned int *)(param_2 + -0x7ce475d4);
  *(unsigned int *)(param_1 + 0x6e18) = *(unsigned int *)(param_2 + -0x7ce475d0);
  *(unsigned int *)(param_1 + 0x6e1c) = *(unsigned int *)(param_2 + -0x7ce475cc);
  *(unsigned int *)(param_1 + 0x6e20) = *(unsigned int *)(param_2 + -0x7ce475c8);
  *(unsigned int *)(param_1 + 0x6e24) = *(unsigned int *)(param_2 + -0x7ce475c4);
  *(unsigned int *)(param_1 + 0x6e28) = *(unsigned int *)(param_2 + -0x7ce475c0);
  return;
}

