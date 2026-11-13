extern int fn_82E50BE8();
extern int fn_82F3A790();


unsigned __int64 fn_82F3A990(unsigned __int64 param_1,unsigned int *param_2)

{
  int iVar2;
  __int64 lVar1;
  
  iVar2 = fn_82E50BE8(0x1220,0,0,0,0);
  if (iVar2 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = fn_82F3A790();
  }
  *param_2 = (int)lVar1;
  return -(unsigned __int64)(lVar1 == 0) & 0xffffffff8007000e;
}

