extern int fn_82A432C8();
extern int fn_82A45B18();
extern int fn_82A488B8();
extern int fn_82A49350();


void fn_82A49460(int param_1,unsigned __int64 param_2,unsigned int param_3)

{
  fn_82A432C8(param_1,0,0);
  if ((param_3 & 0xffffffff) != 0) {
    fn_82A488B8(param_1 + -0x8c,param_2,param_3);
  }
  fn_82A49350(param_1 + -0x8c);
  fn_82A45B18(*(unsigned int *)(param_1 + 0x14c));
  return;
}

