extern int fn_829F5368();
extern int fn_829F5398();
extern int fn_82A01F88();


unsigned __int64 fn_829F5478(int param_1)

{
  int iVar2;
  unsigned __int64 uVar1;
  
  iVar2 = fn_829F5368(0x66620);
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = fn_82A01F88();
  }
  *(int *)(param_1 + 0x9c) = iVar2;
  if (iVar2 == 0) {
    uVar1 = 0xe;
  }
  else {
    fn_829F5398(param_1);
    uVar1 = 0;
  }
  return uVar1;
}

