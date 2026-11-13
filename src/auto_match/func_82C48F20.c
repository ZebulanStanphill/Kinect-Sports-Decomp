extern int memcpy();
extern unsigned int lbl_820FBA20;


void fn_82C48F20(unsigned int *param_1,int param_2,unsigned int param_3,int param_4)

{
  if ((*(int *)(param_2 + 0x50c8) == 0) || (*(int *)(param_2 + 0x50cc) == 0)) {
    *param_1 = *(unsigned int *)(param_2 + 0x120);
  }
  else {
    *param_1 = *(unsigned int *)
                (&lbl_820FBA20 + (*(int *)(param_2 + 0x5514) * 6 + *(int *)(param_2 + 0x5510)));
  }
  param_1[1] = *(unsigned int *)(param_2 + 0x5568);
  param_1[2] = *(unsigned int *)(param_2 + 0x5424);
  param_1[3] = *(unsigned int *)(param_2 + 0x5428);
  param_1[4] = *(unsigned int *)(param_2 + 0x556c);
  param_1[5] = (int)param_3;
  memcpy(param_1 + 6,param_4,param_3 * 16);
  param_1[0x16] = *(unsigned int *)(param_2 + 0x54b0);
  param_1[0x17] = *(unsigned int *)(param_2 + 0xd9c);
  param_1[0x18] = *(unsigned int *)(param_2 + 0xda0);
  param_1[0x19] = *(unsigned int *)(param_2 + 0x5444);
  param_1[0x1a] = *(unsigned int *)(param_2 + 0x5448);
  param_1[0x1b] = *(unsigned int *)(param_2 + 0x567c);
  return;
}

