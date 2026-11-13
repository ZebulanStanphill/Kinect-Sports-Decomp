extern unsigned int *auStack_50;
extern int fn_82E57620();
extern int fn_82E576A8();
extern int fn_82E57738();
extern int fn_82E59EC8();


__int64 fn_82F40160(int *param_1,unsigned int *param_2)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  unsigned __int64 *puVar3;
  __int64 lVar4;
  int *piVar5;
  unsigned int auStack_50;
  
  if (param_1[3] == 0) {
    lVar4 = -0x3ff2c94a;
  }
  else if (param_2 == (unsigned int *)0x0) {
    lVar4 = -0x7ff8ffa9;
  }
  else {
    *param_2 = 0;
    uVar1 = param_1[0x10];
    if (uVar1 < 0x2e) {
      *param_2 = 0x2e;
      lVar4 = -0x3ff2c94f;
    }
    else {
      piVar5 = param_1 + 10;
      fn_82E57620(param_1 + 4,piVar5);
      puVar3 = (unsigned __int64 *)(param_1 + 8);
      fn_82E576A8(puVar3,piVar5);
      lVar4 = fn_82E57620(param_1 + 0x12,piVar5);
      if ((-1 < lVar4) && (lVar4 = fn_82E57738(param_1 + 0x16,piVar5), -1 < lVar4)) {
        auStack_50 = 0;
        lVar4 = fn_82E59EC8(&auStack_50,piVar5);
        if (-1 < lVar4) {
          uVar2 = *puVar3;
          if ((0x2d < uVar2) && ((unsigned __int64)auStack_50 == uVar2 - 0x2e)) {
            *puVar3 = uVar2 - auStack_50;
            *param_2 = uVar1 - param_1[0x10];
            uVar2 = (**(int (***)())(*param_1 + 0x2c))(param_1);
            if (uVar2 == *param_2) {
              return lVar4;
            }
          }
          lVar4 = -0x3ff2c566;
        }
      }
    }
  }
  return lVar4;
}

