unsigned __int64 fn_82E6F308(int *param_1,unsigned __int64 param_2)

{
  unsigned __int64 uVar1;
  unsigned __int64 uVar2;
  
  uVar2 = *(unsigned __int64 *)(param_1 + 0x12);
  if (param_2 < uVar2) {
    uVar1 = 0xffffffff80070057;
  }
  else {
    uVar1 = 0;
    if (uVar2 < param_2) {
      while (uVar1 = (**(int (***)())(*param_1 + 0x2c))(param_1,uVar2), -1 < (int)uVar1) {
        if ((param_1[0xe] != 0) && (uVar1 = (**(int (***)())(*param_1 + 0x14))(param_1), (int)uVar1 < 0)
           ) {
          return uVar1;
        }
        uVar2 = uVar2 + 1;
        if (param_2 <= uVar2) {
          return uVar1;
        }
      }
    }
  }
  return uVar1;
}

