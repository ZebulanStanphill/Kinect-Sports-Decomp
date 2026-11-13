extern int fn_82A9A668();
extern int fn_82A9A780();
extern int fn_82A9CF38();
extern unsigned int lbl_820D2B34;


unsigned int * fn_82A9CDB8(unsigned int *param_1)

{
  unsigned int *puVar1;
  
  *param_1 = &lbl_820D2B34;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  puVar1 = param_1 + 0x24;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x22] = 1;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  *(unsigned short *)(param_1 + 0x27) = 0;
  *(unsigned short *)((int)param_1 + 0x9e) = 0;
  param_1[9] = 0;
  if (param_1[10] == 0) {
    fn_82A9CF38(param_1 + 8,1,puVar1);
  }
  param_1[5] = 0;
  if (param_1[6] == 0) {
    fn_82A9A668(param_1 + 4,1,puVar1);
  }
  param_1[0xf] = 0;
  if ((unsigned int)param_1[0x10] < 8) {
    fn_82A9A780(param_1 + 0xe,8,puVar1);
  }
  param_1[0x20] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  return param_1;
}

