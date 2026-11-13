extern int fn_8267B890();
extern int fn_826824B0();
extern int fn_826A73B0();
extern int fn_826B0B48();
extern unsigned int lbl_82007798;


unsigned int * fn_826B1CC8(int param_1)

{
  unsigned int *puVar1;
  unsigned int uVar2;
  unsigned int *apuStack_20 [2];
  
  puVar1 = (unsigned int *)fn_8267B890(*(unsigned int *)(*(int *)(param_1 + 0x78) + 0x288),0x48,0)
  ;
  if (puVar1 == (unsigned int *)0x0) {
    puVar1 = (unsigned int *)0x0;
  }
  else {
    uVar2 = fn_826A73B0(param_1);
    puVar1[1] = uVar2;
    puVar1[2] = 1;
    *puVar1 = &lbl_82007798;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[6] = 0;
    puVar1[7] = 0;
    puVar1[8] = 0;
    puVar1[9] = 0;
    *(unsigned char *)(puVar1 + 10) = 0;
    *(unsigned char *)(puVar1 + 0xe) = 0;
  }
  apuStack_20[0] = puVar1;
  fn_826B0B48(param_1 + 200,apuStack_20);
  if (puVar1 != (unsigned int *)0x0) {
    fn_826824B0(puVar1);
  }
  return puVar1;
}

