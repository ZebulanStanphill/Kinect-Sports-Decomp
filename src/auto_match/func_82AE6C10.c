extern int fn_82AA66A8();
extern int fn_82AE5778();
extern int fn_82AE6080();


int fn_82AE6C10(unsigned int *param_1,int param_2)

{
  int lVar1;
  
  lVar1 = fn_82AE6080(param_1,0,param_2);
  if ((int)lVar1 == -1) {
                    /* WARNING: Subroutine does not return */
    fn_82AA66A8(*param_1,0xdf1);
  }
  fn_82AE5778(param_1 + 2,lVar1,lVar1 + param_2 + -1);
  return lVar1;
}

