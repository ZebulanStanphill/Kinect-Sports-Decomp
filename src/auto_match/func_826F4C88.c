extern int fn_8267C4C8();
extern int fn_8267C4F0();
extern int fn_826D7D58();
extern int fn_826E56B8();
extern int fn_826E8340();
extern unsigned int lbl_82005700;
extern unsigned int lbl_8200DB70;
extern unsigned int lbl_8200DB78;


unsigned int * fn_826F4C88(unsigned int *param_1,int param_2,int param_3,unsigned int param_4)

{
  unsigned int *puVar1;
  unsigned int uVar2;
  __int64 lVar3;
  
  fn_826E56B8(param_1,param_3,0x20001);
  param_1[5] = &lbl_82005700;
  *param_1 = &lbl_8200DB78;
  param_1[5] = &lbl_8200DB70;
  param_1[7] = 0;
  param_1[8] = 0;
  fn_826E8340(param_1 + 10,0,*(unsigned int *)(*(int *)(param_2 + 0x20) + 0x1c),0,0);
  fn_826D7D58(param_1 + 0x9d);
  puVar1 = param_1 + 0xbb;
  lVar3 = 2;
  do {
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1 = puVar1 + 3;
    *puVar1 = 0;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  param_1[0xc2] = 0;
  param_1[0xc3] = 0;
  param_1[0xc4] = 0;
  if (*(int *)(param_3 + 0x10) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(unsigned int *)(*(int *)(param_3 + 0x10) + 0xc);
  }
  param_1[6] = uVar2;
  if (*(int *)(param_2 + 0x20) != 0) {
    fn_8267C4C8();
  }
  if (param_1[8] != 0) {
    fn_8267C4F0();
  }
  param_1[8] = *(unsigned int *)(param_2 + 0x20);
  param_1[9] = param_2;
  param_1[0xbb] = 0;
  param_1[0xad] = 0;
  param_1[0xae] = param_4;
  param_1[0xba] = 0;
  param_1[0xaf] = 0;
  param_1[0xb1] = 0;
  param_1[0xb2] = 0;
  param_1[0xb3] = 0;
  param_1[0xb4] = 0;
  param_1[0xb5] = 0;
  param_1[0xb7] = 0;
  param_1[0xb6] = 0;
  param_1[0xb9] = 0;
  param_1[0xb8] = 0;
  param_1[0xc5] = 0;
  param_1[0xb0] = 0;
  return param_1;
}

