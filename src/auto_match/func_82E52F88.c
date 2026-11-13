extern int fn_82E50338();
extern int fn_82E50F00();
extern int fn_82E51028();
extern int fn_82E63500();


unsigned __int64 fn_82E52F88(__int64 param_1,unsigned __int64 param_2,short *param_3)

{
  short sVar1;
  unsigned __int64 uVar2;
  unsigned __int64 uVar3;
  
  fn_82E50F00(param_1 + 4,1);
  uVar2 = fn_82E63500(param_1,param_2);
  sVar1 = *param_3;
  if ((((sVar1 == 5) || (sVar1 == 0xd)) || (sVar1 == 0x13)) ||
     (((sVar1 == 0x15 || (sVar1 == 0x1f)) || ((sVar1 == 0x48 || (sVar1 == 0x1011)))))) {
    if ((uVar2 & 0xffffffff) == 0) {
      uVar3 = 0xffffffff8007000e;
    }
    else {
      uVar3 = fn_82E50338(uVar2,param_3);
    }
  }
  else {
    uVar3 = 0xffffffffc00d36bd;
  }
  fn_82E51028(param_1 + 4,1);
  return uVar3;
}

