extern int fn_82C098F0();


void fn_82C06680(int param_1)

{
  fn_82C098F0();
  (*(int (**)())(*(int *)(param_1 + 0x88) + 0x3c))(param_1 + 0x88);
  *(unsigned int *)(param_1 + 0x1f8) = 0;
  *(unsigned int *)(param_1 + 500) = 1;
  *(unsigned int *)(param_1 + 0x1fc) = 0;
  *(unsigned int *)(param_1 + 0x200) = 1;
  *(unsigned __int64 *)(param_1 + 0x80) = 0;
  return;
}

