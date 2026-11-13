extern int fn_82E57620();
extern int fn_82E576A8();
extern int fn_82E57738();
extern int fn_82EE5620();
extern unsigned int uStack_50;


unsigned __int64 fn_82EE5720(int *param_1,unsigned int *param_2)

{
  unsigned __int64 uVar1;
  int iVar3;
  unsigned __int64 uVar2;
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  int *piVar7;
  unsigned int uStack_50;
  
  if (param_1[3] == 0) {
    uVar1 = 0xffffffffc00d36b6;
  }
  else if (param_2 == (unsigned int *)0x0) {
    uVar1 = 0xffffffff80070057;
  }
  else {
    *param_2 = 0;
    uVar5 = param_1[0x10];
    if (uVar5 < 0x1a) {
      uVar5 = 0x1a;
    }
    else {
      piVar7 = param_1 + 10;
      fn_82E57620(param_1 + 4,piVar7);
      fn_82E576A8(param_1 + 8,piVar7);
      uStack_50 = (unsigned int)(((unsigned __int64)(uStack_50) >> 16) & 0xFFFF);
      uVar1 = fn_82E57738(&uStack_50,piVar7);
      if ((int)uVar1 < 0) {
        return uVar1;
      }
      uVar4 = (unsigned int)(((unsigned __int64)(uStack_50) >> 0) & 0xFFFF);
      if (uVar4 << 2 <= (unsigned int)param_1[0x10]) {
        uVar6 = 0;
        if (uVar4 != 0) {
          do {
            uStack_50 = 0;
            uVar1 = fn_82E57738(&uStack_50,piVar7);
            if ((int)uVar1 < 0) {
              return uVar1;
            }
            uVar1 = fn_82E57738((int)&uStack_50 + 2,piVar7);
            if ((int)uVar1 < 0) {
              return uVar1;
            }
            iVar3 = fn_82EE5620(param_1 + 0x13,uStack_50,0);
            if (iVar3 == 0) {
              return 0xffffffff8007000e;
            }
            uVar6 = uVar6 + 1 & 0xffff;
          } while (uVar6 < uVar4);
        }
        *param_2 = uVar5 - param_1[0x10];
        uVar2 = (**(int (***)())(*param_1 + 0x2c))(param_1);
        if (uVar2 != *param_2) {
          return 0xffffffffc00d3a9a;
        }
        return 0;
      }
      uVar5 = (unsigned int)(((unsigned __int64)(uStack_50) >> 0) & 0xFFFF) * 4 + 0x1a;
    }
    *param_2 = uVar5;
    uVar1 = 0xffffffffc00d36b1;
  }
  return uVar1;
}

