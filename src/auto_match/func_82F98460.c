extern int fn_82F655D8();
extern unsigned int lbl_82005718;
extern unsigned int lbl_82015618;


unsigned __int64 fn_82F98460(int param_1,unsigned int *param_2)

{
  double dVar1;
  
  *(unsigned int *)(param_1 + 4) = *param_2;
  *(unsigned int *)(param_1 + 8) = param_2[1];
  *(unsigned int *)(param_1 + 0xc) = param_2[2];
  *(unsigned int *)(param_1 + 0x10) = param_2[3];
  dVar1 = (double)fn_82F655D8(lbl_82015618,(double)((float)param_2[4] * lbl_82005718));
  *(float *)(param_1 + 0x14) = (float)dVar1;
  *(unsigned char *)(param_1 + 0x18) = *(unsigned char *)(param_2 + 5);
  *(unsigned char *)(param_1 + 0x19) = *(unsigned char *)((int)param_2 + 0x15);
  return 1;
}

