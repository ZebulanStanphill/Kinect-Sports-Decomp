extern unsigned int *auStack_20;


unsigned __int64 fn_82E3B7C8(unsigned __int64 param_1,int *param_2)

{
  unsigned __int64 uVar1;
  unsigned __int64 uVar2;
  unsigned int auStack_20 [2];
  
  if (param_2 == (int *)0x0) {
    uVar1 = 0xffffffff80004003;
  }
  else {
    auStack_20[0] = 0;
    uVar1 = (**(int (***)())(*param_2 + 0xc))(param_2,0xffffffff82154a18,auStack_20);
    if ((-1 < (int)uVar1) && (auStack_20[0] != 0)) {
      do {
        uVar1 = (**(int (***)())(*param_2 + 0x18))(param_2,0xffffffff82154a18,0,0);
        if ((int)uVar1 < 0) {
          return uVar1;
        }
        uVar2 = (unsigned __int64)auStack_20[0];
        auStack_20[0] = (unsigned int)(uVar2 - 1);
      } while (uVar2 - 1 != 0);
    }
  }
  return uVar1;
}

