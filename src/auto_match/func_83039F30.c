extern unsigned int lbl_831BC8E8;


int fn_83039F30(int param_1,int param_2,int param_3,unsigned int param_4)

{
  int uVar1;
  
  if (*(short *)(param_2 + 0xe) == 0) {
    uVar1 = 0x11;
  }
  else {
    do {
      uVar1 = ((int (*)())(&lbl_831BC8E8)
                        [*(int *)(param_1 + 0x40) * 0xc + (unsigned int)*(unsigned char *)(param_1 + 0x4c)])
                        (param_2,param_3,param_4,param_1);
      if ((*(int *)(param_1 + 0x40) == 2) && (*(unsigned int *)(param_1 + 0x2c) >= 0x400)) {
        *(unsigned int *)(param_1 + 0x40) = 1;
        *(unsigned int *)(param_1 + 0x24) = *(unsigned int *)(param_1 + 0x28);
      }
    } while ((*(short *)(param_2 + 0xe) != 0) &&
            (*(unsigned short *)(param_3 + 0xe) < param_4));
  }
  return uVar1;
}

