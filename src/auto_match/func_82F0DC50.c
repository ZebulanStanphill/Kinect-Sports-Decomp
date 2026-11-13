void fn_82F0DC50(int param_1,int param_2)

{
  if (3 < param_2) {
    param_2 = 3;
  }
  if (*(int *)(param_1 + 0x6de8) == 0) {
    param_2 = param_2 * 0x1c;
    *(unsigned int *)(param_1 + 0x6e2c) = *(unsigned int *)(param_2 + -0x7ce47568);
    *(unsigned int *)(param_1 + 0x6e30) = *(unsigned int *)(param_2 + -0x7ce47564);
    *(unsigned int *)(param_1 + 0x6e34) = *(unsigned int *)(param_2 + -0x7ce47560);
    *(unsigned int *)(param_1 + 0x6e38) = *(unsigned int *)(param_2 + -0x7ce4755c);
    *(unsigned int *)(param_1 + 0x6e3c) = *(unsigned int *)(param_2 + -0x7ce47558);
    *(unsigned int *)(param_1 + 0x6e40) = *(unsigned int *)(param_2 + -0x7ce47554);
    *(unsigned int *)(param_1 + 0x6e44) = *(unsigned int *)(param_2 + -0x7ce47550);
    return;
  }
  param_2 = param_2 * 0x1c;
  *(unsigned int *)(param_1 + 0x6e2c) = *(unsigned int *)(param_2 + -0x7ce474f8);
  *(unsigned int *)(param_1 + 0x6e30) = *(unsigned int *)(param_2 + -0x7ce474f4);
  *(unsigned int *)(param_1 + 0x6e34) = *(unsigned int *)(param_2 + -0x7ce474f0);
  *(unsigned int *)(param_1 + 0x6e38) = *(unsigned int *)(param_2 + -0x7ce474ec);
  *(unsigned int *)(param_1 + 0x6e3c) = *(unsigned int *)(param_2 + -0x7ce474e8);
  *(unsigned int *)(param_1 + 0x6e40) = *(unsigned int *)(param_2 + -0x7ce474e4);
  *(unsigned int *)(param_1 + 0x6e44) = *(unsigned int *)(param_2 + -0x7ce474e0);
  return;
}

