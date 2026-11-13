extern int fn_82AA66A8();
extern int fn_82AE54C0();
extern int fn_82AE5550();


void fn_82AE5F40(unsigned int *param_1,__int64 param_2,__int64 param_3)

{
  char cVar1;
  __int64 lVar2;
  
  lVar2 = param_2 + param_3 + -1;
  cVar1 = fn_82AE54C0(param_1 + 1,param_2,lVar2);
  if (cVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
    fn_82AA66A8(*param_1,0xdc6,param_2);
  }
  fn_82AE5550(param_1 + 1,param_2,lVar2);
  return;
}

