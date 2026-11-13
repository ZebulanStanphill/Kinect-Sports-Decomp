void fn_8272FB70(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xa0);
  if (iVar1 == 0) {
    return;
  }
  *(unsigned char *)(iVar1 + 0x120) = *(unsigned char *)(param_2 + 8);
  *(unsigned char *)(iVar1 + 0x121) = *(unsigned char *)(param_2 + 9);
  *(unsigned char *)(iVar1 + 0x122) = *(unsigned char *)(param_2 + 10);
  *(unsigned char *)(iVar1 + 0x123) = *(unsigned char *)(param_2 + 0xb);
  *(unsigned char *)(iVar1 + 0x124) = *(unsigned char *)(param_2 + 0xc);
  *(unsigned char *)(iVar1 + 0x125) = *(unsigned char *)(param_2 + 0xd);
  *(unsigned char *)(iVar1 + 0x126) = *(unsigned char *)(param_2 + 0xe);
  *(unsigned char *)(iVar1 + 0x127) = *(unsigned char *)(param_2 + 0xf);
  *(unsigned short *)(iVar1 + 0x128) = *(unsigned short *)(param_2 + 0x10);
  *(unsigned short *)(iVar1 + 0x12a) = *(unsigned short *)(param_2 + 0x12);
  *(unsigned short *)(iVar1 + 300) = *(unsigned short *)(param_2 + 0x14);
  *(unsigned short *)(iVar1 + 0x12e) = *(unsigned short *)(param_2 + 0x16);
  *(unsigned int *)(iVar1 + 0x130) = *(unsigned int *)(param_2 + 0x18);
  return;
}

