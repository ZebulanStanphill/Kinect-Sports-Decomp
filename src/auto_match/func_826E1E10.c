extern unsigned int lbl_8200C93C;
extern unsigned int lbl_821AAD20;


void fn_826E1E10(int param_1,__int64 param_2)

{
  unsigned int uVar1;
  unsigned int *puVar2;
  
  uVar1 = lbl_821AAD20;
  if ((int)param_2 == 0) {
    return;
  }
  puVar2 = (unsigned int *)(param_1 + 0x14);
  do {
    if (puVar2 != (unsigned int *)0x14) {
      puVar2[-5] = &lbl_8200C93C;
      puVar2[-4] = 1;
      puVar2[-3] = 0;
      puVar2[-2] = 0;
      puVar2[-1] = uVar1;
      *puVar2 = uVar1;
      puVar2[1] = uVar1;
      puVar2[2] = uVar1;
    }
    puVar2 = puVar2 + 10;
    param_2 = param_2 + -1;
  } while (param_2 != 0);
  return;
}

