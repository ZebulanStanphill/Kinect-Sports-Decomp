extern int fn_829DB750();
extern int fn_829DB828();
extern unsigned int lbl_83217A00;


void fn_829D3818(unsigned int *param_1,unsigned __int64 *param_2,unsigned __int64 *param_3,unsigned int *param_4)

{
  param_1[4] = *(unsigned int *)(param_2 + 1);
  *(unsigned __int64 *)(param_1 + 6) = *param_2;
  *param_1 = *(unsigned int *)(param_3 + 1);
  *(unsigned __int64 *)(param_1 + 2) = *param_3;
  param_1[8] = *param_4;
  param_1[9] = param_4[7];
  param_1[10] = param_4[0x1a];
  param_1[0xb] = param_4[0x1b];
  param_1[0xc] = *(unsigned int *)((int)param_3 + 0x1c);
  param_1[0xd] = *(unsigned int *)(param_3 + 4);
  param_1[0xe] = *(unsigned int *)((int)param_3 + 0x24);
  param_1[0x19] = param_4[0x19];
  fn_829DB750(param_1 + 0xf,param_1 + 0x10,param_1 + 0x11,param_1 + 0x12,param_1 + 0x13,
                    param_1 + 0x14);
  if (((unsigned int)param_4[0x17] <= 1) && (lbl_83217A00 != 0)) {
    fn_829DB828(param_1 + 0x18,param_1 + 0x15,param_1 + 0x16,param_1 + 0x17);
  }
  return;
}

