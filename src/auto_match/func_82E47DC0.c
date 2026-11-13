extern int fn_82E474A0();
extern int fn_82E4FE40();
extern int fn_82E50BE8();


int fn_82E47DC0(unsigned int param_1,unsigned int param_2,int param_3)

{
  int lVar1;
  int lVar2;
  
  if ((param_1 + param_2 & 0xffffffff) < param_1) {
    lVar2 = -0x7fffbffb;
  }
  else {
    lVar1 = fn_82E50BE8(param_1 + param_2,0,0,0,0);
    if (lVar1 == 0) {
      lVar2 = -0x7ff8fff2;
    }
    else {
      lVar2 = fn_82E474A0(param_1,lVar1,lVar1 + param_2 & ~param_2,param_3);
      if (lVar2 < 0) {
        fn_82E4FE40(lVar1);
      }
    }
  }
  return lVar2;
}

