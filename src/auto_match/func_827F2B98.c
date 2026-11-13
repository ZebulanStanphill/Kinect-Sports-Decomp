extern int fn_827F2A90();


void fn_827F2B98(int param_1)

{
  while (*(char *)(param_1 + 0x54) != *(char *)(param_1 + 0x53)) {
    fn_827F2A90(param_1);
    *(unsigned char *)(param_1 + 0x54) = *(unsigned char *)(param_1 + 0x54) + 1U & 3;
  }
  fn_827F2A90(param_1);
  return;
}

