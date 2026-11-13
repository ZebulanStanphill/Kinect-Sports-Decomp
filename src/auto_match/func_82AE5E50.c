extern int fn_82AA66A8();
extern int fn_82AE5600();
extern int fn_82AE5778();


void fn_82AE5E50(unsigned int *param_1,__int64 param_2,__int64 param_3)

{
  char cVar1;
  __int64 lVar2;
  
  lVar2 = param_2 + param_3 + -1;
  cVar1 = fn_82AE5600(param_1 + 2,param_2,lVar2);
  if (cVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
    fn_82AA66A8(*param_1,0xdc6,param_2);
  }
  fn_82AE5778(param_1 + 2,param_2,lVar2);
  return;
}

