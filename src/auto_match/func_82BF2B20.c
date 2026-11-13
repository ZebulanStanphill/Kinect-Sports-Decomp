extern int fn_82CE0BB0();


unsigned __int64 fn_82BF2B20(unsigned int *param_1)

{
  int iVar2;
  unsigned __int64 uVar1;
  
  iVar2 = fn_82CE0BB0();
  if (iVar2 == 0x2733) {
LAB_82bf2b60:
    uVar1 = 0;
  }
  else {
    if (iVar2 == 0x2736) {
      if (param_1 != (unsigned int *)0x0) {
        *param_1 = 0xffffffff;
      }
    }
    else if (((iVar2 != 0x2745) && (iVar2 != 0x2746)) && (iVar2 == 0x2748)) goto LAB_82bf2b60;
    uVar1 = 1;
  }
  return uVar1;
}

