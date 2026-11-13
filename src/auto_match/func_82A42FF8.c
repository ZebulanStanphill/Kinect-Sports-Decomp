extern int fn_82A3FE48();
extern int fn_82A3FEE0();
extern int fn_82A3FF60();
extern int fn_82A4C800();


unsigned __int64 fn_82A42FF8(int *param_1)

{
  int iVar1;
  unsigned __int64 uVar2;
  
  fn_82A3FE48(0xffffffff83219d50);
  if (param_1 == (int *)0x0) {
    uVar2 = 0xffffffff80004003;
  }
  else {
    iVar1 = fn_82A3FF60(0xffffffff83219d50,0x68,0x2097000a,0);
    if (iVar1 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = fn_82A4C800();
    }
    if (iVar1 == 0) {
      uVar2 = 0xffffffff8007000e;
    }
    else {
      uVar2 = 0;
      *param_1 = iVar1;
    }
  }
  fn_82A3FEE0(0xffffffff83219d50);
  return uVar2;
}

