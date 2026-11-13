void fn_82E22968(int *param_1,int param_2)

{
  unsigned int uVar1;
  
  uVar1 = (*(int (**)())(*param_1 + 0x28))(param_1);
  *(char *)(param_2 + 0x1d) = *(char *)(param_2 + 10) ^ (unsigned char)uVar1;
  *(char *)(param_2 + 0x39) = (unsigned char)((unsigned int)uVar1 >> 8) ^ *(char *)(param_2 + 0x14);
  *(char *)(param_2 + 0x2d) = (unsigned char)((unsigned int)uVar1 >> 0x10) ^ *(char *)(param_2 + 0x1f);
  *(char *)(param_2 + 0x3e) = (unsigned char)((unsigned int)uVar1 >> 0x18) ^ *(char *)(param_2 + 3);
  return;
}

