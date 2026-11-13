void fn_82520E68(int *param_1)

{
  unsigned int uVar1;
  int iVar2;
  
  uVar1 = param_1[2];
  if (uVar1 == 0) {
    iVar2 = 4;
  }
  else {
    if (uVar1 != 1) {
      if (2 < uVar1) {
        return;
      }
      param_1[2] = 3;
                    /* WARNING: Could not recover jumptable at 0x82520e94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(int (***)())(*param_1 + 0x10))();
      return;
    }
    iVar2 = 3;
  }
  param_1[2] = iVar2;
  return;
}

