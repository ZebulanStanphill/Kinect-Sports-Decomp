extern int fn_82FAD2E8();
extern int fn_82FB72B0();
extern int fn_82FB91C0();


int fn_82FB75A8(int param_1,unsigned __int64 param_2)

{
  int iVar1;
  int *piVar2;
  
  if ((param_2 & 0xffffffff) == 0) {
    iVar1 = *(int *)(param_1 + 0x44);
  }
  else {
    piVar2 = (int *)(param_1 + 0x40);
    fn_82FAD2E8(piVar2);
    iVar1 = fn_82FB91C0(param_1 + 0x5c,param_2);
    if (iVar1 == 1) {
      iVar1 = fn_82FB72B0(param_1);
      *(int *)(param_1 + 0x50) = iVar1;
      if ((iVar1 != 0) && (*(int *)(iVar1 + 0x40) == 0)) {
        fn_82FAD2E8(piVar2);
        iVar1 = 0;
      }
    }
    else {
      iVar1 = (**(int (***)())(*piVar2 + 0x10))(piVar2);
    }
  }
  return iVar1;
}

