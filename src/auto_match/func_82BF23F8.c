extern int fn_82BE6268();
extern int fn_82BE6BD8();
extern int fn_82F691F0();


unsigned __int64 fn_82BF23F8(int param_1)

{
  fn_82BE6268(*(unsigned int *)(param_1 + 4));
  if (*(int *)(*(int *)(param_1 + 4) + 0x24) == *(int *)(param_1 + 0x40)) {
    fn_82BE6BD8();
    *(unsigned int *)(param_1 + 0x30) = 0;
    *(unsigned int *)(param_1 + 8) = 0;
                    /* WARNING: Subroutine does not return */
    fn_82F691F0(*(unsigned int *)(param_1 + 0x20),0,*(unsigned int *)(param_1 + 0x2c));
  }
  return 0;
}

