extern unsigned int *auStack_20;


unsigned __int64 fn_82E6FE08(int *param_1)

{
  unsigned __int64 uVar1;
  int iVar3;
  unsigned __int64 uVar2;
  unsigned int auStack_20 [4];
  
  if (param_1[0x17] == 0) {
    uVar1 = 0xffffffffc00d36b2;
  }
  else {
    auStack_20[0] = 0;
    uVar1 = (**(int (***)())(*param_1 + 0x38))(param_1,auStack_20);
    if (-1 < (int)uVar1) {
      if (auStack_20[0] == 0) {
        iVar3 = 500;
      }
      else {
        trapDoubleWordImmediate(6,(unsigned __int64)auStack_20[0],0);
        uVar2 = 4000000000 / (unsigned __int64)auStack_20[0];
        iVar3 = (int)uVar2;
        if (0xffffffff < uVar2) {
          iVar3 = -1;
        }
      }
      param_1[0x18] = iVar3;
      uVar1 = 0;
    }
  }
  return uVar1;
}

