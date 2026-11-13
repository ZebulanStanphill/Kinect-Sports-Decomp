extern int fn_82BE2958();
extern int fn_82BE4378();
extern int fn_82BE4460();
extern int fn_82BEA200();
extern int fn_82BEA230();
extern int fn_82BEEB00();
extern int fn_82F68CC0();


void fn_82BE4AB0(int param_1,unsigned __int64 param_2)

{
  int iVar1;
  
  fn_82BE2958(0xffffffff820e90c4);
  if ((*(int *)(param_1 + 0x6c) == 0) ||
     (iVar1 = fn_82BEA200(*(int *)(param_1 + 0x6c),0xffffffff820e9098), iVar1 == 0)) {
    *(unsigned int *)(param_1 + 0xc) = 0x69;
  }
  else {
    if ((param_2 & 0xffffffff) == 0) {
      fn_82BEEB00(param_1 + 0x7c);
      fn_82BEEB00(param_1 + 0xa0);
      fn_82BEEB00(param_1 + 0x88);
      fn_82BEEB00(param_1 + 0x94);
      *(unsigned int *)(param_1 + 0xc) = 0x1f8;
    }
    else {
      fn_82F68CC0(param_1 + 0x7c,param_2,0x30);
    }
    fn_82BE4460(param_1);
    fn_82BE4378(param_1);
    fn_82BEA230(*(unsigned int *)(param_1 + 0x6c),0xffffffff820e9098);
  }
  return;
}

