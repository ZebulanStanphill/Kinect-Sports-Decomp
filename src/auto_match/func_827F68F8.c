void fn_827F68F8(int param_1,unsigned int param_2,unsigned int param_3,short *param_4,unsigned int param_5)

{
  short *psVar1;
  int iVar2;
  
  if ((param_4 != (short *)0x0) && (*param_4 != -1)) {
    iVar2 = 0;
    psVar1 = param_4;
    if ((int)(param_5 & 0xffff) > 0) {
      do {
        if (psVar1[1] == -1) break;
        iVar2 = iVar2 + 1;
        psVar1 = psVar1 + 1;
      } while (iVar2 < (int)(param_5 & 0xffff));
    }
  }
  *(unsigned int *)(param_1 + 0x20) = param_2;
  *(unsigned int *)(param_1 + 0x24) = param_3;
  *(short **)(param_1 + 0x28) = param_4;
  return;
}

