extern int fn_8267BE38();
extern int fn_8267C488();
extern int fn_826DF5F0();
extern int fn_826E1FE8();


void fn_826E3170(int param_1)

{
  fn_826E1FE8(param_1 + 0x24);
  fn_826DF5F0(*(unsigned int *)(param_1 + 0x18),*(unsigned int *)(param_1 + 0x1c));
  fn_8267BE38(*(unsigned int *)(param_1 + 0x18));
  fn_8267C488(param_1);
  return;
}

