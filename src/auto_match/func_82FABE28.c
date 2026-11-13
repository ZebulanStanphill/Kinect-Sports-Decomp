extern int fn_82FAD888();


int fn_82FABE28(int *param_1,int param_2,int param_3,int param_4)

{
  unsigned int uVar1;
  int uVar2;
  
  uVar1 = (*(int (**)())(*param_1 + 0x18))();
  if (uVar1 == 0) {
    uVar2 = 2;
  }
  else {
    uVar2 = fn_82FAD888(uVar1,param_2,param_3,param_4);
  }
  return uVar2;
}

