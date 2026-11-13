extern int fn_82520D38();
extern int fn_8265C9E0();
extern unsigned int lbl_821C0AEC;


unsigned int * fn_824C93D8(int param_1)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  unsigned int in_register_000104d0;
  unsigned int in_register_000104d4;
  unsigned int in_register_000104d8;
  unsigned int in_vr77;
  
  puVar2 = (unsigned int *)fn_8265C9E0(0x90);
  if (puVar2 == (unsigned int *)0x0) {
    puVar2 = (unsigned int *)0x0;
  }
  else {
    fn_82520D38(puVar2,param_1);
    *puVar2 = &lbl_821C0AEC;
    puVar2[0xc] = 0;
    puVar2[0xd] = 0;
    puVar2[0xe] = 0;
    puVar2[0x10] = 0;
    puVar2[0x11] = 0;
    puVar2[0x12] = 0;
    puVar1 = (unsigned int *)((unsigned int)(puVar2 + 0x14) & 0xfffffff0);
    *puVar1 = in_register_000104d0;
    puVar1[1] = in_register_000104d4;
    puVar1[2] = in_register_000104d8;
    puVar1[3] = in_vr77;
    puVar2[0x1c] = 0;
    puVar1 = (unsigned int *)((unsigned int)(puVar2 + 0x18) & 0xfffffff0);
    *puVar1 = in_register_000104d0;
    puVar1[1] = in_register_000104d4;
    puVar1[2] = in_register_000104d8;
    puVar1[3] = in_vr77;
    puVar2[0x1d] = 0;
    puVar2[0x20] = *(unsigned int *)(param_1 + 0x48);
  }
  return puVar2;
}

