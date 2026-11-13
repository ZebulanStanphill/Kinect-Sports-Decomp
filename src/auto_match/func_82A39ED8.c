extern int fn_82A39CE8();


void fn_82A39ED8(int param_1,unsigned int param_2)

{
  int iVar1;
  
  *(unsigned char *)(param_1 + 0x972) = 0;
  *(unsigned char *)(param_1 + 0x973) = 1;
  fn_82A39CE8();
  if (*(unsigned int *)(param_1 + 0x1c) < 0x1000) {
    iVar1 = 0x1000;
  }
  else {
    iVar1 = *(unsigned int *)(param_1 + 0x1c) + 0x1000;
  }
  *(int *)(param_1 + 0x2520) = iVar1;
  *(unsigned int *)(param_1 + 0x864) = param_2;
  return;
}

