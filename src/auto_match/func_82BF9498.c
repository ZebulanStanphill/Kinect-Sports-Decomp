extern int fn_82BF9170();
extern int fn_82BF91D8();
extern int fn_82BF92A8();
extern unsigned int lbl_8322ECF8;


void fn_82BF9498(unsigned __int64 param_1,unsigned __int64 param_2)

{
  unsigned __int64 uVar1;
  
  fn_82BF9170(*(unsigned short *)((int)&lbl_8322ECF8 + (int)((param_1 & 0xffffffff) << 1)),param_2,
                param_1);
  uVar1 = fn_82BF91D8(param_1);
  fn_82BF92A8(uVar1,1);
  return;
}

