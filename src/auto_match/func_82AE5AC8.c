extern int fn_82AA66A8();
extern int fn_82AE5600();
extern int fn_82AE5778();


void fn_82AE5AC8(unsigned int *param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  char cVar1;
  __int64 lVar2;
  __int64 lVar3;
  
  lVar3 = (param_2 & 0x3fffffff) * 4;
  lVar2 = (param_3 & 0x3fffffff) * 4 + lVar3 + -1;
  cVar1 = fn_82AE5600(param_1 + 2,lVar3,lVar2);
  if (cVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
    fn_82AA66A8(*param_1,0xdc6,param_2);
  }
  fn_82AE5778(param_1 + 2,lVar3,lVar2);
  return;
}

