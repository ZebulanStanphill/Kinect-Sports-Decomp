extern int fn_82C2B590();


void fn_82A6C3A0(unsigned *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if ((param_1 != (int *)0x0) && (*param_1 != 0)) {
    if (0 < (int)param_2) {
      int remaining;
      iVar1 = 0;
      remaining=param_2;
      do {
        iVar2 = *param_1 + iVar1;
        if (*(unsigned *)(iVar2 + 4) != 0) {
          fn_82C2B590(*(unsigned *)(iVar2 + 4));
          *(unsigned int *)(iVar2 + 4) = 0;
        }
        if (*(unsigned *)(iVar2 + 0x88) != 0) {
          fn_82C2B590(*(unsigned *)(iVar2 + 0x88));
          *(unsigned int *)(iVar2 + 0x88) = 0;
        }
        if (*(unsigned *)(iVar2 + 0x8c) != 0) {
          fn_82C2B590(*(unsigned *)(iVar2 + 0x8c));
          *(unsigned int *)(iVar2 + 0x8c) = 0;
        }
        if (*(unsigned *)(iVar2 + 0x90) != 0) {
          fn_82C2B590(*(unsigned *)(iVar2 + 0x90));
          *(unsigned int *)(iVar2 + 0x90) = 0;
        }
        if (*(unsigned *)(iVar2 + 0x94) != 0) {
          fn_82C2B590(*(unsigned *)(iVar2 + 0x94));
          *(unsigned int *)(iVar2 + 0x94) = 0;
        }
        remaining = remaining - 1;
        iVar1 = iVar1 + 0x98;
      } while (remaining != 0);
    }
    if (*param_1 != 0) {
      fn_82C2B590(*param_1);
      *param_1 = 0;
    }
  }
  return;
}

