extern int fn_82522ED8();


void fn_8260DF78(int param_1)

{
  *(unsigned int *)(param_1 + 0xc) = *(unsigned int *)(param_1 + 0xc) & 0xfffffffe;
  fn_82522ED8();
  return;
}
