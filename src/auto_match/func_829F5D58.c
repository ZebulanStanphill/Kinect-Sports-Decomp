extern int fn_829F5398();
extern int fn_82A0D610();
extern unsigned int lbl_82002AE0;


void fn_829F5D58(int param_1)

{
  __int64 lVar1;
  double dVar2;
  
  lVar1 = 0;
  *(unsigned int *)(param_1 + 4) = 0;
  *(unsigned int *)(param_1 + 0x10678) = 0;
  *(unsigned int *)(param_1 + 0x10694) = 0;
  fn_829F5398(param_1 + 0x10);
  dVar2 = (double)lbl_82002AE0;
  do {
    fn_82A0D610(dVar2,param_1 + 0xb0,lVar1,0);
    lVar1 = lVar1 + 1;
  } while ((int)lVar1 < 3);
  return;
}

