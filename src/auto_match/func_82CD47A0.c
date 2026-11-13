extern int fn_82CD3838();


unsigned __int64 fn_82CD47A0(int param_1,int param_2,int param_3,unsigned int param_4,unsigned int param_5)

{
  if (*(int *)(param_3 + 0xc) == 0) {
    *(int *)(param_3 + 0x14) = *(int *)(param_3 + 0x38) + param_1;
  }
  else if (*(int *)(param_3 + 0xc) == 1) {
    *(int *)(param_3 + 0x18) = *(int *)(param_3 + 0x3c) + param_1;
    if (param_4 != 0) {
      *(int *)(param_3 + 0x1c) = param_4;
    } else {
      *(int *)(param_3 + 0x1c) = *(int *)(param_3 + 0x40) + param_1;
    }
    if (param_5 != 0) {
      *(int *)(param_3 + 0x20) = param_5;
    } else {
      *(int *)(param_3 + 0x20) = *(int *)(param_3 + 0x44) + param_1;
    }
  }
  if (*(int *)(param_3 + 0x10) == 0) {
    *(int *)(param_3 + 0x24) = *(int *)(param_3 + 0x48) + param_2;
  }
  else if ((*(int *)(param_3 + 0x10) == 1) && (*(int *)(param_3 + 0x34) != 1)) {
    *(int *)(param_3 + 0x28) = param_2;
    *(int *)(param_3 + 0x2c) = *(int *)(param_3 + 0x4c) + param_2;
    *(int *)(param_3 + 0x30) = *(int *)(param_3 + 0x50) + param_2;
  }
  if (*(unsigned int *)(param_3 + 0x38e0) == 1) {
    fn_82CD3838(param_3);
  }
  return 0;
}

