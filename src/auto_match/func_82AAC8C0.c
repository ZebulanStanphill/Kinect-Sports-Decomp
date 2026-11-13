extern int fn_82A29A38();


unsigned int fn_82AAC8C0(int param_1,unsigned int param_2,unsigned int *param_3,unsigned int *param_4)

{
  unsigned int uVar1;
  unsigned int uVar2;
  
  if (param_1 == 0) {
    uVar2 = 4;
LAB_82aac9ac:
    *param_4 = uVar2;
  }
  else {
    if (param_1 == 3) {
      if (0xffff0103 < *param_3) {
        fn_82A29A38();
      }
      uVar1 = param_3[param_2 + 0x29];
      *param_4 = 4;
      param_2 = 0;
      if (uVar1 != 0) {
        return uVar1;
      }
    }
    else {
      if (param_1 == 8) {
        if (*param_3 < 0xffff0200) {
          fn_82A29A38();
        }
        if (3 < param_2) {
          fn_82A29A38();
        }
        if (*param_3 == 0xffff0200) {
          param_3[0x28] = 1 << (param_2 & 0x3f) | param_3[0x28];
          *param_4 = 4;
          return param_2 + 0x23;
        }
        uVar2 = 0x17;
        goto LAB_82aac9ac;
      }
      if (param_1 == 9) {
        *param_4 = 4;
        param_3[0x27] = 1;
        return 0x22;
      }
    }
    fn_82A29A38();
  }
  return param_2;
}

