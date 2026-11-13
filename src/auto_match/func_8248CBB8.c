extern int fn_82365BD8();
extern unsigned int lbl_821BEA60;


void fn_8248CBB8(unsigned int *param_1,int param_2)

{
  if (param_1 != (unsigned int *)0x0) {
    *param_1 = &lbl_821BEA60;
    param_1[1] = *(unsigned int *)(param_2 + 4);
    param_1[2] = *(unsigned int *)(param_2 + 8);
    param_1[3] = *(unsigned int *)(param_2 + 0xc);
    fn_82365BD8(param_1 + 4,param_2 + 0x10);
    param_1[6] = *(unsigned int *)(param_2 + 0x18);
    param_1[7] = *(unsigned int *)(param_2 + 0x1c);
  }
  return;
}

