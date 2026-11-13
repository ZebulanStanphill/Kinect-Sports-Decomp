extern int fn_8265CA20();
extern __int64 fn_82E1F9D0();
extern int fn_82E20100();


unsigned __int64 fn_82E1FC40(unsigned __int64 param_1)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  
  uVar1 = fn_82E20100("VinceGameTimer.dat",1);
  uVar2 = fn_82E1F9D0(param_1,uVar1);
  if ((uVar1 & 0xffffffff) != 0) {
    fn_8265CA20(uVar1);
  }
  return uVar2;
}

