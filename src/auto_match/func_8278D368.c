extern int fn_8278CF00();


void fn_8278D368(int param_1,unsigned char param_2)

{
  unsigned char bVar1;
  
  if (((*(unsigned short *)(param_1 + 0x2a) >> 0xb & 1) != 0) &&
     ((*(unsigned char *)(param_1 + 0x28) >> 1 & 1) != param_2)) {
    fn_8278CF00();
  }
  if (param_2 == 0) {
    bVar1 = *(unsigned char *)(param_1 + 0x28) & 0xfd;
  }
  else {
    bVar1 = *(unsigned char *)(param_1 + 0x28) | 2;
  }
  *(unsigned char *)(param_1 + 0x28) = bVar1;
  *(unsigned short *)(param_1 + 0x2a) = *(unsigned short *)(param_1 + 0x2a) | 0x20;
  return;
}

