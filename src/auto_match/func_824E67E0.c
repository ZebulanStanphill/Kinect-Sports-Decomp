extern int fn_82576478();
extern int fn_8265C9E0();
extern unsigned int lbl_821C1474;
extern unsigned int lbl_821CA460;


unsigned int fn_824E67E0(int param_1,int param_2)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  
  if (*(int *)(param_2 + 0x14) == 0) {
    puVar1 = *(unsigned int **)(param_1 + 0x93c);
    puVar2 = (unsigned int *)fn_8265C9E0(0x80);
    if (puVar2 == (unsigned int *)0x0) {
      puVar2 = (unsigned int *)0x0;
    }
    else {
      puVar2[1] = puVar1;
      *puVar2 = &lbl_821C1474;
      puVar2[5] = lbl_821CA460;
      if (puVar1 == (unsigned int *)0x0) {
        puVar2[2] = 0;
      }
      else {
        puVar2[2] = *puVar1;
      }
      puVar2[3] = 0;
    }
    *(unsigned int **)(param_2 + 0x14) = puVar2;
    fn_82576478(puVar1);
  }
  return *(unsigned int *)(param_2 + 0x14);
}

