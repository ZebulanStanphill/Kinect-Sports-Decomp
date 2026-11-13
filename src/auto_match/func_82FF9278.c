extern int fn_82F68B68();


void fn_82FF9278(__int64 param_1,unsigned int *param_2,unsigned __int64 param_3)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  unsigned int uVar3;
  
  uVar1 = *param_2;
  uVar2 = 0xffffffffffffffff;
  uVar3 = 0;
  if (uVar1 < 8) {
    if (uVar1 == 1) {
code_r0x82ff92b4:
      uVar2 = (unsigned __int64)param_2[5];
code_r0x82ff92b8:
      uVar3 = param_2[4];
      goto code_r0x82ff92d8;
    }
    if ((uVar1 != 2) && (uVar1 != 3)) {
      if (uVar1 == 4) goto code_r0x82ff92d8;
      if (uVar1 != 5) {
        if ((uVar1 != 6) && (uVar1 == 0)) goto code_r0x82ff92b4;
        goto code_r0x82ff92b8;
      }
    }
  }
  if (param_2[4] == 1) {
    uVar3 = param_2[5];
  }
  else {
    uVar3 = 0;
  }
code_r0x82ff92d8:
  fn_82F68B68(param_1 + 0x4a4,param_2[1],uVar3,param_3,uVar2,param_2[2]);
  return;
}

