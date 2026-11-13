extern int fn_826824B0();
extern unsigned int lbl_8200B5A8;
extern unsigned int lbl_82010118;
extern unsigned int lbl_82012A64;


unsigned int * fn_826C0910(unsigned int *param_1,unsigned int param_2)

{
  param_1[1] = param_2;
  param_1[2] = 1;
  param_1[4] = &lbl_8200B5A8;
  param_1[5] = 0;
  *param_1 = &lbl_82012A64;
  param_1[4] = &lbl_82010118;
  param_1[6] = 0;
  *(unsigned char *)(param_1 + 9) = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[10] = 0;
  *(unsigned char *)(param_1 + 0xb) = 0;
  *(unsigned char *)((int)param_1 + 0x2d) = 0;
  if (param_1[5] != 0) {
    fn_826824B0();
  }
  param_1[5] = 0;
  return param_1;
}

