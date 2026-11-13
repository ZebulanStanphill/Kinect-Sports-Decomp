extern int fn_82AA66A8();
extern int fn_82AE5550();
extern int fn_82AE6018();


int fn_82AE6C68(unsigned int *param_1,int param_2)

{
  int lVar1;
  
  lVar1 = fn_82AE6018(param_1,0,param_2);
  if ((int)lVar1 == -1) {
                    /* WARNING: Subroutine does not return */
    fn_82AA66A8(*param_1,0xdf2);
  }
  fn_82AE5550(param_1 + 1,lVar1,lVar1 + param_2 + -1);
  return lVar1;
}

