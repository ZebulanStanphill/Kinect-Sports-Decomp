extern int fn_82E57620();
extern int fn_82E576A8();
extern int fn_82EE5E28();


unsigned __int64 fn_82E72C18(int *param_1,unsigned int *param_2)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  unsigned __int64 uVar3;
  int *piVar4;
  
  if (param_1[3] == 0) {
    return 0xffffffffc00d36b6;
  }
  if (param_2 == (unsigned int *)0x0) {
    return 0xffffffff80070057;
  }
  *param_2 = 0;
  uVar1 = param_1[0x10];
  if (uVar1 < 0x18) {
    uVar3 = 0x18;
LAB_82e72c70:
    *param_2 = (unsigned int)uVar3;
    uVar2 = 0xffffffffc00d36b1;
  }
  else {
    piVar4 = param_1 + 10;
    fn_82E57620(param_1 + 4,piVar4);
    fn_82E576A8(param_1 + 8,piVar4);
    uVar3 = *(unsigned __int64 *)(param_1 + 8);
    if ((uVar3 < 0x100000000) && (0x17 < uVar3)) {
      if ((unsigned __int64)(unsigned int)param_1[0x10] < uVar3 - 0x18) goto LAB_82e72c70;
      uVar2 = fn_82EE5E28(piVar4,(uVar3 & 0xffffffff) - 0x18);
      if ((int)uVar2 < 0) {
        return uVar2;
      }
      *param_2 = uVar1 - param_1[0x10];
      uVar3 = (**(int (***)())(*param_1 + 0x2c))(param_1);
      if (uVar3 == *param_2) {
        return 0;
      }
    }
    uVar2 = 0xffffffffc00d3a9a;
  }
  return uVar2;
}

