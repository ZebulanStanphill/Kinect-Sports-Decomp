extern int fn_829B5278();
extern int fn_829B57C0();


unsigned __int64 fn_829B5830(int *param_1)

{
  int iVar1;
  unsigned __int64 uVar2;
  
  iVar1 = param_1[0x6e];
  if (*(int *)(iVar1 + 0x14) == 0) {
    uVar2 = (**(int (***)())(param_1[0x6f] + 4))(param_1);
    if ((int)uVar2 == 1) {
      if (*(int *)(iVar1 + 0x18) == 0) {
        if (*(int *)(iVar1 + 0x10) == 0) {
          *(unsigned int *)(*param_1 + 0x14) = 0x23;
          (**(int (***)())*param_1)(param_1);
        }
        fn_829B57C0(param_1);
      }
      else {
        fn_829B5278(param_1);
        *(unsigned int *)(iVar1 + 0x18) = 0;
      }
    }
    else if ((int)uVar2 == 2) {
      *(unsigned int *)(iVar1 + 0x14) = 1;
      if (*(int *)(iVar1 + 0x18) == 0) {
        if (param_1[0x25] < param_1[0x27]) {
          param_1[0x27] = param_1[0x25];
        }
      }
      else if (*(int *)(param_1[0x6f] + 0x10) != 0) {
        *(unsigned int *)(*param_1 + 0x14) = 0x3b;
        (**(int (***)())*param_1)(param_1);
      }
    }
  }
  else {
    uVar2 = 2;
  }
  return uVar2;
}

