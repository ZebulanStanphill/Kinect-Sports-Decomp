extern int fn_82279CA0();


void fn_82285DD0(int param_1)

{
  int iVar1;

  iVar1 = *(int *)(param_1 + 4);
  *(unsigned int *)(iVar1 + 0x170) = 1;
  fn_82279CA0(iVar1,0);
  return;
}
