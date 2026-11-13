extern int fn_8253D7A8();
extern int fn_82CE4040();
extern int fn_82CED2F8();
extern unsigned int lbl_82139E94;


unsigned int * fn_82D937A8(unsigned int *param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  param_1[2] = 0;
  *(unsigned short *)((int)param_1 + 6) = 1;
  *param_1 = &lbl_82139E94;
  param_1[3] = 0;
  fn_8253D7A8(param_1 + 4,param_2,0,param_3);
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0x80000000;
  param_1[0x1b] = 0xffffffd1;
  *(unsigned short *)(param_1 + 0x1c) = 0;
  fn_82CED2F8(param_1 + 0x1d);
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0x80000000;
  param_1[0x21] = 0;
  param_1[0x22] = 0xffffffff;
  *(char *)(param_1 + 8) = (char)param_1 - (char)(param_1 + 4);
  if ((param_2 & 0xffffffff) != 0) {
    fn_82CE4040(param_2);
  }
  return param_1;
}

