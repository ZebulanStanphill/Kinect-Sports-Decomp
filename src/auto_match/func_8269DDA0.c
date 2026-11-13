extern int fn_82695FA0();
extern int fn_8269D178();


unsigned int * fn_8269DDA0(unsigned int *param_1,unsigned int *param_2)

{
  unsigned int uVar1;
  __int64 lVar2;
  
  fn_8269D178(param_1,param_2[1]);
  uVar1 = 0;
  if (param_1[1] != 0) {
    lVar2 = 0;
    do {
      fn_82695FA0(lVar2 + (unsigned __int64)*param_1,(unsigned __int64)*param_2 + lVar2);
      uVar1 = uVar1 + 1;
      lVar2 = lVar2 + 0x10;
    } while (uVar1 < param_1[1]);
  }
  return param_1;
}

