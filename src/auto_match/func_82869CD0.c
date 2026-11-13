extern int fn_82869890();
extern int fn_82877318();


unsigned int  fn_82869CD0(int param_1)

{
  unsigned int iVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  
  uVar2 = fn_82877318(param_1 + 8);
  if ((int)uVar2 == 1) {
    for (iVar1 = *(int *)(param_1 + 0x424); iVar1 != 0; iVar1 = *(int *)(iVar1 + 4)) {
      uVar3 = fn_82869890(param_1,iVar1);
      if ((int)uVar3 != 1) {
        uVar2 = uVar3;
      }
    }
  }
  return uVar2;
}

