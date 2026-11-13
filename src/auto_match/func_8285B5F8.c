extern int fn_828106A0();
extern int fn_82F691F0();


void fn_8285B5F8(int param_1,char param_2,int param_3)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  
  puVar2 = (unsigned int *)(*(int *)(param_1 + 0x68) + *(int *)(param_3 + 8));
  puVar1 = puVar2 + 0xc;
  if (param_2 == '\0') {
    puVar1 = (unsigned int *)0x0;
  }
  *puVar2 = *(unsigned int *)(param_1 + 0x50);
  fn_828106A0(puVar2 + 1);
  puVar2[4] = 0;
  fn_828106A0(puVar2 + 5);
  fn_828106A0(puVar2 + 8);
  if (param_2 != '\0') {
    puVar2[0xb] = puVar1;
  }
                    /* WARNING: Subroutine does not return */
  fn_82F691F0(puVar2[0xb],0,*(unsigned int *)(param_1 + 0x60));
}

