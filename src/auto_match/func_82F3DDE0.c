extern unsigned int *auStack_40;
extern int fn_82E57620();
extern int fn_82E576A8();
extern int fn_82E57738();


__int64 fn_82F3DDE0(int *param_1,unsigned int *param_2)

{
  unsigned int uVar1;
  __int64 lVar2;
  unsigned __int64 uVar3;
  int *piVar4;
  unsigned short auStack_40 [32];
  
  if (param_1[3] == 0) {
    lVar2 = -0x3ff2c94a;
  }
  else if (param_2 == (unsigned int *)0x0) {
    lVar2 = -0x7ff8ffa9;
  }
  else {
    *param_2 = 0;
    uVar1 = param_1[0x10];
    if (uVar1 < 0x32) {
      *param_2 = 0x32;
      lVar2 = -0x3ff2c94f;
    }
    else {
      piVar4 = param_1 + 10;
      fn_82E57620(param_1 + 4,piVar4);
      fn_82E576A8(param_1 + 8,piVar4);
      lVar2 = fn_82E57620(param_1 + 0x14,piVar4);
      if ((-1 < (int)lVar2) && (lVar2 = fn_82E576A8(param_1 + 0x18,piVar4), -1 < (int)lVar2))
      {
        auStack_40[0] = 0;
        lVar2 = fn_82E57738(auStack_40,piVar4);
        if (-1 < lVar2) {
          *param_2 = uVar1 - param_1[0x10];
          uVar3 = (**(int (***)())(*param_1 + 0x44))(param_1);
          if (uVar3 != *param_2) {
            lVar2 = -0x3ff2c566;
          }
        }
      }
    }
  }
  return lVar2;
}

