extern int fn_82E50F00();
extern int fn_82E51028();
extern int fn_82E52428();


unsigned __int64 fn_82E2F188(__int64 param_1,unsigned __int64 param_2,unsigned int *param_3)

{
  unsigned short *puVar1;
  unsigned __int64 uVar2;
  
  uVar2 = 0;
  fn_82E50F00(param_1 + 4,1);
  puVar1 = (unsigned short *)fn_82E52428(param_1,param_2);
  if (puVar1 != (unsigned short *)0x0) {
    *param_3 = (unsigned int)*puVar1;
  }
  else {
    uVar2 = 0xffffffffc00d36e6;
  }
  fn_82E51028(param_1 + 4,1);
  return uVar2;
}

