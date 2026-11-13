extern int fn_822301D0();
extern int fn_82A40018();
extern int fn_82A411B8();
extern int fn_82A412D8();


void fn_82A41DA0(__int64 param_1)

{
  __int64 lVar1;
  __int64 lVar2;
  
  fn_82A411B8(param_1 + 0x3c28);
  lVar1 = 0x3f;
  lVar2 = param_1 + 0x3c2c;
  do {
    fn_82A412D8(lVar2 + -0xe0);
    fn_822301D0(lVar2 + -0xf0,8,2,0xffffffff82ba02a8);
    lVar1 = lVar1 + -1;
    lVar2 = lVar2 + -0xf0;
  } while (-1 < lVar1);
  fn_82A40018(param_1 + 4);
  return;
}

