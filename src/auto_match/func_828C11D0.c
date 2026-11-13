extern int fn_822975D8();
extern int fn_82A1C098();
extern int fn_82CE0EB0();
extern unsigned int lbl_82026038;


unsigned int *
fn_828C11D0(unsigned int *param_1,unsigned int param_2,unsigned __int64 *param_3,unsigned int *param_4)

{
  int iVar1;
  unsigned int *puVar2;
  __int64 lVar3;
  
  *param_1 = &lbl_82026038;
  *(unsigned __int64 *)(param_1 + 2) = *param_3;
  param_1[9] = 7;
  param_1[8] = 0;
  *(unsigned short *)(param_1 + 4) = 0;
  fn_822975D8(param_1 + 4,param_4,0,0xffffffffffffffff);
  param_1[0x12] = param_2;
  *(unsigned char *)(param_1 + 0x13) = 0;
  puVar2 = param_1 + 10;
  lVar3 = 7;
  do {
    puVar2 = puVar2 + 1;
    *puVar2 = 0;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  if (7 < (unsigned int)param_4[5]) {
    param_4 = (unsigned int *)*param_4;
  }
  iVar1 = fn_82CE0EB0(param_1[0x12],1,param_1 + 2,param_4,param_1 + 0xb);
  if (iVar1 != 0) {
    if (iVar1 == 0x3e5) {
      *(unsigned char *)(param_1 + 0x13) = 1;
      return param_1;
    }
    fn_82A1C098(param_1 + 0xb);
  }
  *(unsigned char *)(param_1 + 0x13) = 0;
  return param_1;
}

