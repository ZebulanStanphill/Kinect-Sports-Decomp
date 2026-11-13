unsigned __int64 fn_8267E160(unsigned int *param_1,__int64 param_2)

{
  char cVar2;
  unsigned __int64 uVar1;
  unsigned int uVar3;
  unsigned int *puVar4;
  unsigned int uVar5;
  
  uVar3 = (unsigned int)param_2;
  uVar5 = 0;
  puVar4 = param_1;
  if (uVar3 != 0) {
    do {
      cVar2 = (**(int (***)())(*(int *)*puVar4 + 8))();
      if (cVar2 == '\0') break;
      uVar5 = uVar5 + 1;
      puVar4 = puVar4 + 1;
    } while (uVar5 < uVar3);
  }
  if (uVar5 == uVar3) {
    if (uVar3 != 0) {
      param_1 = param_1 + -1;
      do {
        param_1 = param_1 + 1;
        (**(int (***)())(*(int *)*param_1 + 0xc))();
        param_2 = param_2 + -1;
      } while (param_2 != 0);
    }
    uVar1 = 1;
  }
  else {
    if (uVar5 != 0) {
      param_1 = param_1 + uVar5;
      do {
        param_1 = param_1 + -1;
        uVar5 = uVar5 - 1;
        (**(int (***)())(*(int *)*param_1 + 0x10))();
      } while (uVar5 != 0);
    }
    uVar1 = 0;
  }
  return uVar1;
}

