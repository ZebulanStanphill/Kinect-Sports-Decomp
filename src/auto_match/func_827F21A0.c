unsigned __int64 fn_827F21A0(int param_1,unsigned int param_2)

{
  int uVar1;
  
  uVar1 = (unsigned int)*(unsigned char *)(param_1 + 0x54);
  if (*(int *)((*(unsigned char *)(param_1 + 0x54) + 8) * 4 + param_1) != param_2) {
    do {
      if (uVar1 == *(unsigned char *)(param_1 + 0x53)) {
        return 0;
      }
      uVar1 = uVar1 + 1 & 3;
    } while (*(int *)((uVar1 + 8) * 4 + param_1) != param_2);
  }
  return 1;
}

