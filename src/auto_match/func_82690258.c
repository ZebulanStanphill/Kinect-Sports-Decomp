unsigned int fn_82690258(int param_1,unsigned int param_2)

{
  unsigned int uVar1;
  unsigned int uVar2;
  
  uVar1 = param_1 + param_2 & ~param_2;
  for (uVar2 = uVar1 - param_1; (uVar2 != 0 && (uVar2 < 0x10));
      uVar2 = param_2 + 1 + uVar2) {
    uVar1 = param_2 + 1 + uVar1;
  }
  return uVar1;
}

