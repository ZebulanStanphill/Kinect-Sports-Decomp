extern int fn_8265C940();
extern int fn_82E4B6D0();
extern int fn_82E4B7B0();


unsigned __int64 fn_82E25BC8(int param_1)

{
  int iVar1;
  unsigned __int64 uVar2;
  
  uVar2 = 0;
  if (param_1 == 0x57564331) {
    iVar1 = fn_8265C940(0x468,0x248c8000);
    if ((iVar1 == 0) || (uVar2 = fn_82E4B6D0(), (uVar2 & 0xffffffff) == 0)) {
      uVar2 = 0;
    }
    else {
      fn_82E4B7B0(uVar2,0x57564331);
    }
  }
  return uVar2;
}

