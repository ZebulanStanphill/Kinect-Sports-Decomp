extern int fn_82821F28();


void fn_82822020(int param_1)

{
  *(unsigned char *)(param_1 + 0x7c) = 1;
  *(unsigned char *)(param_1 + 0x7d) = 1;
  fn_82821F28(param_1,*(unsigned int *)(param_1 + 0x58),
                *(unsigned int *)(*(int *)(param_1 + 0x1c) + 0x34),*(unsigned int *)(param_1 + 0x5c));
  fn_82821F28(param_1,*(unsigned int *)(param_1 + 0x60),
                *(unsigned int *)(*(int *)(param_1 + 0x1c) + 0x44),*(unsigned int *)(param_1 + 100));
  return;
}

