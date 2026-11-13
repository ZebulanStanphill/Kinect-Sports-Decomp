extern int fn_8267B890();
extern unsigned int lbl_831E7E64;


unsigned int fn_8272AAE8(int param_1)

{
  unsigned int *puVar1;
  
  if (*(int *)(param_1 + 0x18) == 0) {
    puVar1 = (unsigned int *)fn_8267B890(lbl_831E7E64,0xc,0);
    if (puVar1 == (unsigned int *)0x0) {
      puVar1 = (unsigned int *)0x0;
    }
    else {
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
    }
    *(unsigned int **)(param_1 + 0x18) = puVar1;
  }
  return *(unsigned int *)(param_1 + 0x18);
}

