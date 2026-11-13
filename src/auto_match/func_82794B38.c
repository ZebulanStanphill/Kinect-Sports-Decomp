extern int fn_8267BE38();
extern int fn_8267C498();
extern int fn_827906D0();


void fn_82794B38(int param_1)

{
  fn_827906D0(*(unsigned int *)(param_1 + 0x10),*(unsigned int *)(param_1 + 0x14));
  fn_8267BE38(*(unsigned int *)(param_1 + 0x10));
  if (*(unsigned int *)(param_1 + 0xc) != 0) {
    fn_8267C498(*(unsigned int *)(param_1 + 0xc));
  }
  return;
}

