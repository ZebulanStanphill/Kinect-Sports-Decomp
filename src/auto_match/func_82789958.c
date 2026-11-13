extern int fn_8267BE38();
extern int fn_827B5EA8();


void fn_82789958(int param_1)

{
  fn_827B5EA8();
  fn_827B5EA8(param_1 + 0x10);
  fn_827B5EA8(param_1 + 0x20);
  fn_8267BE38(*(unsigned int *)(param_1 + 0x30));
  *(unsigned int *)(param_1 + 0x38) = 0;
  *(unsigned int *)(param_1 + 0x34) = 0;
  *(unsigned int *)(param_1 + 0x30) = 0;
  fn_827B5EA8(param_1 + 0x3c);
  fn_827B5EA8(param_1 + 0x4c);
  fn_827B5EA8(param_1 + 0x5c);
  fn_8267BE38(*(unsigned int *)(param_1 + 0x6c));
  *(unsigned int *)(param_1 + 0x74) = 0;
  *(unsigned int *)(param_1 + 0x70) = 0;
  *(unsigned int *)(param_1 + 0x6c) = 0;
  return;
}

