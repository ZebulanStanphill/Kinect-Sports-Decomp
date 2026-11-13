extern unsigned int *auStack_2c;
extern int fn_82827770();
extern int fn_82827FB0();
extern int fn_8282AE70();
extern int fn_8282BDD0();
extern int fn_8282D0E0();
extern int fn_8282D640();
extern int fn_8282FE08();
extern int fn_828308B8();
extern unsigned int uStack_30;


__int64 fn_8282D230(unsigned __int64 param_1,unsigned int *param_2)

{
  unsigned int uVar1;
  __int64 lVar2;
  char cVar4;
  unsigned __int64 uVar3;
  unsigned int uStack_30;
  unsigned int auStack_2c [11];
  
  fn_82827FB0(param_1,&uStack_30);
  auStack_2c[0] = 0;
  lVar2 = fn_8282D0E0(param_1,4,auStack_2c);
  uVar1 = auStack_2c[0];
  if (lVar2 == 0) {
    fn_828308B8(auStack_2c[0],uStack_30);
    fn_8282FE08(uVar1,uStack_30);
    cVar4 = fn_82827770(uVar1);
    if (cVar4 != '\0') {
      fn_8282D640((unsigned __int64)uStack_30,(unsigned __int64)uStack_30 + 0x318,0xffffffff8282b828,0);
    }
    uVar3 = fn_82827770(uVar1);
    fn_8282AE70(uStack_30,uVar3);
    fn_8282BDD0(uVar1);
    *param_2 = uStack_30;
  }
  else {
    *param_2 = 0;
  }
  return lVar2;
}

