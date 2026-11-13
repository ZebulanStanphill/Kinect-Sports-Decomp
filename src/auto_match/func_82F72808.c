extern int fn_82F72318();
extern unsigned int lbl_82169D64;


unsigned int * fn_82F72808(unsigned int *param_1,int param_2)

{
  unsigned int *puVar1;
  
  if (param_2 == 0) {
    *param_1 = 0;
    *(unsigned char *)(param_1 + 1) = 0;
  }
  else {
    puVar1 = (unsigned int *)fn_82F72318(0xffffffff832635a0,8,0);
    if (puVar1 == (unsigned int *)0x0) {
      puVar1 = (unsigned int *)0x0;
    }
    else {
      *puVar1 = &lbl_82169D64;
      if ((*(char *)(param_2 + 4) == '\x02') || (*(char *)(param_2 + 4) == '\x03')) {
        param_2 = 0;
      }
      puVar1[1] = param_2;
    }
    *param_1 = puVar1;
    *(unsigned char *)(param_1 + 1) = -(puVar1 == (unsigned int *)0x0) & 3;
  }
  *(unsigned char *)((int)param_1 + 5) = 0;
  return param_1;
}

