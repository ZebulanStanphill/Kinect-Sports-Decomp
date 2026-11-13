extern int fn_8251A808();
extern int fn_8251A8D0();
extern int fn_828C40D8();


void fn_82519DD0(unsigned __int64 param_1,int *param_2)

{
  unsigned int uVar1;
  int (**pcVar2)();
  
  uVar1 = param_2[0x14];
  if (uVar1 == 0) {
    fn_8251A808(param_2);
    return;
  }
  if (uVar1 == 1) {
    return;
  }
  if (uVar1 < 3) {
    if (param_2[0x16] != 2) {
      return;
    }
    if (*(char *)(param_2 + 0x17) == '\0') {
      return;
    }
    param_2[3] = 0;
    return;
  }
  if (uVar1 == 3) {
    if (param_2[0x16] == 3) {
      if (*(char *)(param_2 + 0x17) != '\0') {
        pcVar2 = *(int (***)())(*param_2 + 0x20);
        goto LAB_82519e7c;
      }
    }
    else {
      (**(int (***)())(*param_2 + 0x18))(param_1,param_2);
    }
    pcVar2 = *(int (***)())(*param_2 + 0x1c);
  }
  else {
    if (4 < uVar1) {
      if (uVar1 != 5) {
        return;
      }
      fn_8251A8D0();
      return;
    }
    if (param_2[0x16] == 4) {
      if (*(char *)(param_2 + 0x17) == '\0') {
        return;
      }
      fn_828C40D8(*(unsigned int *)(param_2[1] + 8));
      return;
    }
    pcVar2 = *(int (***)())(*param_2 + 0x24);
  }
LAB_82519e7c:
  (*pcVar2)(param_1,param_2);
  return;
}

