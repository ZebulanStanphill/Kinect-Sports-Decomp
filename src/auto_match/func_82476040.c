extern int fn_82474FE8();
extern int fn_8255B0D8(int);


void fn_82476040(int param_1)

{
  fn_82474FE8(param_1 + 0x10);
  if (*(unsigned int *)(*(int *)(*(int *)(param_1 + 0xc0) + 0x844) + 0x358) != 0) {
    fn_8255B0D8(*(int *)(*(int *)(param_1 + 0xc0) + 0x844));
  }
  return;
}

