extern int fn_8266F628();
extern int fn_8266F640();


void fn_822A0678(int param_1)

{
  fn_8266F640(*(unsigned int *)(param_1 + 4),0);
  fn_8266F628(*(unsigned int *)(param_1 + 4),0);
  *(unsigned int *)(param_1 + 0x18) = 0;
  *(unsigned int *)(param_1 + 0x14) = 1;
  return;
}

