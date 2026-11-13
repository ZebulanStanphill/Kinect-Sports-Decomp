extern int fn_8251FBA8();
extern int fn_82526A20();


int fn_82507908(int param_1,int param_2)

{
  unsigned int uVar1;
  int iVar2;
  unsigned int uVar3;
  int lVar4;
  
  uVar3 = 0;
  uVar1 = fn_8251FBA8(param_1);
  lVar4 = param_1;
  if ((int)(uVar1 / 0x84) != 0) {
    do {
      iVar2 = fn_82526A20(lVar4 + 4,param_2);
      if (iVar2 == 0) {
        return lVar4;
      }
      uVar3 = uVar3 + 1;
      lVar4 = lVar4 + 0x84;
      uVar1 = fn_8251FBA8(param_1);
    } while (uVar3 < uVar1 / 0x84);
  }
  return 0;
}

