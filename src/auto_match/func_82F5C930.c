extern int fn_82F5BA88();
extern int fn_82F5BAF8();
extern int fn_82F5C8D0();


int fn_82F5C930(int param_1)

{
  *(unsigned int *)(param_1 + 0x1564) = 0;
  *(unsigned int *)(param_1 + 0x1568) = 0;
  *(unsigned int *)(param_1 + 0x156c) = 0;
  fn_82F5BAF8(param_1 + 0x1580);
  fn_82F5BA88(param_1 + 0x1970,0x140,0xf0);
  fn_82F5C8D0(param_1);
  return param_1;
}

