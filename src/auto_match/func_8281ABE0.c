extern int fn_8281BA78();
extern int fn_828233A8();
extern unsigned int iStack_30;


unsigned __int64 fn_8281ABE0(int param_1,unsigned __int64 param_2)

{
  unsigned __int64 uVar1;
  int iStack_30;
  int aiStack_2c;
  
  fn_828233A8(param_1 + 0x88,&iStack_30,0xffffffff828192c8,param_2);
  if (iStack_30 != 0) {
    fn_828233A8(param_1 + 0x88,&aiStack_2c,0xffffffff828192c8,param_2);
    uVar1 = (unsigned __int64)*(unsigned int *)(aiStack_2c + 0x28);
    if (((uVar1 != 0) && (*(int *)(aiStack_2c + 0x24) != 0)) &&
       ((param_2 & 0xffffffff) == (unsigned __int64)*(unsigned int *)(aiStack_2c + 0x3c))) {
      if ((*(unsigned int *)(param_1 + 0xc) & 4) != 0) {
        param_2 = *(unsigned int *)(param_1 + 0x78) + param_2;
        uVar1 = uVar1 + ((unsigned __int64)*(unsigned int *)(param_1 + 0x78) & 0x7fffffff) * -2;
      }
      fn_8281BA78(param_1,param_2,uVar1,0);
      return 1;
    }
  }
  return 0;
}

