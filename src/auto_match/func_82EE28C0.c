extern int fn_82E50F00();
extern int fn_82E51028();
extern int fn_82E63500();


unsigned __int64 fn_82EE28C0(__int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  unsigned short *puVar1;
  unsigned __int64 uVar2;
  
  fn_82E50F00(param_1 + 4,1);
  puVar1 = (unsigned short *)fn_82E63500(param_1,param_2);
  uVar2 = 0;
  if (puVar1 == (unsigned short *)0x0) {
    uVar2 = 0xffffffff8007000e;
  }
  else {
    *(unsigned __int64 *)(puVar1 + 4) = param_3;
    *puVar1 = 0x15;
  }
  fn_82E51028(param_1 + 4,1);
  return uVar2;
}

