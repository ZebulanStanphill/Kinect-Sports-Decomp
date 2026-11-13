extern int fn_826827F8();
extern int fn_82696330();


void fn_82683270(unsigned int *param_1,int param_2)

{
  unsigned int uVar1;
  
  if ((unsigned int)param_2 != 0) {
    do {
      fn_82696330(*param_1);
      uVar1 = *param_1;
      *param_1 = uVar1 - 0x10;
      if (uVar1 - 0x10 < param_1[1]) {
        fn_826827F8(param_1);
      }
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

