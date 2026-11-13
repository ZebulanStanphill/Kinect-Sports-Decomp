extern int fn_82A29A38();


void fn_82A9FA90(int param_1,unsigned int param_2,int param_3,unsigned int param_4,unsigned int *param_5,unsigned int *param_6)

{
  unsigned int uVar1;
  unsigned int uVar2;
  
  *param_6 = param_4;
  if (param_3 != 0x13) {
    if (param_3 == 0x14) {
code_r0x82a9fb0c:
      uVar1 = 5;
    }
    else if (param_3 == 0x15) {
code_r0x82a9fb04:
      uVar1 = 10;
    }
    else {
      if (param_3 == 0x16) {
code_r0x82a9faf8:
        uVar2 = 10;
        uVar1 = 1;
        goto code_r0x82a9fb70;
      }
      if (param_3 != 0x17) {
        fn_82A29A38();
        *param_5 = 0xf;
        *param_6 = 0xf;
        goto code_r0x82a9fb78;
      }
code_r0x82a9faec:
      uVar1 = 0xb;
    }
    *param_5 = uVar1;
    goto code_r0x82a9fb88;
  }
  if (param_4 < 10) {
    if (param_1 == 0x14) {
      *param_5 = 5;
      *param_6 = param_2;
      goto code_r0x82a9fb78;
    }
    if (param_1 == 0x15) goto code_r0x82a9fb04;
    if (param_1 == 0x16) goto code_r0x82a9faf8;
    if (param_1 == 0x17) goto code_r0x82a9faec;
    if (param_1 == 0x21) goto code_r0x82a9fb0c;
    fn_82A29A38();
    *param_5 = 0xf;
  }
  else {
    uVar1 = param_4 & 0xf;
    uVar2 = (param_4 >> 4) - 1;
code_r0x82a9fb70:
    *param_5 = uVar2;
    *param_6 = uVar1;
code_r0x82a9fb78:
    if (*param_5 < 0xe) goto code_r0x82a9fb88;
  }
  fn_82A29A38();
code_r0x82a9fb88:
  if (0xf < *param_6) {
    fn_82A29A38();
  }
  return;
}

