extern int fn_82821D98();


void fn_82821EB0(int param_1)

{
  *(unsigned char *)(param_1 + 0x7a) = 1;
  *(unsigned char *)(param_1 + 0x7b) = 1;
  fn_82821D98(param_1,*(unsigned int *)(param_1 + 0x48),
                *(unsigned int *)(*(int *)(param_1 + 0x1c) + 0x2c),*(unsigned int *)(param_1 + 0x4c),
                *(unsigned int *)(param_1 + 0x58),*(unsigned int *)(*(int *)(param_1 + 0x1c) + 0x34),
                *(unsigned int *)(param_1 + 0x5c));
  fn_82821D98(param_1,*(unsigned int *)(param_1 + 0x50),
                *(unsigned int *)(*(int *)(param_1 + 0x1c) + 0x3c),*(unsigned int *)(param_1 + 0x54),
                *(unsigned int *)(param_1 + 0x60),*(unsigned int *)(*(int *)(param_1 + 0x1c) + 0x44),
                *(unsigned int *)(param_1 + 100));
  return;
}

