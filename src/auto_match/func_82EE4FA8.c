extern unsigned int *auStack_40;
extern int fn_82E3C590();
extern int fn_82E57620();
extern int fn_82E576A8();
extern int fn_82E57738();
extern int fn_82E59EC8();
extern int fn_82EE4E00();


unsigned __int64 fn_82EE4FA8(int *param_1,unsigned int *param_2)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  int iVar4;
  unsigned __int64 uVar3;
  unsigned int uVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  int *piVar8;
  unsigned short auStack_40 [32];
  
  if (param_1[3] == 0) {
    uVar2 = 0xffffffffc00d36b6;
  }
  else if (param_2 == (unsigned int *)0x0) {
    uVar2 = 0xffffffff80070057;
  }
  else {
    uVar7 = 0;
    *param_2 = 0;
    uVar1 = param_1[0x10];
    if (uVar1 < 0x32) {
      uVar5 = 0x32;
    }
    else {
      fn_82EE4E00(param_1);
      piVar8 = param_1 + 10;
      fn_82E57620(param_1 + 4,piVar8);
      fn_82E576A8(param_1 + 8,piVar8);
      uVar2 = fn_82E57620(param_1 + 0x25,piVar8);
      if ((int)uVar2 < 0) {
        return uVar2;
      }
      uVar2 = fn_82E59EC8(param_1 + 0x23,piVar8);
      if ((int)uVar2 < 0) {
        return uVar2;
      }
      uVar2 = fn_82E59EC8(param_1 + 0x24,piVar8);
      if ((int)uVar2 < 0) {
        return uVar2;
      }
      uVar2 = fn_82E57738(auStack_40,piVar8);
      if ((int)uVar2 < 0) {
        return uVar2;
      }
      uVar6 = (unsigned int)auStack_40[0];
      uVar5 = (uVar6 + 0x19) * 2;
      if (uVar5 <= uVar1) {
        if (uVar6 != 0) {
          do {
            uVar2 = fn_82E57738(auStack_40,piVar8);
            if ((int)uVar2 < 0) {
              return uVar2;
            }
            iVar4 = fn_82E3C590(param_1 + 0x12,auStack_40[0],0);
            if (iVar4 == 0) {
              return 0xffffffff8007000e;
            }
            uVar7 = uVar7 + 1 & 0xffff;
          } while (uVar7 < uVar6);
        }
        *param_2 = uVar1 - param_1[0x10];
        uVar3 = (**(int (***)())(*param_1 + 0x2c))(param_1);
        if (uVar3 != *param_2) {
          return 0xffffffffc00d3a9a;
        }
        return 0;
      }
    }
    *param_2 = uVar5;
    uVar2 = 0xffffffffc00d36b1;
  }
  return uVar2;
}

