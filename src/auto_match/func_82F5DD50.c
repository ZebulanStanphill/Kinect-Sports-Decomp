extern int fn_82F4D9D8();
extern int fn_82F5D948();


void fn_82F5DD50(int param_1)

{
  int lVar1;
  
  lVar1 = fn_82F4D9D8(2);
  if (lVar1 == 0) {
    *(unsigned int *)(param_1 + 0x114) = 0;
  }
  else {
    fn_82F5D948(param_1,lVar1,param_1 + 0x13c,param_1 + 0x140);
  }
  return;
}

