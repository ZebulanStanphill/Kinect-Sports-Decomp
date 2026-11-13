extern int fn_82E50F00();
extern int fn_82E51028();
extern int fn_82E52428();


int fn_82E4B280(int param_1,unsigned int param_2,unsigned int *param_3)

{
  short *psVar1;
  int uVar2;
  
  uVar2 = 0;
  fn_82E50F00(param_1 + 4,1);
  psVar1 = (short *)fn_82E52428(param_1,param_2);
  if (psVar1 != (short *)0x0) {
    if (*psVar1 == 0x13) {
    *param_3 = *(unsigned int *)(psVar1 + 4);
  }
  else {
    uVar2 = 0xc00d36bd;
  }
  } else { uVar2 = 0xc00d36e6; }
  fn_82E51028(param_1 + 4,1);
  return uVar2;
}

