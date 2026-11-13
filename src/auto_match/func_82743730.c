void fn_82743730(int param_1,int param_2,int param_3)

{
  int p = param_1 + 0x78;
  (*(int (**)())(*(int *)(param_2 + 0x10) + 0x2c))(param_2 + 0x10, p, *(int *)p + 0x1ec, param_3);
  (*(int (**)())(*(int *)(param_2 + 0x10) + 0x2c))(param_2 + 0x10, p, *(int *)p + 0x1f0, param_3 + 0x10);
}
