extern int fn_82690930();
extern int fn_82691AF0();


void fn_826928F0(unsigned int param_1)

{
  while (*(int *)(param_1 + 0x1b0) != param_1 + 0x1ac) {
    fn_82691AF0(param_1, *(unsigned int *)(param_1 + 0x1b0));
  }
  fn_82690930(param_1 + 0x1c);
  return;
}

