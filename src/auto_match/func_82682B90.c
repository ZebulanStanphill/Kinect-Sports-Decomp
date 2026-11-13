extern int fn_8267C4F0();
extern int fn_826C1328();


void fn_82682B90(int param_1)

{
  if (*(unsigned int *)(param_1 + 0x30) != 0) {
    fn_8267C4F0(*(unsigned int *)(param_1 + 0x30));
  }
  *(unsigned int *)(param_1 + 0x30) = 0;
  fn_826C1328(param_1);
  return;
}

