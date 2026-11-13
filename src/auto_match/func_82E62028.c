extern int fn_82E57620();
extern int fn_82E576A8();
extern int fn_82E59EC8();
extern int fn_82EE5E28();
extern int fn_82EE5F60();


unsigned __int64 fn_82E62028(int *param_1,unsigned int *param_2)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  unsigned __int64 uVar3;
  int *piVar4;
  
  if (param_1[3] == 0) {
    uVar2 = 0xffffffffc00d36b6;
  }
  else if (param_2 == (unsigned int *)0x0) {
    uVar2 = 0xffffffff80070057;
  }
  else {
    *param_2 = 0;
    uVar1 = param_1[0x10];
    if (uVar1 < 0x68) {
      *param_2 = 0x68;
      uVar2 = 0xffffffffc00d36b1;
    }
    else {
      piVar4 = param_1 + 10;
      fn_82E57620(param_1 + 4,piVar4);
      fn_82E576A8(param_1 + 8,piVar4);
      uVar2 = fn_82E57620(param_1 + 0x12,piVar4);
      if ((-1 < (int)uVar2) && (uVar2 = fn_82E576A8(param_1 + 0x16,piVar4), -1 < (int)uVar2))
      {
        uVar2 = fn_82EE5F60(piVar4,param_1 + 0x18,8);
        if (-1 < (int)uVar2) {
          uVar2 = fn_82EE5E28(piVar4,8);
        }
        if ((((((-1 < (int)uVar2) &&
               (uVar2 = fn_82E576A8(param_1 + 0x1a,piVar4), -1 < (int)uVar2)) &&
              (uVar2 = fn_82E576A8(param_1 + 0x1c,piVar4), -1 < (int)uVar2)) &&
             ((uVar2 = fn_82E576A8(param_1 + 0x1e,piVar4), -1 < (int)uVar2 &&
              (uVar2 = fn_82E576A8(param_1 + 0x20,piVar4), -1 < (int)uVar2)))) &&
            ((uVar2 = fn_82E59EC8(param_1 + 0x22,piVar4), -1 < (int)uVar2 &&
             ((uVar2 = fn_82E59EC8(param_1 + 0x23,piVar4), -1 < (int)uVar2 &&
              (uVar2 = fn_82E59EC8(param_1 + 0x24,piVar4), -1 < (int)uVar2)))))) &&
           (uVar2 = fn_82E59EC8(param_1 + 0x25,piVar4), -1 < (int)uVar2)) {
          *param_2 = uVar1 - param_1[0x10];
          uVar3 = (**(int (***)())(*param_1 + 0x2c))(param_1);
          if (uVar3 == *param_2) {
            uVar2 = 0;
          }
          else {
            uVar2 = 0xffffffffc00d3a9a;
          }
        }
      }
    }
  }
  return uVar2;
}

