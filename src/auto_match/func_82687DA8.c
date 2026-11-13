unsigned __int64 fn_82687DA8(int *param_1,unsigned __int64 param_2,unsigned int param_3)

{
  unsigned __int64 uVar1;
  int iVar2;
  
  if (((-(unsigned int)((param_3 & 0x300) != 0) & 0x300 | param_3 & 0x10 | 3) & param_1[5]) ==
      (param_3 & 0x313)) {
    uVar1 = (**(int (***)())(*param_1 + 0x3c))();
    iVar2 = thunk_FUN_82f65ac0(uVar1,param_2);
    if (iVar2 == 0) {
      return 1;
    }
  }
  return 0;
}

