extern int fn_82F68CC0();
extern int fn_8306D020();
extern int fn_8306D1B8();


void fn_8306D398(unsigned __int64 param_1,__int64 param_2)

{
  __int64 lVar1;
  __int64 lVar2;
  int *piVar3;
  
  fn_8306D1B8(param_2,param_2 + 0xb330,1);
  fn_8306D1B8(param_2,param_2 + 0xc0e0,0);
  fn_8306D020(param_1,param_2,param_2 + 0xb330);
  fn_8306D020(param_1,param_2,param_2 + 0xc0e0);
  piVar3 = (int *)0x831bca68;
  param_2 = param_2 + 0xce90;
  lVar2 = 0x48;
  do {
    if ((*piVar3 == 0) || (lVar1 = param_2 + -0xdb0, *piVar3 != 1)) {
      lVar1 = param_2 + -0x1b60;
    }
    fn_82F68CC0(param_2,lVar1,0x30);
    lVar2 = lVar2 + -1;
    piVar3 = piVar3 + 1;
    param_2 = param_2 + 0x30;
  } while (lVar2 != 0);
  return;
}

