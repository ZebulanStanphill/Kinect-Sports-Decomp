extern int fn_82FA97D0();
extern int fn_82FAD0A8();


int fn_82FABEC8(int *param_1,int param_2)

{
  unsigned int iVar3;
  unsigned int uVar1;
  int uVar2;
  
  iVar3 = (*(int (**)())(*param_1 + 0x18))();
  if ((iVar3 != 0) && (uVar1 = fn_82FAD0A8(), uVar1 != 0)) {
    uVar2 = fn_82FA97D0(uVar1,param_2);
    return uVar2;
  }
  return 2;
}

