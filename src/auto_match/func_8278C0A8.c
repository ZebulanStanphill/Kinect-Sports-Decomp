extern int fn_8267BE38();
extern int fn_8278BCF0();


void fn_8278C0A8(int param_1,unsigned int *param_2)

{
  unsigned short uVar1;
  
  if ((param_2 == (int *)0x0) || (*param_2 <= 0)) {
    fn_8267BE38(*(unsigned int *)(param_1 + 8));
    *(unsigned int *)(param_1 + 8) = 0;
    uVar1 = *(unsigned short *)(param_1 + 0x16) & 0xffbf;
  }
  else {
    fn_8278BCF0();
    uVar1 = *(unsigned short *)(param_1 + 0x16) | 0x40;
  }
  *(unsigned short *)(param_1 + 0x16) = uVar1;
  return;
}

