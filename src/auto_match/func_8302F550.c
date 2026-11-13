#define true 1


void fn_8302F550(int param_1,int param_2,unsigned int *param_3)

{
  unsigned int *puVar1;
  
  puVar1 = *(unsigned int **)(param_1 + 0xe4);
  do {
    if (puVar1 == (unsigned int *)0x0) {
code_r0x8302f574:
      param_3[1] = 0;
      *param_3 = 0;
      *(unsigned char *)(param_3 + 2) = *(unsigned char *)(param_3 + 2) & 7;
      return;
    }
    if (puVar1[1] == param_2) {
      if (puVar1 + 2 != (unsigned int *)0x0) {
        *param_3 = puVar1[2];
        param_3[1] = puVar1[3];
        param_3[2] = puVar1[4];
        return;
      }
      goto code_r0x8302f574;
    }
    puVar1 = (unsigned int *)*puVar1;
  } while( true );
}

